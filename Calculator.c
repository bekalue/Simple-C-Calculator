#include <stdio.h>
#include <stdlib.h>

/*function prototypes*/
void addition();
void subtraction();
void multiplication();
void Division();


int main(void)
{
	int option;

	printf("Hi, I am alexa\n");
	printf("1) Addition\t2)Subtraction\n3)Multiplication\t4)Division\n");
	printf("Please select the option:");
	scanf("%d",&option);

	switch (option)
	{
		case 1:
			addition();
			break;
		case 2:
			subtraction();
			break;
		case 3:
			multiplication();
			break;
		case 4:
			Division();
			break;
		default:
			printf("Please Select the given options only\n");
	}
	return (0);
}

void addition()
{
	double x, y;

	printf("PLease enter the two numbers to be added\n");
	scanf("%lf\t%lf",&x,&y);

	printf("%f\n", x + y);
}

void subtraction()
{
	double x, y;

	printf("Please enter the two numbers to be subed\n");
	scanf("%lf\t%lf", &x, &y);

	printf("%f\n", x - y);
}
void multiplication()
{
	double x, y;

	printf("Please enter the two numbers to be multiplied\n");
	scanf("%lf\t%lf", &x, &y);

	printf("%f\n", x * y);
}
void Division()
{
	double x, y;

	printf("Please enter the two numbers to be divided\n");
	scanf("%lf\t%lf", &x, &y);

	printf("%f\n", x / y);
}
