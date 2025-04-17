// Chef's son wants to go on a roller coaster ride. The height of Chef's son is 
// X
// X inches while the minimum height required to go on the ride is 
// H
// H inches. Determine whether he can go on the ride or not.


#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X,H;
	    scanf("%d %d",&X,&H);
	    if(X>=H)
	    {
	    printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}

}
