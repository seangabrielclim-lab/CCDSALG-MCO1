#include <stdio.h>
#include "sort.c"

/*
    a. Name of Programmer(s):  Jugno, Daniel Christopher
    b. Name of Tester(s)    :  Lim, Sean
    c. Code Type -- 100% Human Generated 
    d. Purpose: this function will print the points 
    e. Return: None
    f. Parameters: points is the array that stores the points, n is the number of elements in the points array   
*/
void printPoints(Point points[], int n){
	int i;
	for (i = 0; i < n; i++){
		printf("Point %d: %.6lf, %.6lf\n", i+1, points[i].x, points[i].y);
	}
}


int main(){
	
	Point points[8] = { // sample set of unsorted points
		{-2.0, 3.0},
		{8.9, 4.3},
		{3.3, 5.8},
		{1.0, 3.0},
		{1.0, 0.0},
		{2.0, -1.0},
		{1.0, -1.0},
		{12.5, 13.3},
	};
	
	Point expected[7] = {  // correct order of sorted points
		{2.0, -1.0},
		{8.9, 4.3},
		{12.5, 13.3},
		{3.3, 5.8},
		{1.0, 0.0},
		{1.0, 3.0},
		{-2.0, 3.0}	
	};
	
	Point noAnchor[7]; // array of points to copy original array without the anchor point			
	Point p0;		   // anchor point
	int i;
	int j = 0; 		   // indexing variable for copying points array to noAnchor 
	
	p0 = searchAnchor(points, 8);
	
	for (i = 0; i < 8; i++){
		if ((points[i].x != p0.x) || (points[i].y != p0.y)){
			noAnchor[j] = points[i];
			j++;
		}	
	}

	//Prints the unordered points, then the anchor point, then the array of points with the anchor removed
	printf("Sample set of unordered points:\n\n"); 
	printPoints(points, 8);
	
	printf("\nAnchor Point: %.6lf, %.6lf\n\n", p0.x, p0.y);
	
	printf("Points to sort:\n\n");
	printPoints(noAnchor, 7);
	
	// shows the expected and actual outputs of the selection sort algorithm, should show identical arrays
	printf("\n\nTesting Selection Sort Algorithm\n\n");
	printf("--------------------------------\n\n");
	
	printf("Expected:\n\n");
	
	printPoints(expected, 7);
	
	printf("\nResult:\n\n");
	
	selectionSort(noAnchor, p0, 7);
	
	printPoints(noAnchor, 7);

	// shows the expected and actual outputs of the quick sort algorithm, should show identical arrays
	printf("\n\nTesting Quick Sort Algorithm\n\n");
	printf("--------------------------------\n\n");
	
	j = 0;  // reset noAnchor to be the set of unordered points again
	
	for (i = 0; i < 8; i++){
		if ((points[i].x != p0.x) || (points[i].y != p0.y)){
			noAnchor[j] = points[i];
			j++;
		}	
	}
	
	printf("Expected:\n\n");
	
	printPoints(expected, 7);
	
	printf("\nResult:\n\n");
	
	// sort points using Quick Sort based on their polar angle
	quickSort(noAnchor, p0, 0, 6);
	
	printPoints(noAnchor, 7); // should now display the sorted set, same as the expected
	
	
	
	
	return 0;
}
