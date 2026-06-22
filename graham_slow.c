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

#include <stdio.h>
#include <math.h>
#include <time.h>
#include "stack.c"
#include "sort.c"

/*
    a. Name of Programmer(s):  Jugno, Daniel Christopher
    b. Name of Tester(s)    :  Lim, Sean
    c. Code Type -- 100% Human Generated 
    d. Purpose: this function will check if the turn between two points is counterclockwise, clowckwise, or the points are collinear
    e. Return: returns -1 if clockwise, 1 if counterclockwise, 0 if collinear
    f. Parameters: point a, b, c are individual points
*/
int checkTurn(Point a, Point b, Point c){
	double area = (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x); // cross product
	
	if (area < 0) return -1; 	  // clockwise turn
	
	else if (area > 0) return 1;  // counter clockwise turn
	
	return 0; 					  // collinear 
}

/*
    a. Name of Programmer(s):  Jugno, Daniel Christopher
    b. Name of Tester(s)    :  Lim, Sean
    c. Code Type -- 100% Human Generated 
    d. Purpose: this function will use a selection sort algorithm to produce a slower version of graham's scan algorithm
    e. Return: returns the number of points that make up the convex hull
    f. Parameters: point a, b, c are individual points
*/
int grahamSlow(Point points[], int n, Point convexHull[]){
	
	clock_t start;  // clock variables
	clock_t end;   

	start = clock();  // record start 
	
	int ctr = 0;
	Point p0;  	// anchor point
	int i;
	Stack S; 	// stack for storing convex hull points
	Create(&S); // initializes stack
  
	if (n < 3){	// if there are less than 3 points in the array, a convex hull cannot be generated
		printf("Error: a convex hull cannot be generated due to insufficient points.");
		return -1;
	}
	
	p0 = searchAnchor(points, n); // search for the anchor point in the array, then store to p0
	
	anchorToFirst(points, n ,p0);
	
	selectionSort(points, p0, n); // slow sort algorithm call
	
	Push(&S, points[0]); // push first two points into the stack, including the anchor (point[0])
	Push(&S, points[1]);
	
	for (i = 2; i < n; i++){
		while ((S.top >= 1) && checkTurn(NextToTop(&S), Top(&S), points[i]) != 1){  // while there are at least two points in the stack and the last two points  
			Pop(&S); 																// and current point do not make a left turn,										   				    
		}																			// keep removing the middle point
		Push(&S, points[i]); // add current point to hull
	}
	
	if (S.top < 2){ // If there are less than 3 elements in the stack, no hull is generated
		printf("No hull was generated.");
		return -1;
	}
	
	i = S.top; 
	while (!IsEmpty(&S)){
		convexHull[i] = Pop(&S); // take out elements from stack and place into the convex hull array
		ctr++;
		i--;
	}

	end = clock();  // record end 
	
	printf("\n\nSize:%d Time:%15lf\n", n, (double)(end - start));  // prints the input size n, and the execution time in milliseconds
	
	return ctr;
	
}