#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int G,B;
	    scanf("%d %d",&G,&B);
	    printf("%d\n",B-G);
	}
}