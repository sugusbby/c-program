#include <stdio.h>

int main() {
	double number;
	printf("enter a number");
	scanf("%d",&number);
	if(number<0)
	printf("you entered a negative number");
	else if(number>0);
	printf("you entered a postive number");
	else
	printf("you entered a 0");
	return 0;
}
