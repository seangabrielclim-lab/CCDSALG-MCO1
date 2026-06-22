#include <math.h>
#include <stdbool.h>
#include "sort.h"

// points[] is the set of points
// n is the number of elements in the points array
// returns the anchor point (lowest y value point, and the leftmost instead incase of two equal bottom most y values)

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

// p0 is anchor point
// a is another point
// returns the angle formed by a point and the anchor point, in reference to the horizontal x axis
double computeAngle(Point p0, Point a){
	return atan2((a.y - p0.y), (a.x - p0.x));
}

double computeDistance(Point a, Point b){
	double distance = sqrt(((a.x - b.x)*(a.x - b.x)) + ((a.y - b.y)*(a.y - b.y))); // dist between 2 points formula
	return distance;
}

// p0 is anchor point
// a is another point
// b is another point
// compares point a with point b to see which forms a smaller angle with p0
// returns true if point a is smaller
// false if point b is smaller
// incase points are collinear, returns true if point a is closer in distance to p0
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