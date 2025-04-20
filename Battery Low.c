// Chef's phone shows a Battery Low notification if the battery level is 
// 15
// %
// 15% or less.

// Given that the battery level of Chef's phone is 
// X
// %
// X%, determine whether it would show a Battery low notification.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X;
	    scanf("%d",&X);
	    if(X<=15)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
}