#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X;
	    scanf("%d",&X);
	    if(3>=X)
	    {
        printf("BRONZE\n");
	    }
	    else if(6>=X && X>3)
	    {
	    printf("SILVER\n");
	    }
	    else
	    {
        printf("GOLD\n");
	    }
	        
	}
}