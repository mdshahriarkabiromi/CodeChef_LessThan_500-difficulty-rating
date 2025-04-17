// There are three friends and a total of 
// N
// N candies.
// There will be a fight amongst the friends if all of them do not get the same number of candies.

// Chef wants to divide all the candies such that there is no fight. Find whether such distribution is possible.


#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int N;
	    scanf("%d",&N);
	    if(N%3==0)
	    {
	    printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}

}
