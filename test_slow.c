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
#include "graham_slow.c"

int main(){
	// variable declarations
	FILE *input, *output;
	char filename[256];
	int n = 0, i = 0;
	double tempX, tempY;
	Point coords[MAX_SIZE], outputCoords[MAX_SIZE];
	int result;

	// type the name of the appropriate dataset file
	fprintf(stdout, "Input the name of the dataset file: ");
	fscanf(stdin, "%s", filename);

	// opens input file, also checks if file exists or not
	input = fopen(filename, "r");
	if(input != NULL){
		fscanf(input, "%d", &n);
		fprintf(stdout, "%d\n", n);
		while(fscanf(input, "  %lf   %lf", &tempX, &tempY) == 2){
			coords[i].x = tempX;
			coords[i].y = tempY;
			i++;
		}
		for(i = 0; i < n; i++){
			fprintf(stdout, "%lf %lf \n", coords[i].x, coords[i].y);
		}
		fclose(input);
	}
	else{
		fprintf(stderr, "ERROR: %s does NOT exist.\n", filename);
     		exit(1);
	}

	/* CALLING OF THE GRAHAM ALGO HERE */
	
	result = grahamSlow(coords, n, outputCoords);
	

	// opens the output file
	output = fopen("OUTPUT_.TXT", "w");
	fprintf(output, "%d\n", result);
	for(i = 0; i < result; i++){
			fprintf(output, "  %lf   %lf\n", outputCoords[i].x, outputCoords[i].y);
		}
	fclose(output);

	return 0;
}