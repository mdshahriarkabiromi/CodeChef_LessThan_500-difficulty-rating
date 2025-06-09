#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int A,B,C;
	    scanf("%d %d %d",&A,&B,&C);
	    if(A>B && A>C)
	    {
	        printf("Alice\n");
	    }
	    else if(B>A && B>C)
	    {
	        printf("Bob\n");
	    }
	    else
	    {
	        printf("Charlie\n");
	    }
	}
}