#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int N,X,K;
	    scanf("%d %d %d",&N,&X,&K);
	    if(K>=N*X)
	    {
        printf("YES\n");
	    }
	    else
	    {
        printf("NO\n");
	    }
	        
	}
}