// Alice, Bob, and Charlie are contributing to buy a Netflix subscription. However, Netfix allows only two users to share a subscription.

// Given that Alice, Bob, and Charlie have 
// A
// ,
// B
// ,
// A,B, and 
// C
// C rupees respectively and a Netflix subscription costs 
// X
// X rupees, find whether any two of them can contribute to buy a subscription.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int A,B,C,X;
	    scanf("%d %d %d %d",&A,&B,&C,&X);
	    if(A+B>=X || A+C>=X || B+C>=X)
	    {
	    printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}

}
