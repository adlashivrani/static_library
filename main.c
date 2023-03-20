#include "header.h"
int main()
{
	int a;
	int b;
	printf("Enter values:\n");
	scanf("%d %d", &a, &b);
	sub(a,b);
	add(a,b);
	div(a,b);
	mul(a,b);
	return 0;
}
