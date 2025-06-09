#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int N,M,K;
	    scanf("%d %d %d",&N,&M,&K);
	    if(M>=N+K)
	    {
        printf("YES\n");
	    }
	    else
	    {
        printf("NO\n");
	    }
	        
	}
}