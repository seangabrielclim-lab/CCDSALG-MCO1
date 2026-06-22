/*

    >> Encode your group number (2 digits) and last names, first names and sections of group members.  Encode the purpose of this file.

    Group #: 09  (2 digits)

    JUGNO, DANIEL CHRISTOPHER  S04
    LIM,   SEAN GABRIEL        S09
    CHUA,  HANELLE CELINNE     S09 

    PURPOSE OF THIS FILE: header file for the sort files

    >> GENERAL INSTRUCTIONS:
    1. Adhere with good programming style and practice (learned from CCPROG1 and CCPROG2).
    3. Do NOT use global variables!  NON-COMPLIANCE WILL RESULT INTO A 10 POINT DEDUCTION!
*/


#ifndef SORT_H
#define SORT_H

#include <stdbool.h>
#include "stack.h"



//Function prototypes that will be defined in sort.c

Point searchAnchor(Point points[], int n);

double computeAngle(Point p0, Point a);

double computeDistance(Point a, Point b);

bool comparePoints(Point p0, Point a, Point b);

void selectionSort(Point points[], Point p0, int n);

int partition(Point points[], Point p0, int low, int high);

void quickSort(Point points[], Point p0, int low, int high);

void anchorToFirst(Point points[], int n, Point p0);
