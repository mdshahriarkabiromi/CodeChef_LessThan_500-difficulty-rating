// Alice and Bob were having an argument about which of them is taller than the other. Charlie got irritated by the argument, and decided to settle the matter once and for all.

// Charlie measured the heights of Alice and Bob, and got to know that Alice's height is 
// X
// X centimeters and Bob's height is 
// Y
// Y centimeters. Help Charlie decide who is taller.

// It is guaranteed that 
// X
// ≠
// Y
// X=Y.

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
	    printf("A\n");
	    }
	    else
	    {
	        printf("B\n");
	    }
	}

}
