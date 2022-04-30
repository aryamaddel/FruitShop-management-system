#include<stdio.h>
#include<conio.h>
void main()
     {
           struct date{
           int day;
           int month;
           int year;
     };
           struct details{
           char name[20];
           int price;
           int code;
           int qty;
           struct date mfg;
     };
     struct details item[50];
     int n,i;
     printf("Fruit Shop by FYCM 1 Batch A \n");
     printf("------------------------------------------------------------------\n");
     printf("S.N.| NAME | CODE | PRICE |MFG.DATE\n");
     printf("------------------------------------------------------------------\n");
     printf("1.    Banana  001   20RS    28-04-2022\n2.    Apples  002   30Rs    27-04-2022\n3.    Grapes  003   20Rs    29-04-2022\n4.    Pear    004   30Rs    28-04-2022\n5.    Avocado 005   60Rs    31-03-2022"); 
     printf("\n------------------------------------------------------------------\n");
     printf("\nEnter number of items:\t");
     scanf("%d",&n);
     fflush(stdin);
     for(i=0;i<n;i++)
     {
      fflush(stdin);
      printf("Item name:");
      scanf("%s",item[i].name);
      fflush(stdin);
      printf("Item code:");
      scanf("%d",&item[i].code);
      fflush(stdin);
      printf("Quantity:");
      scanf("%d",&item[i].qty);
      fflush(stdin);
      printf("Item Price:");
      scanf("%d",&item[i].price);
      fflush(stdin);
      printf("Manufacturing date(dd-mm-yyyy):");
      scanf("%d-%d-%d",&item[i].mfg.day,&item[i].mfg.month,&item[i].mfg.year);
      }
      printf(" ***** INVENTORY *****\n");
      printf("------------------------------------------------------------------\n");
      printf("S.N.| NAME | CODE | QUANTITY | PRICE |MFG.DATE\n");
      printf("------------------------------------------------------------------\n");
      for(i=0;i<n;i++)
      {
                      printf("%d %-15s %-d %-5d %-5d%d/%d/%d\n",i+1,item[i].name,item[i].code,item[i].qty,item[i].price,item[i].mfg.day,item[i].mfg.month,item[i].mfg.year);
      }
      printf("------------------------------------------------------------------\n");
      getch();
return 0;
}
