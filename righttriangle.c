#include <stdio.h>

int main() {

	int i, j, height;

	printf( "What do you want the height of the right triangle to be in units?: " );
	scanf( "%d", &height );
	
	printf("\n");
	
	if ( height <= 0 ) {
		
		printf("Invalid height input. Please enter a positive integer. \n");
		
		return 1;
			
	}
	
	for( i=1; i<=height; i++ ) {
		
		for( j=1; j<=i; j++ ) {
				
			printf("*");	
				
		}
			
			printf("\n");
				
	}
	
	return 0;
	
}
