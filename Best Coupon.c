// Chef is ordering food online (instead of cooking) and the bill comes out to be Rs. 
// X
// X. Chef can use one of the following two coupons to avail a discount.

// Get 
// 10
// 10 percent off on the bill amount
// Get a flat discount of Rs. 
// 100
// 100 on the bill amount
// What is the maximum discount Chef can avail?

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X;
	    scanf("%d",&X);
	    if(X*0.1>100)
	    {
	    X=X*0.1;
	    printf("%d\n",X);
	    }
	    else
	    {
	        printf("100\n");
	    }
	}

}
