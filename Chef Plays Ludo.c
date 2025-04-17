// Chef is playing Ludo. According to the rules of Ludo, a player can enter a new token into the play only when he rolls a 
// 6
// 6 on the die.

// In the current turn, Chef rolled the number 
// X
// X on the die. Determine if Chef can enter a new token into the play in the current turn or not.


#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X;
	    scanf("%d",&X);
	    if(X==6)
	    {
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}

}