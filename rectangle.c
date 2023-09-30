#include <stdio.h>

int main() {
	
    int shortEdge, longEdge, i, j;
    
    printf("Enter a positive integer value for width of the rectangle: ");
    scanf("%d", &shortEdge);
    
    printf("\nEnter a positive integer value for length of the rectangle: ");
    scanf("%d", &longEdge);
    
    printf("\n");
    
    for ( i = 1; i <= longEdge; i++ ) {
    	
    	for ( j = 1; j <= shortEdge; j++ ) {
        	
            if ( i == 1 || i == longEdge || j == 1 || j == shortEdge ) {
            	
            	printf("*");
                
            }	else {
            	
                printf(" ");
                
            	}
        }
        
        printf("\n");
        
    }
    
    return 0;

}


