#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X;
	    scanf("%d",&X);
	    if(X<300)
	    {
        printf("%d\n",300*10);
	    }
	    else
	    {
        printf("%d\n",X*10);
	    }
	        
	}
}