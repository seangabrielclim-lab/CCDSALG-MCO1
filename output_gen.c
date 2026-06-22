/*

    >> Encode your group number (2 digits) and last names, first names and sections of group members.  Encode the purpose of this file.

    Group #: 09  (2 digits)

    JUGNO, DANIEL CHRISTOPHER  S04
    LIM,   SEAN GABRIEL        S09
    CHUA,  HANNELLE CELINNE     S09 

    PURPOSE OF THIS FILE: generated the datasets of sizes 2^6 to 2^15

    >> GENERAL INSTRUCTIONS:
    1. Adhere with good programming style and practice (learned from CCPROG1 and CCPROG2).
    3. Do NOT use global variables!  NON-COMPLIANCE WILL RESULT INTO A 10 POINT DEDUCTION!
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
	srand(time(NULL));
	double x = 0;
	double y = 0;
	FILE *fp;

//Creates a dataset of 64 points
	fp = fopen("64.txt", "w");
	
	fprintf(fp, "64\n");

	for(int i = 1; i <= 64; i++){
		x = rand()/1000.0 * pow(-1, (rand()% (2)+0));
		y = rand()/1000.0 * pow(-1, (rand()% (2)+0)); 
		fprintf(fp, "  %.1lf   %.1lf\n", x, y);
	}
	fclose(fp);

//Creates a dataset of 128 points	
	fp = fopen("128.txt", "w");
	
	fprintf(fp, "128\n");

	for(int i = 1; i <= 128; i++){
		x = rand()/1000.0 * pow(-1, (rand()% (2)+0));
		y = rand()/1000.0 * pow(-1, (rand()% (2)+0)); 
		fprintf(fp, "  %.1lf   %.1lf\n", x, y);
	}
	fclose(fp);

//Creates a dataset of 256 points
	fp = fopen("256.txt", "w");
	
	fprintf(fp, "256\n");

	for(int i = 1; i <= 256; i++){
		x = rand()/1000.0 * pow(-1, (rand()% (2)+0));
		y = rand()/1000.0 * pow(-1, (rand()% (2)+0)); 
		fprintf(fp, "  %.1lf   %.1lf\n", x, y);
	}
	fclose(fp);

//Creates a dataset of 512 points
	fp = fopen("512.txt", "w");
	
	fprintf(fp, "512\n");

	for(int i = 1; i <= 512; i++){
		x = rand()/1000.0 * pow(-1, (rand()% (2)+0));
		y = rand()/1000.0 * pow(-1, (rand()% (2)+0)); 
		fprintf(fp, "  %.1lf   %.1lf\n", x, y);
	}
	fclose(fp);

//Creates a dataset of 1024 points
	fp = fopen("1024.txt", "w");
	
	fprintf(fp, "1024\n");

	for(int i = 1; i <= 1024; i++){
		x = rand()/1000.0 * pow(-1, (rand()% (2)+0));
		y = rand()/1000.0 * pow(-1, (rand()% (2)+0)); 
		fprintf(fp, "  %.1lf   %.1lf\n", x, y);
	}
	fclose(fp);

//Creates a dataset of 2048 points
	fp = fopen("2048.txt", "w");
	
	fprintf(fp, "2048\n");

	for(int i = 1; i <= 2048; i++){
		x = rand()/1000.0 * pow(-1, (rand()% (2)+0));
		y = rand()/1000.0 * pow(-1, (rand()% (2)+0)); 
		fprintf(fp, "  %.1lf   %.1lf\n", x, y);
	}
	fclose(fp);

//Creates a dataset of 4096 points
	fp = fopen("4096.txt", "w");
	
	fprintf(fp, "4096\n");

	for(int i = 1; i <= 4096; i++){
		x = rand()/1000.0 * pow(-1, (rand()% (2)+0));
		y = rand()/1000.0 * pow(-1, (rand()% (2)+0)); 
		fprintf(fp, "  %.1lf   %.1lf\n", x, y);
	}
	fclose(fp);

//Creates a dataset of 8192 points
	fp = fopen("8192.txt", "w");
	
	fprintf(fp, "8192\n");

	for(int i = 1; i <= 8192; i++){
		x = rand()/1000.0 * pow(-1, (rand()% (2)+0));
		y = rand()/1000.0 * pow(-1, (rand()% (2)+0)); 
		fprintf(fp, "  %.1lf   %.1lf\n", x, y);
	}
	fclose(fp);

//Creates a dataset of 16384 points
	fp = fopen("16384.txt", "w");
	
	fprintf(fp, "16384\n");

	for(int i = 1; i <= 16384; i++){
		x = rand()/1000.0 * pow(-1, (rand()% (2)+0));
		y = rand()/1000.0 * pow(-1, (rand()% (2)+0)); 
		fprintf(fp, "  %.1lf   %.1lf\n", x, y);
	}
	fclose(fp);

//Creates a dataset of 32768 points
	fp = fopen("32768.txt", "w");
	
	fprintf(fp, "32768\n");

	for(int i = 1; i <= 32768; i++){
		x = rand()/1000.0 * pow(-1, (rand()% (2)+0));
		y = rand()/1000.0 * pow(-1, (rand()% (2)+0)); 
		fprintf(fp, "  %.1lf   %.1lf\n", x, y);
	}
	fclose(fp);
	return 0;
}
