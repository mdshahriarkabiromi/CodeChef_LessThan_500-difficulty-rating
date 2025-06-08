#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1; i<=T;i++)
	{
	    int K,X;
	    scanf("%d %d",&K, &X);
	    printf("%d\n",K*7-X);
	}

}

