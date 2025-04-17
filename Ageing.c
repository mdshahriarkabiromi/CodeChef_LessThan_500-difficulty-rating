// Chef's current age is 
// 20
// 20 years, while Chefina's current age is 
// 10
// 10 years.
// Determine Chefina's age when Chef will be 
// X
// X years old.

// Note: Assume that Chef and Chefina were born on same day and same month (just different year).


#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X;
	    scanf("%d",&X);
	  
	    printf("%d\n",X-10);
	}

}
