#include<stdio.h>
int main(){

	//char ch = 'Q';
	char ch;
	printf("Enter Eny key: ");
	scanf("%c", &ch);

	if(ch >= 'a' && ch <= 'z'){
		printf("%c is lower case\n", ch);
	}
	if(ch >= 'A' && ch <= 'Z'){
		printf("%c is upper case\n", ch);
	}

	return 0;
}