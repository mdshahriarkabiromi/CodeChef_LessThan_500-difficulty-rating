#include <stdio.h>

int main() {
	int N;
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
	    int N1,N2,N3;
	    scanf("%d %d %d",&N1,&N2,&N3);
	    if(N1>N2 && N1>N3)
	    {
	        if(N2>N3)
	        {
	            printf("%d\n",N2);
	        }
	        else
	        {
	            printf("%d\n",N3);
	        }
	    }
	    else if(N2>N1 && N2>N3)
	    {
	        if(N1>N3)
	        {
	            printf("%d\n",N1);
	        }
	        else
	        {
	            printf("%d\n",N3);
	        }
	    }
	    else if(N3>N2 && N3>N1)
	    {
	        if(N2>N1)
	        {
	            printf("%d\n",N2);
	        }
	        else
	        {
	            printf("%d\n",N1);
	        }
	    }
	}
}