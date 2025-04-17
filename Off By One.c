// You just bought a new calculator, but it seems to have a small problem: all its results have an extra 
// 1
// 1 appended to the end.
// For example, if you ask it for 3 + 5, it'll print 81, and 4 + 12 will result in 161.

// Given 
// A
// A and 
// B
// B, can you predict what the calculator will print when you ask it for 
// A
// +
// B
// A+B?

#include <stdio.h>

int main() {
	    int A,B;
	    scanf("%d %d",&A,&B);
	    printf("%d1\n",A+B);

}