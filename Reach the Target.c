// There is a cricket match going on between two teams 
// A
// A and 
// B
// B.

// Team 
// B
// B is batting second and got a target of 
// X
// X runs. Currently, team 
// B
// B has scored 
// Y
// Y runs. Determine how many more runs Team 
// B
// B should score to win the match.

// Note: The target score in cricket matches is one more than the number of runs scored by the team that batted first.


#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    printf("%d\n",X-Y);
	   
	}

}
