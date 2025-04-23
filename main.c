#include<stdio.h>

//declaring functions
void checkBalance(float balance);
float depositMoney(float balance);
float withdrawMoney(float balance);
void menu();

int main(){
       float balance = 1000.00; 
       int choice;
       int run = 1;
       //geting baance from user
       printf("Enter your initial account balance: Rs.");
       scanf("%f", &balance);

       while(run) 
       {
        menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance= depositMoney(balance);
                break;
            case 3:
                balance = withdrawMoney(balance);
                break;
            case 4:
                printf("Thankyou for using ATM.\n");
                printf("Have a great day!");
            run = 0;
            break;
        default:
        printf("Invalid choice.Try again.\n");


       }

    }
    return 0;
}
// menu details
void menu()
{
    printf("\n===== ATM Menu =====\n");
    printf("Welcome. Select a service below.\n");
    printf("1. Check Balance\n");
    printf("2. Deposite Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
}

void checkBalance(float balance){
    printf("Your current balance is: Rs. %.2f\n", balance);
}
float depositMoney(float balance)
{
    float amount;
    printf("Enter amount to depoaite: Rs.");
    scanf("%f", &amount);
    if(amount <= 0) {
        printf("Invalid amount. Deposite must be more than Rs.0\n");
    } else{
        balance += amount;
        printf("Successfully deposited Rs. %.2f\n", amount);
        printf("Your new balance is: Rs. %.2f\n", balance);
    }
    return balance;
}

float withdrawMoney(float balance)
{
    float amount;
    printf("Enter amount to withdraw: Rs.");
    scanf("%f", &amount);
    if(amount <= 0)
    {
        printf("Invalid amount. Withdrawal must be more than Rs.0\n");
    }
    else if(amount > balance){
        printf("Insufficient balance. You only have Rs.%.2f\n", balance);
    }
    else{
       balance -= amount;
       printf("Successfully withdrew Rs. %.2f\n", amount);
       printf("Your new balance is: Rs. %.2f\n", balance);
    }
    return balance;
}
