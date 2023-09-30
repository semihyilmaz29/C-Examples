#include <stdio.h>

int main() {
	
    int n, i, j;

    printf("Please enter a positive integer value: ");
    scanf("%d", &n);
    
    printf("\n");

	//Top
    for ( i = 1; i <= n; i++ ) {
    	
        for ( j = 1; j <= i; j++ ) {
        	
            printf("*");
            
        }
        
        for ( j = 1; j <= 2*(n - i); j++ ) {
        	
            printf(" ");
            
        }
        
        for ( j = 1; j <= i; j++ ) {
        	
            printf("*");
            
        }
        
        printf("\n");
        
    }
    
    //Bottom
    for ( i = n; i >= 1; i-- ) {
    	
        for (j = 1; j <= i; j++) {
        	
            printf("*");
            
        }
        
        for (j = 1; j <= 2*(n - i); j++) {
        	
            printf(" ");
            
        }
        
        for (j = 1; j <= i; j++) {
        	
            printf("*");
            
        }
        
        printf("\n");
        
    }

    return 0;
    
}
    
	

