#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X;
	    scanf("%d",&X);
	    if(X<3)
	    {
	        printf("LIGHT\n");
	    }
	    else if(7>X && X>=3)
	    {
	        printf("MODERATE\n");
	    }
	    else
	    {
	        printf("HEAVY\n");
	    }
	}
}