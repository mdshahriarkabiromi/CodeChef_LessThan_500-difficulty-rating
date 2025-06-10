#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X,Y,Z;
	    scanf("%d %d",&X,&Y);
	    if(X*100 > 10*Y)
	    {
	        printf("CLOTH\n");
	    }
	    else if(X*100 < 10*Y)
	    {
	        printf("DISPOSABLE\n");
	    }
	    else
	    {
	        printf("CLOTH\n");
	    }
	}

}

