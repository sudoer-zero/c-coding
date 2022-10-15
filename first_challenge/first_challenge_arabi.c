#include <stdio.h>

/**
 * main - entry point
 * this program accept age as input.
 * then check if the user Adult or minor.
 * if the age less than 18 <print: minor>
 * if the age greater of equal to 18 <print: adult>
 * Return: Always 0
 */

int main(void)
{   
    // A variable to hold age value
    int age;

    // Prompt the user to enter his/her age
    printf("What is your age: ");
    scanf("%d", &age);

    // Check the age value and compare it with the adult parameters
    if(age <= 122 && age >= 18){
        printf("Adult\n");
    }
    
    // Check the age value and copare it with the minor parameters
	else if (age < 18 && age >= 0){
		printf("Minor\n");
	}

    // Chech if the age value is greater that 122
	else{
		printf("The current longevity record is held by Jeanne Calment,\n");
        printf("a French woman who passed away in 1997 at the age of 122 years and five months.\n");
	}

    return (0);
}
