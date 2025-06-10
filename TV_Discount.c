#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int A,B,C,D;
	    scanf("%d %d %d %d",&A,&B,&C,&D);
	    if(A-C>B-D)
	    {
	        printf("SECOND\n");
	    }
	    else if(A-C<B-D)
	    {
	        printf("FIRST\n");
	    }
	    else
	    {
	        printf("ANY\n");
	    }
	}

}

