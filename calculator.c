#include<stdio.h>
int main(){
	double num1,num2;
	char operator;
	double result;

	printf("Enter first number: ");
	scanf("%lf",&num1);

	printf("Enter a operator(+,-,*,/): ");
	scanf("%c", &operator);

	printf("Enter second number: ");
	scanf("%lf",&num2);

	switch(operator){
		case'+':
			result=num1+num2;
			printf("result: %.2lf\n",result);
			break;

                case'-':
                        result=num1-num2;
                        printf("result: %.2lf\n",result);
                        break;    
		
		case'*':
                        result=num1*num2;
                        printf("result: %.2lf\n",result);
                        break
		case'/':
                        if(num2!=0){
			result=num1/num2;
                        printf("result: %.2lf\n",result);
                        
			}else{
				printf("Erroe: Division by zero is not allowed.\n);
			}
			break;
		default:
			printf("Invalid operator!.\n");
	}
	return 0:
}
	
