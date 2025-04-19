// Chef is on his way to become the new big bull of the stock market but is a bit weak at calculating whether he made a profit or a loss on his deal.

// Given that Chef bought the stock at value 
// X
// X and sold it at value 
// Y
// Y. Help him calculate whether he made a profit, loss, or was it a neutral deal.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    if(X>Y)
	    {
	        printf("LOSS\n");
	    }
	    else if(Y>X)
	    {
	        printf("PROFIT\n");
	    }
	    else
	    {
	        printf("NEUTRAL\n");
	    }
	        
	}
}