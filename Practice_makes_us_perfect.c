#include <stdio.h>

int main() {
	int P[10];
	int count=0;
	for(int i=0;i<4;i++)
	{
	scanf("%d",&P[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        if(P[i]>=10)
	{
	    count=count+1;
	}
    }
	printf("%d",count);
}

