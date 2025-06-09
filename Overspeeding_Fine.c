#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X;
	    scanf("%d",&X);
	    if(70>=X)
	    {
	        printf("%d\n",0);
	    }
	    else if(100>=X && X>70)
	    {
	        printf("%d\n",500);
	    }
	    else
	    {
	        printf("%d\n",2000);
	    }
	}
}