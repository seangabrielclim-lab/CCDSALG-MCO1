/**

    >> Encode your group number (2 digits) and last names, first names and sections of group members.  Encode the purpose of this file.

    Group #: 09  (2 digits)

    JUGNO, DANIEL CHRISTOPHER  S04
    LIM,   SEAN GABRIEL        S09
    CHUA,  HANELLE CELINNE     S09 

    PURPOSE OF THIS FILE: contains the stack operations such as create, push, and pop

    >> GENERAL INSTRUCTIONS: NON-COMPLIANCE WILL RESULT INTO AT LEAST A 10 POINT DEDUCTION!
    1. Adhere with good programming style and practice (learned from CCPROG1 and CCPROG2).
    2. Do NOT use global variables!  
    3. Do NOT use goto statement!
    4. Do NOT use return in a void function!

*/

#include <math.h>
#include <stdbool.h>
#include "sort.h"

/*
    a. Name of Programmer(s):  Jugno, Daniel Christopher
    b. Name of Tester(s)    :  Lim, Sean
    c. Code Type -- 100% Human Generated 
    d. Purpose: this function will search for the anchor point
    e. Return: returns the anchor point (lowest y value point, and the leftmost instead incase of two equal bottom most y values)
    f. Parameters: points[] is the set of points, n is the number of elements in the points array
*/
Point searchAnchor(Point points[], int n){
	Point anchor = points[0]; // assumes first element is the anchor
	int i;
	for (i = 1; i < n; i++){
		if (points[i].y < anchor.y){
			anchor = points[i];
		}
		else if ((points[i].y == anchor.y) && (points[i].x < anchor.x)){
			anchor = points[i];
		}
	}
	return anchor;
}

/*
    a. Name of Programmer(s):  Jugno, Daniel Christopher
    b. Name of Tester(s)    :  Lim, Sean
    c. Code Type -- 100% Human Generated 
    d. Purpose: this function will calculate the angle between the anchor point and a another given point
    e. Return: returns the angle formed by a point and the anchor point, in reference to the horizontal x axis
    f. Parameters: p0 is anchor point, a is another point
*/
double computeAngle(Point p0, Point a){
	return atan2((a.y - p0.y), (a.x - p0.x));
}

/*
    a. Name of Programmer(s):  Jugno, Daniel Christopher
    b. Name of Tester(s)    :  Lim, Sean
    c. Code Type -- 100% Human Generated 
    d. Purpose: this function will compute the distance between two points
    e. Return: returns the distance between the two points a and b
    f. Parameters: a is the first point, b is the second point 
*/
double computeDistance(Point a, Point b){
	double distance = sqrt(((a.x - b.x)*(a.x - b.x)) + ((a.y - b.y)*(a.y - b.y))); // dist between 2 points formula
	return distance;
}

/*
    a. Name of Programmer(s):  Jugno, Daniel Christopher
    b. Name of Tester(s)    :  Lim, Sean
    c. Code Type -- 100% Human Generated 
    d. Purpose: this function will compare two points a and b by the angle they form with p0
    e. Return: returns true if a forms a smaller angle with p0, false if b forms a smaller angle with p0. In case points are collinear, returns true if point a is closer in distance to p0
    f. Parameters: p0 is anchor point, a and b are the points being compared with p0
*/
bool comparePoints(Point p0, Point a, Point b){
	
	double angleA, angleB;
	angleA = computeAngle(p0, a);
	angleB = computeAngle(p0, b);
	if (angleA == angleB){
		double distanceA = computeDistance(a, p0); 
		double distanceB = computeDistance(b, p0);
		return distanceA < distanceB;
	}
	return angleA < angleB;
}

/*
    a. Name of Programmer(s):  Jugno, Daniel Christopher
    b. Name of Tester(s)    :  Lim, Sean
    c. Code Type -- 100% Human Generated 
    d. Purpose: this function will sort the array of points using selection sort, excluding the anchor point
    e. Return: none
    f. Parameters: p0 is the anchor point, points is the array of points, n is the number of elements in the array
*/
void selectionSort(Point points[], Point p0, int n){ // selection sort algorithm which sorts the array not containing the anchor point
	int i, j, min;									 // based on each point's angle formed with the anchor point, with respect to the horizontal x axis
	Point temp;										 // collinear points are sorted by their dis
	
	for (i = 0; i < n-1; i++){
		min = i;
		for (j = i+1; j < n; j++){
			if (comparePoints(p0, points[j], points[min])){
				min = j;
			}
		}
		if (min != i){
			temp = points[i];
			points[i] = points[min];
			points[min] = temp;
		}
	}
}

/*
    a. Name of Programmer(s):  Chua, Hannelle
    b. Name of Tester(s)    :  Lim, Sean
    c. Code Type -- 100% Human Generated 
    d. Purpose: this function will find the pivot point in preparation for quick sort algorithm
    e. Return: returns the index of the pivot point posiiton
    f. Parameters: p0 is the anchor point, points is the array of points, low is the lower boundary, high is the upper boundary
*/
int partition(Point points[], Point p0, int low, int high)
{
    Point pivot = points[high];   // choose the last point as pivot
    int i = low - 1;             // index of smaller element
    int j;
    Point temp;                  // temporary variable for swapping

    for (j = low; j < high; j++)
    {
        // if current point should come before the pivot
        if (comparePoints(p0, points[j], pivot))
        {
            i++;

            // swap points[i] and points[j]
            temp = points[i];
            points[i] = points[j];
            points[j] = temp;
        }
    }

    // place pivot in its correct sorted position
    temp = points[i + 1];
    points[i + 1] = points[high];
    points[high] = temp;

    return i + 1; // return pivot position
}

/*
    a. Name of Programmer(s):  Chua, Hannelle
    b. Name of Tester(s)    :  Lim, Sean
    c. Code Type -- 100% Human Generated 
    d. Purpose: this function will sort the points using a quick sort algorithm
    e. Return: none
    f. Parameters: p0 is the anchor point, points is the array of points, low is the lower boundary, high is the upper boundary
*/
void quickSort(Point points[], Point p0, int low, int high)
{
    int pivotIndex;

    // only sort if the subarray contains more than one element
    if (low < high)
    {
        // partition the array and get the pivot's final position
        pivotIndex = partition(points, p0, low, high);

        // recursively sort elements before the pivot
        quickSort(points, p0, low, pivotIndex - 1);

        // recursively sort elements after the pivot
        quickSort(points, p0, pivotIndex + 1, high);
    }
}
