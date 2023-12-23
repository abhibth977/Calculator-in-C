//Calculator

#include<stdio.h>
#include<math.h>

void centerStar(int rating);

int main()
{	
	int rating;
    char operator;
    double a, b,result;
    
        printf("Enter an operator (+, -, *, /, %, s(sqrt), l(log), p(power)"
               "if want to exit press x: ");
        scanf(" %c", &operator);
 

        if (operator == 'x')
            exit(0);
 
        
        switch (operator) {
 
        
        case '+':
        	printf("Enter first number => ");
	        scanf("%lf", &a);
	        
	        printf("Enter second number => ");
	        scanf("%lf", &b);
            printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
            break;
 
        
        case '-':
        	printf("Enter first number => ");
	        scanf("%lf", &a);
	        
	        printf("Enter second number => ");
	        scanf("%lf", &b);
            printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
            break;
 
        
        case '*':
        	printf("Enter first number => ");
	        scanf("%lf", &a);
	        
	        printf("Enter second number => ");
	        scanf("%lf", &b);
            printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
            break;
 
        
        case '/':
        	printf("Enter first number => ");
	        scanf("%lf", &a);
	        
	        printf("Enter second number => ");
	        scanf("%lf", &b);
            printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
            break;
 
 
		case'%':
			printf("Enter first number => ");
	        scanf("%lf", &a);
	        
	        printf("Enter second number => ");
	        scanf("%lf", &b);
			printf("(%.1f * %.1f)/100 = %.1f\n",a,b,(a*b)/100);
			break;				
						
						
		case's':
			printf("Enter your number => ");
	        scanf("%lf", &a);
	        
			printf("%.1f =%.1f\n",a,sqrt(a));
			if (a < 0) {
			    printf("Error: Square root of negative number!\n");
			    break;
	        }
	        break;
	        
	        
	    case'p':
				printf("Enter base number => ");
			    scanf("%lf", &a); 
			    printf("Enter exponent number => ");
			    scanf("%lf", &b);  
			    printf("%.1f ^ %.1f = %.1f\n", a, b, pow(a, b));
			    break;   
				        
				        
		case 'l':
	    printf("Enter number => ");
	    scanf("%lf", &a);  
	    printf("%.1f = %.1f\n", a, log(a));
	    break;

				        
        
        default:
            printf(
                "Error! please write a valid operator\n");
        }
 
 
    
    	printf("Please rate our calculator out of 10 => ");
			    scanf("%d", &rating);
			    centerStar(rating);
			    
			    printf("Thanks for giving %d rating",rating);
    
    
    return 0;
}
	
	
	
void centerStar(int rating) {
    for (int i = 1; i <= rating; i++) {

        for (int j = 1; j <= rating - i; j++) {
            printf(" ");
        }

        
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }
}


