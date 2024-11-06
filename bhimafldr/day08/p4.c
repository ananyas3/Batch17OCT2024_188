/*
while(cond1)
{
	sts
}
*/

#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1
#define True 1
#define False 0


int displayMenu();
int addition();
int main()
{
	int ch;
	int flag = 0;
	int a,b;
	scanf("%d %d", &a, &b);
	while(True){
		flag = 0;
		//ch = displayMenu();
		

		switch(displayMenu())
		{
			case 1:
				printf("\nAddition function executed\n");
				break;
			case 2:
				printf("\nSub function executed\n");
				break;
			case 3:
				printf("\nMul function executed\n");
				break;
			case 4:
				printf("\nDivision function executed\n");
				break;
			case 5:
				printf("\nExiting from the Application\n");
				//exit(SUCCESS);
				flag = 1;
				break;
			default:
				printf("\nEnter the correct Choice\n");

		}//end of switch

		if(flag == 1)
			break;

	}//end of while loop

	printf("\nProgram Ended\n\n");
	return (SUCCESS);
}

int displayMenu()
{
	int choice;

	printf("\nPress,");
	printf("\n1. Addition");
	printf("\n2. Sub");
	printf("\n3. Mul");
	printf("\n4. Division");
	printf("\n5. Exit");
	printf("\nChoice: ");
	scanf("%d",&choice);

	return choice;
}
int addition()
{
    int a, b, result;

    printf("\nEnter two numbers to add: ");
    scanf("%d %d", &a, &b);

    result = a + b;
	printf("\nThe result of addition is: %d\n", result);
	return 0;
}

