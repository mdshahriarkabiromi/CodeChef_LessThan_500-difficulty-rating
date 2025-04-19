// Four friends want to attend a concert. Each ticket costs 
// X
// X rupees.
// They have decided to go to the concert if and only if the total cost of the tickets does not exceed 
// 1000
// 1000 rupees.

// Determine whether they will be going to the concert or not.


#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X;
	    scanf("%d",&X);
	    if(X*4<=1000)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	        
	}
}