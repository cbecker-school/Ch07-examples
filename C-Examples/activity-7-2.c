#include <stdio.h>

int main(void)
{
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	if (age > 0)
	{
		printf("You are %d years old\n", age);
	}
}
