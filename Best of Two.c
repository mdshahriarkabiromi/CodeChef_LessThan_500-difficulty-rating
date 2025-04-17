// Chef took an examination two times. In the first attempt, he scored 
// X
// X marks while in the second attempt he scored 
// Y
// Y marks. According to the rules of the examination, the best score out of the two attempts will be considered as the final score.

// Determine the final score of the Chef.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    if(X>Y)
	    {
	    printf("%d\n",X);
	    }
	    else
	    {
	        printf("%d\n",Y);
	    }
	}

}
