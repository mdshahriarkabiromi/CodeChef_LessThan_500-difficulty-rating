// Chef wants to gift 
// C
// C chocolates to Botswal on his birthday. However, he has only 
// X
// X chocolates with him.
// The cost of 
// 1
// 1 chocolate is 
// Y
// Y rupees.

// Find the minimum money in rupees Chef needs to spend so that he can gift 
// C
// C chocolates to Botswal.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int C,X,Y;
	    scanf("%d %d %d",&C,&X,&Y);
	    printf("%d\n",(C-X)*Y);
	}
}