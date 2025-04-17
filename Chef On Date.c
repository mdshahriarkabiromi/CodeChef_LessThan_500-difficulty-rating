// Chef and his girlfriend went on a date. Chef took 
// X
// X dollars with him, and was quite sure that this would be enough to pay the bill. At the end, the waiter brought a bill of 
// Y
// Y dollars. Print "YES" if Chef has enough money to pay the bill, or "NO" if he has to borrow from his girlfriend and leave a bad impression on her.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    if(X>=Y)
	    {
	    printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}

}
