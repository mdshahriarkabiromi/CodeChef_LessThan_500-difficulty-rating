#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X,Y,Z;
	    scanf("%d %d %d",&X,&Y,&Z);
	    if(X>Y && X>Z)
	    {
	        printf("SETTER\n");
	    }
	    else if(Y>X && Y>Z)
	    {
	        printf("TESTER\n");
	    }
	    else
	    {
	        printf("EDITORIALIST\n");
	    }
	}

}

