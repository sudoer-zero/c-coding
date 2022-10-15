#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 Success
 */
int main(void)
{
	/*variable declaration */
	int age;

	/*Acceptting data input using scanf() and assigning it to variable age */
	printf("Check if a minor or an adult by entering an age:  ");
	scanf("%d", &age);


	/* The condition for sending output if underaged along with output to be printed*/
	if ((age >= 0) && (age < 18))
	{
		printf("Minor \n");
	}
	/* The condition for capturing a real adult age along with its output*/
	else if ((age >= 18) && (age <= 140))
	{
		printf("Adult \n");
	}
	/*The condition for unrealistic inputs along with its corresponding output*/
	else
	{
		printf("Not a normal human age \n");
	}
	return (0);
}
