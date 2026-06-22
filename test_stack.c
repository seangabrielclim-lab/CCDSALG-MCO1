/**
    >> Encode your group number (2 digits) and last names, first names and sections of group members.  Encode the purpose of this file.

    Group #: 09  (2 digits)

    JUGNO, DANIEL CHRISTOPHER  S04
    LIM,   SEAN GABRIEL        S09
    CHUA,  HANELLE CELINNE     S09 

    PURPOSE OF THIS FILE: to test and call the stack operations defined in stack.c

    >> GENERAL INSTRUCTIONS: NON-COMPLIANCE WILL RESULT INTO AT LEAST A 10 POINT DEDUCTION!
    1. Adhere with good programming style and practice (learned from CCPROG1 and CCPROG2).
    2. Do NOT use global variables!  
    3. Do NOT use goto statement!
    4. Do NOT use return in a void function!
*/

#include <stdlib.h>

// include your own stack C source file
#include "stack.c"

int main()
{
   // test the stack operations by calling the stack function.   
   int i;
   Point top;
   Point nextTop;
   
   Stack S; // declare stack
   
   Point a, b, c; //initialize points for the stack
   a.x = 3.0;
   a.y = 5.0;
   
   b.x = 6.0;
   b.y = 2.0;
   
   c.x = 3.0;
   c.y = 3.0;
   
   Create(&S); // create(S) test
   
   printf("Stack empty and stack full test:\n\n"); // IsEmpty(S) and IsFull(S) test
   printf("Is stack empty?\n");
   printf("Expected: 1\n");
   printf("Result: %d\n\n", IsEmpty(&S));  
   
   printf("Is stack full?\n");
   printf("Expected: 0\n");
   printf("Result: %d\n\n", IsFull(&S)); 
   
   Push(&S, a); // Push(S, elem) test, push points a, b, and c, onto stack
   Push(&S, b);
   Push(&S, c);
   
   printf("Push test\n");
   printf("Current elements in stack:\n");
   for(i = 0; i <= S.top; i++){
	   printf("\nElement %d in stack: (%.6lf, %.6lf)", i+1, S.points[i].x, S.points[i].y);
   }
   
   printf("\n\nStack empty and stack full test:\n\n"); // IsEmpty(S) and IsFull(S) test after pushing
   printf("Is stack empty?\n");
   printf("Expected: 0\n");
   printf("Result: %d\n\n", IsEmpty(&S));  
   
   printf("Is stack full?\n");
   printf("Expected: 0\n");
   printf("Result: %d\n\n", IsFull(&S)); 
   
   printf("Returning top and next to top test:\n"); // Top(S) and NextToTop(S) test
   
   printf("\nReturn top element\n");
   top = Top(&S);
   printf("Expected: (3.000000, 3.000000)\n");
   printf("Result:   (%.6lf, %.6lf)\n\n", top.x, top.y);
   
   printf("Return next top element\n");
   nextTop = NextToTop(&S);
   printf("Expected: (6.000000, 2.000000)\n");
   printf("Result:   (%.6lf, %.6lf)\n\n", nextTop.x, nextTop.y);
   
   printf("Pop test\n"); // Pop(S) test
   
   Pop(&S); // call pop function once
   
   printf("Current elements in stack after calling pop function:\n");
   for(i = 0; i <= S.top; i++){
	   printf("\nElement %d in stack: (%.6lf, %.6lf)", i+1, S.points[i].x, S.points[i].y);
   }
   
   Pop(&S); // call pop two more times, emptying the stack
   Pop(&S);
   Pop(&S);
   
   //shows reamining elements in stack, should show an empty stack 
   printf("\n\nCurrent elements in stack after calling pop function two more times:\n\n\n");
   for(i = 0; i <= S.top; i++){
	   printf("\nElement %d in stack: (%.6lf, %.6lf)", i+1, S.points[i].x, S.points[i].y);
   }
   
   printf("Stack empty and stack full test:\n\n"); // IsEmpty(S) and IsFull(S) test after emptying stack
   printf("Is stack empty?\n");
   printf("Expected: 1\n");
   printf("Result: %d\n\n", IsEmpty(&S));  
   
   printf("Is stack full?\n");
   printf("Expected: 0\n");
   printf("Result: %d\n\n", IsFull(&S)); 
   
   

   return 0;
}


