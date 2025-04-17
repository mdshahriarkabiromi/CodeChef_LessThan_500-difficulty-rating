// DAIICT college students want to attend an IPL match.

// A total of 
// N
// N students from the college want to go while only 
// M
// M tickets are available for the match.

// Determine how many students won't be able to book tickets.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int N,M;
	    scanf("%d %d",&N,&M);
	    if(M>=N)
	    {
	        printf("%d\n",0);
	    }
	    else
	    {
	        printf("%d\n",N-M);
	        
	    }
	}

}
