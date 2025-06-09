#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X;
	    scanf("%d",&X);
	    if(4>=X && X>=1)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
    }
}