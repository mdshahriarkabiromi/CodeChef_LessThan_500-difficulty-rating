// The working hours of Chef’s kitchen are from 
// X
// X pm to 
// Y
// Y pm 
// (
// 1
// ≤
// X
// <
// Y
// ≤
// 12
// )
// (1≤X<Y≤12).

// Find the number of hours Chef works.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    printf("%d\n",Y-X);
	        
	}

}
