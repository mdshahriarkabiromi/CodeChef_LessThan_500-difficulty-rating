// Chef appeared for a placement test.

// There is a problem worth 
// X
// X points. Chef finds out that the problem has exactly 
// 10
// 10 test cases. It is known that each test case is worth the same number of points.

// Chef passes 
// N
// N test cases among them. Determine the score Chef will get.

// NOTE: See sample explanation for more clarity.



#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    
	    int X,N;
	    scanf("%d %d",&X,&N);
	    printf("%d\n",X/10*N);
	}

}

