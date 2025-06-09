#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    if(Y>=X)
	    {
        printf("%d\n",X);
	    }
	    else
	    {
        printf("%d\n",Y);
	    }
	        
	}
}