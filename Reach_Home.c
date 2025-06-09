#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    if(X*5>=Y)
	    {
        printf("YES\n");
	    }
	    else
	    {
        printf("NO\n");
	    }
	        
	}
}