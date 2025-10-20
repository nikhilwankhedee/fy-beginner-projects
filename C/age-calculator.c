#include  <stdio.h>

int main() {
    int a,b,c;
    printf("\nEnter Your Birth Year: ");
    scanf("%d",&a);
    printf("\n Enter The Current Year: ");
    scanf("%d",&b);
    c = b-a;
    printf("Your Age Is:%d\n", c);

    //Using If-Else statements to print various messages based on user's age.
    if (c>=18) {
    printf("Congrats! You are eligible for following:\n");
    printf("\nVoting\nAlcohol\nDating\n");
    }
    else {
        printf("\nGrow up pretty soon!");
    }
    if (c<10) {
        printf("\nYou are just a kid!, don't use internet.");
    }
}