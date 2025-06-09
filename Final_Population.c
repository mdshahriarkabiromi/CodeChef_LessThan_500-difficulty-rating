#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X,Y,Z;
	    scanf("%d %d %d",&X,&Y,&Z);
        printf("%d\n",(X-Y)+Z);
	        
	}
}