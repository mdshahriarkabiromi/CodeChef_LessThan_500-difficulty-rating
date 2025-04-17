// Apple considers any iPhone with a battery health of 
// 80
// %
// 80% or above, to be in optimal condition.

// Given that your iPhone has 
// X
// %
// X% battery health, find whether it is in optimal condition.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X;
	    scanf("%d",&X);
	    if(X>=80)
	    {
	    printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}

}
