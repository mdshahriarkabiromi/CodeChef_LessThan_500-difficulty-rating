// Chef's playlist contains 
// 3
// 3 songs named 
// A
// ,
// B
// A,B, and 
// C
// C, each of duration exactly 
// X
// X minutes. Chef generally plays these 
// 3
// 3 songs in loop, i.e, 
// A
// →
// B
// →
// C
// →
// A
// →
// B
// →
// C
// →
// A
// →
// …
// A→B→C→A→B→C→A→…

// Chef went on a train journey of 
// N
// N minutes and played his playlist on loop for the whole journey. How many times did he listen to the song 
// C
// C completely?

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int N,X;
	    scanf("%d %d",&N,&X);
	    printf("%d\n",(N/X)/3);
	}
}