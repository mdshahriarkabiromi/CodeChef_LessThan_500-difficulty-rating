// Chef's dog binary hears frequencies starting from 
// 67
// 67 Hertz to 
// 45000
// 45000 Hertz (both inclusive).

// If Chef's commands have a frequency of 
// X
// X Hertz, find whether binary can hear them or not.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X;
	    scanf("%d",&X);
	    if(45000>=X && X>=67)
	    {
	    printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}

}
