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
#include <stdlib.h>

// include your own stack header file
#include "stack.h"

/*
    a. Name of Programmer(s):  Jugno, Daniel Christopher
    b. Name of Tester(s)    :  Lim, Sean
    c. Code Type -- 100% Human Generated 
    d. Purpose: this function will create the stack, the top is initialized to -1
    e. Return: None
    f. Parameters: S is a pointer to the stack struct defined in stack.h   
*/
void Create(Stack *S){
	S-> top = -1;      // initializes the stack by setting the top to -1
}

/*
    a. Name of Programmer(s):  Jugno, Daniel Christopher
    b. Name of Tester(s)    :  Lim, Sean
    c. Code Type -- 100% Human Generated 
    d. Purpose: this function will push an element to the top of the stack
    e. Return: None
    f. Parameters: S is a pointer to the stack struct defined in stack.h, elem is the element being pushed into the stack  
*/
void Push(Stack *S, Point elem){
	if (!IsFull(S)){   // checks to see if stack is full, only pushes if not full
		(S->top)++;    // increment top first to access index 0, and following indexes in the array
		S->points[S->top] = elem;  // push the input point to the stack
	}
}

/*
    a. Name of Programmer(s):  Jugno, Daniel Christopher
    b. Name of Tester(s)    :  Lim, Sean
    c. Code Type -- 100% Human Generated 
    d. Purpose: this function will pop an element at the top of the stack
    e. Return: the element that was popped, otherwise returns an empty point
    f. Parameters: S is a pointer to the stack struct defined in stack.h  
*/
Point Pop(Stack *S){
	Point topPoint;    // temporary Point variable to store point at the top of stack
	Point emptyPoint;  // temporary Point variable incase stack is empty
	emptyPoint.x = 0.0;
	emptyPoint.y = 0.0;
	if (!IsEmpty(S)){  // checks to see if stack is not empty, only pops top element if so
		topPoint = S->points[S->top]; // store current top Point in the temporary variable
		(S->top)--;    // removes the top element
		return topPoint;
	}
	return emptyPoint; // returns an empty Point incase of underflow
}

/*
    a. Name of Programmer(s):  Jugno, Daniel Christopher
    b. Name of Tester(s)    :  Lim, Sean
    c. Code Type -- 100% Human Generated 
    d. Purpose: this function will show the current top element of the stack
    e. Return: the top element, otherwise returns an empty point
    f. Parameters: S is a pointer to the stack struct defined in stack.h  
*/
Point Top(Stack *S){
	Point topPoint;    // temporary Point variable to store point at the top of stack
	Point emptyPoint;  // temporary Point variable incase stack is empty
	emptyPoint.x = 0.0;
	emptyPoint.y = 0.0;
	if (!IsEmpty(S)){  // checks to see if stack is not empty, only returns top element if so
		topPoint = S->points[S->top]; // store current top Point in the temporary variable
		return topPoint;
	}
	return emptyPoint; // returns an empty Point incase of underflow
}

/*
    a. Name of Programmer(s):  Jugno, Daniel Christopher
    b. Name of Tester(s)    :  Lim, Sean
    c. Code Type -- 100% Human Generated 
    d. Purpose: this function will show the next element after the current top element of the stack
    e. Return: the element that is next in line after the top of the stack, otherwise returns an empty point
    f. Parameters: S is a pointer to the stack struct defined in stack.h  
*/
Point NextToTop(Stack *S){
	Point NextTopPoint; // temporary Point variable to store Point under the current top of stack
	Point emptyPoint;   // temporary Point variable incase stack is empty
	emptyPoint.x = 0.0;
	emptyPoint.y = 0.0;
	if (S->top > 0){    // only returns a Point if stack contains atleast 2 elements
		NextTopPoint = S->points[(S->top) - 1]; // store current top Point in the temporary variable
		return NextTopPoint;
	}
	return emptyPoint;  // returns an empty Point incase of underflow
}

/*
    a. Name of Programmer(s):  Jugno, Daniel Christopher
    b. Name of Tester(s)    :  Lim, Sean
    c. Code Type -- 100% Human Generated 
    d. Purpose: this function will check if the stack is full or not
    e. Return: true if stack is full, false otherwise
    f. Parameters: S is a pointer to the stack struct defined in stack.h
*/
bool IsFull(Stack *S){
	if (S->top == MAX_SIZE - 1){ // returns true if top is equal to MAX_SIZE - 1, else returns false
		return true;
	}
	else return false;
}

/*
    a. Name of Programmer(s):  Jugno, Daniel Christopher
    b. Name of Tester(s)    :  Lim, Sean
    c. Code Type -- 100% Human Generated 
    d. Purpose: this function will check if the stack is empty or not
    e. Return: true if stack is empty, false otherwise
    f. Parameters: S is a pointer to the stack struct defined in stack.h
*/
bool IsEmpty(Stack *S){
	if (S->top == - 1){   		 // returns true if top is equal to - 1, else returns false
		return true;
	}
	else return false;
}





