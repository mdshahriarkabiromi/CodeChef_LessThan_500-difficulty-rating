// In a certain month, Chef earned 
// X
// X rupees while Chefina earned 
// Y
// Y rupees such that 
// Y
// >
// X
// Y>X.
// Since they want to end up with exactly the same amount, they decide to donate the difference between their income to a charity.

// Find the amount they donate in the month.


#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    printf("%d\n",Y-X);

	}
}