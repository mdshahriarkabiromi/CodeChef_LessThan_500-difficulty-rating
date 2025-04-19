// Chef's coding class is very famous in Chefland.

// This year 
// X
// X students joined his class and each student will require one chair to sit on. Chef already has 
// Y
// Y chairs in his class. Determine the minimum number of new chairs Chef must buy so that every student is able to get one chair to sit on.

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
	        printf("%d\n",X-Y);
	    }
	    else
	    {
	        printf("0\n");
	    }
	        
	}
}