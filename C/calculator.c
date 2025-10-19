//Importing Header File, the STDIO stands for Standard Input Output
#include <stdio.h>

int main() {
    //defining variables using data types.
    int a,b,sum,rem;
    char choice;

    //using printf function to display the output.
    printf("Thanks for using Calculator!\n");
    printf("What Type of Operation You Want to Perform Today?\n");
    printf("Press 1 for Addition(a+b)\n");
    printf("Press 2 for Substraction(a-b)\n");
    printf("Press 3 for Division(a/b)\n");
    printf("Press 4 for Multiplication(aXb)\n");

    //using scanf to take input
    scanf("%c", &choice);

    //Using switchcase and if-else to define logic and print various type of outputs based on the inputs given.
    switch (choice) {
        case ('1'): {
            printf("Enter A Number: ");
            scanf("%d",&a);
            printf("Enter B Number: ");
            scanf("%d",&b);
            sum=a+b;
            printf("\nThe Addition of given numbers is:%d", sum);
            break;

        }

        case ('2'): {
            printf("Enter A Number: ");
            scanf("%d",&a);
            printf("Enter B Number: ");
            scanf("%d",&b);
            sum=a-b;
            printf("\nThe Substraction of given numbers is:%d", sum);
            break;

        }

        case ('3'): {
            printf("Enter A Number: ");
            scanf("%d",&a);
            printf("Enter B Number: ");
            scanf("%d",&b);
            sum=a/b;
            rem=a%b;
            printf("\nThe Division of given numbers is:%d", sum);
            printf("\nThe Remainder is:%d", rem);
            break;

        }
        case ('4'): {
            printf("Enter A Number: ");
            scanf("%d",&a);
            printf("Enter B Number: ");
            scanf("%d",&b);
            sum=a*b;
            printf("\nThe Multiplication of given numbers is:%d", sum);
            break;

        }
    }
    }
