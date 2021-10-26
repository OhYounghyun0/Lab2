#include <stdio.h>
#include <string.h>
#include "math.h"

int main () {
	
	char str[10];
	int a, b = 0;
	
	printf("what do you want to calculate? : ");
	scanf("%s", str);
	
	printf("first nubmer : ");
	scanf("%d", &a);
	
	printf("second nubmer : ");
	scanf("%d", &b);
	
	if (strcmp (str, "add") == 0)
		printf("add = %d\n", add(a,b));
		
	else if (strcmp (str, "subtract") == 0)
		printf("subtract = %d\n", subtract(a,b));
		
	else if (strcmp (str, "multiply") == 0)
		printf("multiply = %d\n", multiply(a,b));
		
	else if (strcmp (str, "divide") == 0)
		printf("divide = %d\n", divide(a,b));
		
}
