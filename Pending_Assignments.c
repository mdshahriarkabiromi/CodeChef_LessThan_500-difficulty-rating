#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X,Y,Z;
	    scanf("%d %d %d",&X,&Y,&Z);
	    if(Z*1440>=X*Y)
	    {
        printf("YES\n");
	    }
	    else
	    {
        printf("NO\n");
	    }
	        
	}
}