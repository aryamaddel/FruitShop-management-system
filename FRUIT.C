//Fruit Shop Management Program in C by Ved Asawa, Avneesh Jagtap and Arya Maddel
#include <stdio.h>	//Include Header files
#include <conio.h>
struct fruit		//Fruit Structure
{
	int code;
	int quantity;
}fr[5];

void main()
{
int i, n, h, a;		//Variable Declaration
float f1, f2, f3, f4 ,f5;
clrscr();
	printf("\t\t\tWelcome to our Fruit Shop");		//User Interface
	printf("\n\n\nToday in our shop we are selling : ");

	printf("\n\n-----------------------------------------------------");
	printf("\n|Item Number\t|\tFruit\t   |\tPrice\t    |");
	printf("\n-----------------------------------------------------");
	printf("\n|\t1.\t|\tBanana     |\tRs.40/Dozen |");
	printf("\n|\t2.\t|\tOranges    |\tRs.100/Kg   |");
	printf("\n|\t3.\t|\tApple      |\tRs.200/Kg   |");
	printf("\n|\t4.\t|\tWatermellon|\tRs.20/Kg    |");
	printf("\n|\t5.\t|\tGuava      |\tRs.60/Kg    |");
	printf("\n-----------------------------------------------------");

	printf("\n\nHow many fruits you have to order : ");
	scanf("%d", &n);

	for (i = 0;i < n; i++)					//Condition
	{
		printf("\nEnter Item Number : ");
		scanf("%d", &a);

	if (a==1)
	{
		printf("Number of Banana = ");
		scanf("%d",&fr[1].quantity);
		f1=fr[1].quantity;
	}
	else if (a==2)
	{
		printf("Grams of Oranges = ");
		scanf("%d",&fr[2].quantity);
		f2=fr[2].quantity;
	}
	else if (a==3)
	{
		printf("Grams of Apple = ");
		scanf("%d",&fr[3].quantity);
		f3=fr[3].quantity;
	}
	else if (a==4)
	{
		printf("Grams of Watermellon = ");
		scanf("%d",&fr[4].quantity);
		f4=fr[4].quantity;
	}
	else if (a==5)
	{
		printf("Grams of Guava = ");
		scanf("%d",&fr[5].quantity);
		f5=fr[5].quantity;
	}
	else
	{
		printf("Product Invalid");
	}
	}
	printf("\n-------------------------------------------");		//Final Bill
	clrscr();
	printf("\n--------------------------------------------------------------------------------");
	printf("Your Reciept\n");
	printf("--------------------------------------------------------------------------------");
	printf("|Item Number\t|\tFruit\t  |\tQuantity|\tPrice\t|\n");
	printf("--------------------------------------------------------------------------------");
	printf("\n|\t1.\t|\tBanana     |\t%.2f\t|\t%.2f\t|", f1, f1 * 3.33);
	printf("\n|\t2.\t|\tOranges    |\t%.2f\t|\t%.2f\t|", f2, f2 * 0.1);
	printf("\n|\t3.\t|\tApple      |\t%.2f\t|\t%.2f\t|", f3, f3 * 0.2);
	printf("\n|\t4.\t|\tWatermelon |\t%.2f\t|\t%.2f\t|", f4, f4 * 0.02);
	printf("\n|\t5.\t|\tGuava      |\t%.2f\t|\t%.2f\t|", f5, f5 * 0.06);
getch();
}
