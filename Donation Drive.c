// A blood drive aims to collect 
// N
// N number of blood donations.
// The drive has collected 
// X
// X donations so far. Find the remaining number of donations needed to reach the target.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int N,X;
	    scanf("%d %d",&N,&X);
	    printf("%d\n",N-X);
	        
	}

}
