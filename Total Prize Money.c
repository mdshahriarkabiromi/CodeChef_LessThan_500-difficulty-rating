// In a coding contest, there are prizes for the top rankers. The prize scheme is as follows:

// Top 
// 10
// 10 participants receive rupees 
// X
// X each.
// Participants with rank 
// 11
// 11 to 
// 100
// 100 (both inclusive) receive rupees 
// Y
// Y each.
// Find the total prize money over all the contestants.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    printf("%d\n",10*X+90*Y);
	        
	}

}
