#include <stdio.h>

int main() {
    
	float a, b, battery1 = 0, resistor1 = 0, current1, power1; 
    int i, c, bnumber, rnumber;

    printf("How many batteries are there in the circuit? ");
    scanf("%d", &bnumber);
    
    if ( bnumber == 1 ) { 
    
    	printf("\nPlease enter the voltage value of the battery: ");
        scanf("%f", &battery1); 
		       
    } 	else {
		
	    	printf("\nPlease enter the values of the batteries one by one in volts: ");
	
	    	for ( i = 1; i <= bnumber; i++ ) {
	        	
	            scanf("%f", &a);
	            battery1 += a;
	            
	        }	
       }
    
    printf("\nHow many resistors are there in the circuit? ");
    scanf("%d", &rnumber);
        
    if ( rnumber == 1 ) {
    	
        printf("\nPlease enter the resistor value in ohms: ");
        scanf("%f", &resistor1);
    
    }	else {
	
		    printf("\nAre the resistors connected in series or parallel?\n");
		    printf("Please enter 1 if they are series, if they are parallel enter 2: ");
		    scanf("%d", &c);
	        
	        switch(c) {
	        	
	        	case 1:
	        		
	                printf("\nPlease enter the values of resistors one by one in ohms: ");
				
	                for (i = 1; i <= rnumber; i++) {
	                    
						scanf("%f", &b);
	                    resistor1 += b;
	                    
	                } break;
	        
	            case 2:
	            	
	                printf("\nPlease enter the resistor values one by one in ohms: ");
	        	
	                for(i = 1; i <= rnumber; i++) {
	                	
	                    scanf("%f", &b);
	                    resistor1 += (1 / b);
	                    resistor1 = 1 / resistor1;
	                    
	                } break;
	        }
		} 
	  
    current1 = battery1 / resistor1;
    power1 = battery1 * current1;
    
    printf("\n\nTotal voltage value of the circuit is %.3f Volts", battery1);
    printf("\n\nTotal resistance value of the circuit is %.3f Ohms", resistor1);
    printf("\n\nTotal current value of the circuit is %.3f Amps", current1);
    printf("\n\nThe power value of the circuit is %.3f Watts", power1);

    return 0;
 
}

