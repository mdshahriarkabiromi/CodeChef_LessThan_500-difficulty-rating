// In the medieval age, there were 
// 3
// 3 kingdoms 
// A
// A, 
// B
// B, and 
// C
// C. The army of these kingdom had 
// N
// A
// N 
// A
// ​
//  , 
// N
// B
// N 
// B
// ​
//  , and 
// N
// C
// N 
// C
// ​
//   soldiers respectively.

// You are given that an army with 
// X
// X soldiers can defeat an army with 
// Y
// Y soldiers only if 
// X
// >
// Y
// X>Y.

// An army is said to be dominant if it can defeat both the other armies combined. For example, kingdom 
// C
// C's army will be dominant only if 
// N
// C
// >
// N
// A
// +
// N
// B
// N 
// C
// ​
//  >N 
// A
// ​
//  +N 
// B
// ​
//  .

// Determine whether any of the armies is dominant or not.


#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int NA,NB,NC;
	    scanf("%d %d %d",&NA,&NB,&NC);
	    
	    
	    if(NA>NB+NC || NB>NA+NC || NC>NB+NA)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }

	}
}