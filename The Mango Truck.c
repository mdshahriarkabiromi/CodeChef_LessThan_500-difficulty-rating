// You are given that a mango weighs 
// X
// X kilograms and a truck weighs 
// Y
// Y kilograms. You want to cross a bridge that can withstand a weight of 
// Z
// Z kilograms.

// Find the maximum number of mangoes you can load in the truck so that you can cross the bridge safely.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X,Y,Z;
	    scanf("%d %d %d",&X,&Y,&Z);
	    printf("%d\n",(Z-Y)/X);
	}
}