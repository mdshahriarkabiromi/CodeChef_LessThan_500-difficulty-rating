// A study has shown that playing a musical instrument helps in increasing one's IQ by 
// 7
// 7 points. Chef knows he can't beat Einstein in physics, but he wants to try to beat him in an IQ competition.

// You know that Einstein had an IQ of 
// 170
// 170, and Chef currently has an IQ of 
// X
// X.

// Determine if, after learning to play a musical instrument, Chef's IQ will become strictly greater than Einstein's.

// Print "Yes" if it is possible for Chef to beat Einstein, else print "No" (without quotes).

// You may print each character of the string in either uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will all be treated as identical).

#include <stdio.h>

int main() {
	    int X;
	    scanf("%d",&X);
	    if(X+7>170)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
}