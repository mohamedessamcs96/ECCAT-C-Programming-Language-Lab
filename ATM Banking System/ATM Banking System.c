#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Create A balance


    double Balance[1000];
    Balance[1]=1000;
    int secretNumber;
    double withdrawAmount,depositAmount;

    while(1==1){

    printf("\tWelcome in Our ATM Machine\n");

    //Get the secret number and check The validation

    do{
    printf("Please Enter your Secret number:");
    scanf("%d",&secretNumber);
    }
    while(secretNumber<1 || secretNumber>1000);

    if(secretNumber==99){
        int newuser;
        printf("This Page just for The Adminstrations\n");
        printf("Enter the The account number of the user you want add\n");
        scanf("%lf",&newuser);
        Balance[newuser]=0;
        printf("The Account has been made successfuly\n");
    }
    else {
        printf("Welcome in your Balance\n");
        printf("Please Enter the process number  \n");
        printf("To Check Balance? Enter number 1, to Withdraw? Enter number 2,to deposit Enter number 3 \n");


        int checkoperation;

        scanf("%d",&checkoperation);

        if(checkoperation==1){
            printf("Your Balance is %lf\n",Balance[secretNumber]);
        }
        else if(checkoperation==2){

            do{
            printf("please Enter a Valid amount of money that you want to withdraw:");
            scanf("%lf",&withdrawAmount);
            }
            while(Balance[secretNumber]<withdrawAmount);

            Balance[secretNumber]=Balance[secretNumber]-withdrawAmount;
            printf("You withdraw %lf ,now your Balance is %lf\n",withdrawAmount,Balance[secretNumber]);

        }
        else if(checkoperation==3){
            printf("please Enter the amount of money that you want to deposit:");
            scanf("%lf",&depositAmount);
            Balance[secretNumber]=Balance[secretNumber]+depositAmount;
            printf("You deposit %lf ,now your Balance is %lf\n",depositAmount,Balance[secretNumber]);
        }



        else{
            printf("Invalid input ");
        }
    }

    printf("\tThank you for Banking with us\n\n\n\n\n\n");
    }

    return 0;

}
