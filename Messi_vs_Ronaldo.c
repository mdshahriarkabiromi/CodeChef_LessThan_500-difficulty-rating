#include <stdio.h>

int main() {
	int A,B,X,Y;
	scanf("%d %d %d %d",&A,&B,&X,&Y);
	if(A*2+B*1>X*2+Y*1)
	printf("Messi");
	else if(A*2+B*1<X*2+Y*1)
	printf("Ronaldo");
	else
	printf("Equal");
}