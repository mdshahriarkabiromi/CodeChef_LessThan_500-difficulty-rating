// Chef has finally got the chance of his lifetime to drive in the 
// F
// 1
// F1 tournament. But, there is one problem. Chef did not know about the 107% rule and now he is worried whether he will be allowed to race in the main event or not.

// Given the fastest finish time as 
// X
// X seconds and Chef's finish time as 
// Y
// Y seconds, determine whether Chef will be allowed to race in the main event or not.

// Note that, Chef will only be allowed to race if his finish time is within 107% of the fastest finish time.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    if(Y*100<=X*107)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
}