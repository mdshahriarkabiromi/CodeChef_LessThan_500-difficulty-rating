// 
// In Chefland, everyone who earns strictly more than 
// Y
// Y rupees per year, has to pay a tax to Chef. Chef has allowed a special scheme where you can invest any amount of money and claim exemption for it.

// You have earned 
// X
// X 
// (
// X
// >
// Y
// )
// (X>Y) rupees this year. Find the minimum amount of money you have to invest so that you don't have to pay taxes this year.

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
