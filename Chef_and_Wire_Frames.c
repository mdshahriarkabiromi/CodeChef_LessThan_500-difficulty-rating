#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int N,M,X;
	    scanf("%d %d %d",&N,&M,&X);
	    printf("%d\n",(2*N+2*M)*X);
	}
}