// If you wanna party, if you, if you wanna party
// Then put your hands up

// Chef wants to host a party with a total of 
// N
// N people.
// However, the party hall has a capacity of 
// X
// X people. Find whether Chef can host the party.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int N,X;
	    scanf("%d %d",&N,&X);
	    if(X>=N)
	    {
	        printf("YES");
	    }
	    else
	    {
	        printf("NO");
	    }
	        
	}

}

