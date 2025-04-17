// In a classic chase, Tom is running after Jerry as Jerry has eaten Tom's favourite food.

// Jerry is running at a speed of 
// X
// X metres per second while Tom is chasing him at a speed of 
// Y
// Y metres per second. Determine whether Tom will be able to catch Jerry.

// Note that initially Jerry is not at the same position as Tom.


#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    if(Y>X)
	    {
	    printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}

}
