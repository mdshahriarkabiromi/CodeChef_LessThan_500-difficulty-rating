#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int N,K;
	    scanf("%d %d",&N,&K);
	    if(K>N)
	    {
	        printf("YES\n");
	    }
        
        else
        {
            printf("NO\n");
        }

	}
}