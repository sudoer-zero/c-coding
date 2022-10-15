#include <stdio.h>

int main(void)
{
	int age;

	printf("Check if a minor or an adult by entering an age:  ");
	scanf("%d ", &age);


	if ((age >= 0) && (age < 18))
	{
		printf("Minor \n");
	}
	else if ((age >= 18) && (age <= 140))
	{
		printf("Adult \n");
	}
	else
	{
		printf("Not a normal human age \n");
	}
	return (0);
}
