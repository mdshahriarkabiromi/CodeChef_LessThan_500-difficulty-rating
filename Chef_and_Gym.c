#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X,Y,Z;
	    scanf("%d %d %d",&X,&Y,&Z);
	    
	    
	    if((Z>=X+Y))
	    {
	        printf("2\n");
	    }
	    else if(Z>=X)
	    {
	     printf("1\n");
	    }
	    else
	    {
	    printf("0\n");
	    }

	}
}