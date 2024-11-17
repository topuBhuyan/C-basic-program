#include<stdio.h>
int main(){
	
	int num1, num2, value;
	char sign;

	printf("please enter a number: %d\n", num1);
	scanf("%d\n", &num1);

	printf("please enter another number: %d\n ", num2);
	scanf("%d\n", &num2);

	value = num1 + num2;
	sign = '+';
	printf("%d %c %d = %d\n", num1, sign, num2, value);

	value = num1 - num2;
	sign = '-';
	printf("%d %c %d = %d\n", num1, sign, num2, value);

	value = num1 * num2;
	sign = '*';
	printf("%d %c %d = %d\n", num1, sign, num2, value);

	value = num1 / num2;
	sign = '/';
	printf("%d %c %d = %d\n", num1, sign, num2, value);


	return 0;
}