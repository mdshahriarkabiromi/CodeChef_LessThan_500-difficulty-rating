#include <stdio.h>

int main() 
{
    int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
	    int C;
	    scanf("%d",&C);
	        if(C>20)
	        {
	            printf("HOT\n");
	        }
	        else
	        {
	            printf("COLD\n");
	        }
    }
}
