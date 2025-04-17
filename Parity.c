// Ashu and Arvind participated in a coding contest, as a result of which they received 
// N
// N chocolates. Now they want to divide the chocolates between them equally.

// Can you help them by deciding if it is possible for them to divide all the 
// N
// N chocolates in such a way that they each get an equal number of chocolates?

// You cannot break a chocolate in two or more pieces.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int N;
	    scanf("%d",&N);
	    if(N%2==0)
	    {
	    printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}

}
