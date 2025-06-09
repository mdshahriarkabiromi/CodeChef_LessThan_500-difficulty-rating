#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    if(X>=Y)
	    {
	        printf("%d\n",0);
	    }
	    else
	    {
	        printf("%d\n",Y-X);
	    }
    }
}