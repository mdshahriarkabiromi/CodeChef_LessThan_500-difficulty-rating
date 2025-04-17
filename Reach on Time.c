// Chef has recently moved into an apartment. It takes 
// 30
// 30 minutes for Chef to reach office from the apartment.

// Chef left for the office 
// X
// X minutes before Chef was supposed to reach. Determine whether or not Chef will be able to reach on time.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X;
	    scanf("%d",&X);
	    if(X>=30)
	    {
	    printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}

}
