#include <stdio.h>

int main() {
	int X;
	scanf("%d",&X);
	if(X<3)
	printf("GOLD");
	else if(6>X && X>=3)
	printf("SILVER");
	else
	printf("BRONZE");
}