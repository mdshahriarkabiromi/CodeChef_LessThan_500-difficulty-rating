// Harsh was recently gifted a book consisting of 
// N
// N pages. Each page contains exactly 
// M
// M words printed on it. As he was bored, he decided to count the number of words in the book.

// Help Harsh find the total number of words in the book.

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    int N,M;
	    scanf("%d %d",&N,&M);
        printf("%d\n",N*M);
	}

}
