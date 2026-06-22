#include <stdbool.h>
#include "stack.h"





Point searchAnchor(Point points[], int n);

double computeAngle(Point p0, Point a);

double computeDistance(Point a, Point b);

bool comparePoints(Point p0, Point a, Point b);

void selectionSort(Point points[], Point p0, int n);

int partition(Point points[], Point p0, int low, int high);

void quickSort(Point points[], Point p0, int low, int high);