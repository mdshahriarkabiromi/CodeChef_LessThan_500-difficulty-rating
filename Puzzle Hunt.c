// Chef and some of his friends are planning to participate in a puzzle hunt event.

// The rules of the puzzle hunt state:
// "This hunt is intended for teams of 
// 6
// 6 to 
// 8
// 8 people."

// Chef's team has 
// N
// N people in total. Are they eligible to participate?

#include <stdio.h>

int main() {
	    int N;
	    scanf("%d",&N);
	    if(8>=N && N>=6)
	    {
	    printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}

