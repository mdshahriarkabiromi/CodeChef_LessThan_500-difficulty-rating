#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int N,X,Y;
	    scanf("%d %d %d",&N,&X,&Y);
	    if(X*Y>=N)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
}