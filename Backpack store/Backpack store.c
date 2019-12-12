#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    time_t t;
    time(&t);
    printf("Data Entered By Cashier!\n");
    float LabTopBagCost;
    int LabTobBagsNumber;
    printf("Enter your Name:");
    char name[20];
    fgets(name,20,stdin);
    printf("Enter The Numbers of bags you want to buy:");
    scanf("%d",&LabTobBagsNumber);
    printf("Enter The Bag Cost:");
    scanf("%f",&LabTopBagCost);
    printf("\n\n\n");
    printf("----------------------------------------------------\n");
    printf("\t\t CASH RECEIPT\n");
    printf("----------------------------------------------------\n");
    printf("\t\tLaptop Bag Store\n");

    printf("Date \t %s",ctime(&t));
    printf("Cashier Name\t %s\n",name);

    printf("---------------------------------------------------\n");

    printf("Product quantity \t %d\n",LabTobBagsNumber);
    printf("Product Cost per one \t %f \n",LabTopBagCost);
    printf("---------------------------------------------------\n");
    printf("Price \t %f\n",(LabTobBagsNumber*LabTopBagCost));
    printf("-------------------------\n");
    printf("The 10 percent coupon discount equall %f \n",(LabTobBagsNumber*LabTopBagCost)/10);
    printf("---------------------------------------------------\n");
    printf("Final Price \t %f \n",((LabTobBagsNumber*LabTopBagCost)-(LabTobBagsNumber*LabTopBagCost)/10));
    printf("---------------------------------------------------\n");
    printf("\t\tTHANK YOU");
    printf("\n\n\n\n\n\n\n\n\n");

    return 0;
}
