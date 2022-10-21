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
	printf("Please select the options:\n");
	printf("1) Addition\t2)Subtraction\n3)Multiplication\t4)Division\n");
	scanf("%d",&option);

again:
	switch (option)
	{
		case '1':
			addition();
			break;
		case '2':
			subtraction();
			break;
		case '3':
			multiplication();
			break;
		case '4':
			Division();
			break;
		default:
			printf("Please Select the given options only\n");
			goto again;
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

