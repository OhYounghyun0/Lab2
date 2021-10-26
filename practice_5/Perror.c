#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_perror.h"

extern void my_perror(char *str);

void main(int argc, char *argv[]) {
	
	FILE *f;
	
	if (argc < 2) {
		printf("Usage : perror_use file_name\n");
		exit(1);
	}
	
	if ((f = fopen(argv[1], "r")) == NULL) {
		my_perror(NULL);
		exit(1);
	}
	
	printf("Open a FIle \"%s\".\n", argv[1]);
	
	fclose(f);
	
}
