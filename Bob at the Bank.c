// Bob has an account in the Bobby Bank. His current account balance is 
// W
// W rupees.

// Each month, the office in which Bob works deposits a fixed amount of 
// X
// X rupees to his account.
// Y
// Y rupees is deducted from Bob's account each month as bank charges.

// Find his final account balance after 
// Z
// Z months. Note that the account balance can be negative as well.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int W,X,Y,Z;
	    scanf("%d %d %d %d",&W,&X,&Y,&Z);
	    printf("%d\n",W+(X*Z)-(Y*Z));
	}
}