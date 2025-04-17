// Chef's website has a specific response mechanism based on the HTTP status code received:

// If the response code is 
// 404
// 404, the website will return NOT FOUND.
// For any other response code different from 
// 404
// 404, the website will return FOUND.
// Given the response code as 
// X
// X, determine the website response.


#include <stdio.h>

int main() {
	int X;
	scanf("%d",&X);
	if(X==404)
	{
	    printf("NOT FOUND");
	}
	else{
	    
	    printf("FOUND");
	}
	    

}