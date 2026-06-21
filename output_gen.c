#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
	srand(time(NULL));
	double x = 0;
	double y = 0;
	FILE *fp;

//64
	fp = fopen("64.txt", "w");
	
	fprintf(fp, "64\n");

	for(int i = 1; i <= 64; i++){
		x = rand()/1000.0 * pow(-1, (rand()% (2)+0));
		y = rand()/1000.0 * pow(-1, (rand()% (2)+0)); 
		fprintf(fp, "  %.1lf   %.1lf\n", x, y);
	}
	fclose(fp);

//128	
	fp = fopen("128.txt", "w");
	
	fprintf(fp, "128\n");

	for(int i = 1; i <= 128; i++){
		x = rand()/1000.0 * pow(-1, (rand()% (2)+0));
		y = rand()/1000.0 * pow(-1, (rand()% (2)+0)); 
		fprintf(fp, "  %.1lf   %.1lf\n", x, y);
	}
	fclose(fp);

//256
	fp = fopen("256.txt", "w");
	
	fprintf(fp, "256\n");

	for(int i = 1; i <= 256; i++){
		x = rand()/1000.0 * pow(-1, (rand()% (2)+0));
		y = rand()/1000.0 * pow(-1, (rand()% (2)+0)); 
		fprintf(fp, "  %.1lf   %.1lf\n", x, y);
	}
	fclose(fp);

//512
	fp = fopen("512.txt", "w");
	
	fprintf(fp, "512\n");

	for(int i = 1; i <= 512; i++){
		x = rand()/1000.0 * pow(-1, (rand()% (2)+0));
		y = rand()/1000.0 * pow(-1, (rand()% (2)+0)); 
		fprintf(fp, "  %.1lf   %.1lf\n", x, y);
	}
	fclose(fp);

//1024
	fp = fopen("1024.txt", "w");
	
	fprintf(fp, "1024\n");

	for(int i = 1; i <= 1024; i++){
		x = rand()/1000.0 * pow(-1, (rand()% (2)+0));
		y = rand()/1000.0 * pow(-1, (rand()% (2)+0)); 
		fprintf(fp, "  %.1lf   %.1lf\n", x, y);
	}
	fclose(fp);

//2048
	fp = fopen("2048.txt", "w");
	
	fprintf(fp, "2048\n");

	for(int i = 1; i <= 2048; i++){
		x = rand()/1000.0 * pow(-1, (rand()% (2)+0));
		y = rand()/1000.0 * pow(-1, (rand()% (2)+0)); 
		fprintf(fp, "  %.1lf   %.1lf\n", x, y);
	}
	fclose(fp);

//4096
	fp = fopen("4096.txt", "w");
	
	fprintf(fp, "4096\n");

	for(int i = 1; i <= 4096; i++){
		x = rand()/1000.0 * pow(-1, (rand()% (2)+0));
		y = rand()/1000.0 * pow(-1, (rand()% (2)+0)); 
		fprintf(fp, "  %.1lf   %.1lf\n", x, y);
	}
	fclose(fp);

//8192
	fp = fopen("8192.txt", "w");
	
	fprintf(fp, "8192\n");

	for(int i = 1; i <= 8192; i++){
		x = rand()/1000.0 * pow(-1, (rand()% (2)+0));
		y = rand()/1000.0 * pow(-1, (rand()% (2)+0)); 
		fprintf(fp, "  %.1lf   %.1lf\n", x, y);
	}
	fclose(fp);

//16384
	fp = fopen("16384.txt", "w");
	
	fprintf(fp, "16384\n");

	for(int i = 1; i <= 16384; i++){
		x = rand()/1000.0 * pow(-1, (rand()% (2)+0));
		y = rand()/1000.0 * pow(-1, (rand()% (2)+0)); 
		fprintf(fp, "  %.1lf   %.1lf\n", x, y);
	}
	fclose(fp);

//32768
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