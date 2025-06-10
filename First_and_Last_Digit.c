#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int N;
	    scanf("%d",&N);
	    int sum=0;
	    int L=N%10;
	    int F=N;
	    while(F>=10)
	    {
	        F=F/10;
	    }
	    sum=L+F;

	    printf("%d\n",sum);
	}

}

