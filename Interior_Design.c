#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X1,Y1,X2,Y2;
	    scanf("%d %d %d %d",&X1,&Y1,&X2,&Y2);
	    if(X1+Y1>X2+Y2)
	    {
        printf("%d\n",X2+Y2);
	    }
	    else
	    {
        printf("%d\n",X1+Y1);
	    }
	        
	}
}