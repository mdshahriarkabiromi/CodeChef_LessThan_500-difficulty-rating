

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X;
	    scanf("%d",&X);
	    if(4>X)
	    {
        printf("MILD\n");
	    }
	    else if(7>X && X>=4)
	    {
        printf("MEDIUM\n");
	    }
	    else
	    {
        printf("HOT\n");
	    }
	        
	}
}