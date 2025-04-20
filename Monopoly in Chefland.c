// Chef is the financial incharge of Chefland and one of his duties is identifying if any company has gained a monopolistic advantage in the market.

// There are exactly 
// 3
// 3 companies in the market each of whose revenues are denoted by 
// R
// 1
// R 
// 1
// ​
//  , 
// R
// 2
// R 
// 2
// ​
//   and 
// R
// 3
// R 
// 3
// ​
//   respectively. A company is said to have a monopolistic advantage if its revenue is strictly greater than the sum of the revenues of its competitors.

// Given the revenue of the 
// 3
// 3 companies, help Chef determine if any of them has a monopolistic advantage.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int R1,R2,R3;
	    scanf("%d %d %d",&R1,&R2,&R3);
	    
	    
	    if(R1>R2+R3 || R2>R1+R3 || R3>R1+R2)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }

	}
}