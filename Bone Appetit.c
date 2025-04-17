// Trick or treat, bags of sweets, ghosts are walking down the street

// It's Halloween and Suri Bhai is out to get his treats.
// There are two sectors in his neighborhood, "Bones" and "Blood". They have 
// N
// N and 
// M
// M people, respectively.

// Each person in "Bones" will hand out 
// X
// X treats, and each person in "Blood" will hand out 
// Y
// Y treats.
// How many treats does Suri Bhai get from visiting everyone in his neighborhood in total?

#include <stdio.h>

int main() {

	    int N,M;
	    scanf("%d %d",&N,&M);
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    printf("%d\n",X*N+Y*M);
	}
