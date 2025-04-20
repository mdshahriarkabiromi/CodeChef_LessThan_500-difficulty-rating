// Chef has opened a new airline. Chef has 
// 10
// 10 airplanes where each airplane has a capacity of 
// X
// X passengers.
// On the first day itself, 
// Y
// Y people are willing to book a seat in any one of Chef's airplanes.

// Given that Chef charges 
// Z
// Z rupees for each ticket, find the maximum amount he can earn on the first day.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X,Y,Z;
	    scanf("%d %d %d",&X,&Y,&Z);
	    if(X*10>Y)
	    {
	        printf("%d\n",Y*Z);
	    }
	    else
	    {
	        printf("%d\n",X*10*Z);
	    }
	}
}