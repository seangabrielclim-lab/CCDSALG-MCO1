#ifndef STACK_H
#define STACK_H

/*

    >> Encode your group number (2 digits) and last names, first names and sections of group members.  Encode the purpose of this file.

    Group #: 09  (2 digits)

    JUGNO, DANIEL CHRISTOPHER  S04
    LIM,   SEAN GABRIEL        S09
    CHUA,  HANNELLE CELINNE     S09 

    PURPOSE OF THIS FILE: header file for the stack data structure

    >> GENERAL INSTRUCTIONS:
    1. Adhere with good programming style and practice (learned from CCPROG1 and CCPROG2).
    3. Do NOT use global variables!  NON-COMPLIANCE WILL RESULT INTO A 10 POINT DEDUCTION!
*/

/*
    You may encode any of the following below this comment the following:   
    1. #define directives
    2. typedef alias(es) 
    3. declaration of your user-defined struct data type(s)
    4. typedef alias(es) for your struct data type(s) -- you have to put an inline comment 
       for each struct member as part of the documentation. 

    The header should NOT include the codes for any function definitions.  

    Function definitions should be encoded in your C source file only!
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define MAX_SIZE (32768)

typedef struct{
	double x;  // x coordinate of point
	double y;  // y coordinate of point
} Point;

typedef struct{
	Point points[MAX_SIZE];  // array of points up to a max of 32768 elements
	int top; 				 // current top position in the stack of points
} Stack;

void Create(Stack *S);

void Push(Stack *S, Point elem);

Point Pop(Stack *S);

Point Top(Stack *S);

Point NextToTop(Stack *S);

bool IsFull(Stack *S);

bool IsEmpty(Stack *S);

#endif

  
