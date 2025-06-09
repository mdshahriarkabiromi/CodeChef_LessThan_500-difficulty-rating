#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    if(3*X>2*Y)
	    {
        printf("%d\n",2*Y);
	    }
	    else
	    {
        printf("%d\n",3*X);
	    }
	        
	}
}