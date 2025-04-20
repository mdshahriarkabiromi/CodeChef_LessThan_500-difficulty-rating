// Alice has a bucket of water initially having 
// W
// W litres of water in it. The maximum capacity of the bucket is 
// X
// X liters.

// Alice turned on the tap and the water starts flowing into the bucket at a rate of 
// Y
// Y litres/hour. She left the tap running for exactly 
// Z
// Z hours. Determine whether the bucket has been overflown, filled exactly, or is still left unfilled.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int W,X,Y,Z;
	    scanf("%d %d %d %d",&W,&X,&Y,&Z);
	    
	    
	    if((X-W)>Z*Y)
	    {
	        printf("unfilled\n");
	    }
	    else if((X-W)<Z*Y)
	    {
	        printf("overflow\n");
	    }
	    else
	    {
	        printf("filled\n");
	    }

	}
}