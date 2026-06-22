/**
    >> Encode your group number (2 digits) and last names, first names and sections of group members.  Encode the purpose of this file.

    Group #: 09  (2 digits)

    JUGNO, DANIEL CHRISTOPHER  S04
    LIM,   SEAN GABRIEL        S09
    CHUA,  HANNELLE CELINNE     S09 

    PURPOSE OF THIS FILE: tests the sort functions in sort.c

    >> GENERAL INSTRUCTIONS: NON-COMPLIANCE WILL RESULT INTO AT LEAST A 10 POINT DEDUCTION!
    1. Adhere with good programming style and practice (learned from CCPROG1 and CCPROG2).
    2. Do NOT use global variables!  
    3. Do NOT use goto statement!
    4. Do NOT use return in a void function!
*/

#include <stdio.h>
#include "sort.c"

/*
    a. Name of Programmer(s):  Jugno, Daniel Christopher
    b. Name of Tester(s)    :  Lim, Sean & Chua, Hannelle
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
	
	Point pointsForSelection[8] = { // sample set of unsorted points
		{-2.0, 3.0},
		{8.9, 4.3},
		{3.3, 5.8},
		{1.0, 3.0},
		{1.0, 0.0},
		{2.0, -1.0},
		{1.0, -1.0},
		{12.5, 13.3},
	};
	
	Point pointsForQuick[8] = { // points to be sorted, copy of pointsForSelection
		{-2.0, 3.0},
		{8.9, 4.3},
		{3.3, 5.8},
		{1.0, 3.0},
		{1.0, 0.0},
		{2.0, -1.0},
		{1.0, -1.0},
		{12.5, 13.3},
	};
	
	Point expected[8] = {  // correct order of sorted points
		{1.0, -1.0},
		{2.0, -1.0},
		{8.9, 4.3},
		{12.5, 13.3},
		{3.3, 5.8},
		{1.0, 0.0},
		{1.0, 3.0},
		{-2.0, 3.0}	
	};
			
	Point p0;		   // anchor point
	// int i;

	//Prints the unordered points, then the anchor point
	printf("Sample set of unordered points:\n\n"); 
	printPoints(pointsForSelection, 8);
	
	p0 = searchAnchor(pointsForSelection, 8);
	
	printf("\nAnchor Point: %.6lf, %.6lf\n\n", p0.x, p0.y);
	
	anchorToFirst(pointsForSelection, 8, p0);

	//basic test for selection sort algorithm
	printf("\n\nTesting Selection Sort Algorithm\n\n");
	printf("--------------------------------\n\n");
	
	printf("Expected:\n\n");
	
	printPoints(expected, 8);
	
	printf("\nResult:\n\n");
	
	selectionSort(pointsForSelection, p0, 8);
	
	printPoints(pointsForSelection, 8);
	
	
	//basic test of quick sort algorithm
	printf("\n\nTesting Quick Sort Algorithm\n\n");
	printf("--------------------------------\n\n");
	
	p0 = searchAnchor(pointsForQuick, 8);
	
	anchorToFirst(pointsForQuick, 8, p0);
	
	printf("Expected:\n\n");
	
	printPoints(expected, 8);
	
	printf("\nResult:\n\n");
	
	// sort points using Quick Sort based on their polar angle
	quickSort(pointsForQuick, p0, 1, 7);
	
	printPoints(pointsForQuick, 8); // should now display the sorted set, same as the expected */
	
	return 0;
}
