#include<stdio.h>
int main(){
	
	int num1, num2;
	printf("please enter a number: %d\n", num1);
	scanf("%d\n", &num1);

	printf("please enter another number: %d\n ", num2);
	scanf("%d\n", &num2);

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);

	return 0;
}