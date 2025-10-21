#include <stdio.h>

int main() {
    int start,end,option, choice_type;

    printf("\n This program will print all even and odd numbers between the given range in a table format.\n");
    //Input range
    printf("Please Enter Starting Number:\n ");
    scanf("%d",&start);
    printf("\n Please Enter Ending Number: ");
    scanf("%d",&end);

    //Even or Odd Choice
    printf("\nEnter 1 for EVEN numbers\n");
    printf("Enter 2 for ODD numbers\n");
    printf("Your Choice: ");
    scanf("%d",&choice_type);

    // Loop explanation
    printf("\nEnter 1 to use For Loop - Runs a fixed number of times (best for counting)\n");
    printf("Enter 2 to use While Loop - Checks condition before run\n");
    printf("Enter 3 to use Do-While Loop - Runs once even if condition is false (checks after running)\n");

    printf("Your choice: ");
    scanf("%d", &option);

    int count = 0, num;
    int numbers_per_row = 5;
    int row_counter = 0;

    // Mini animation
    printf("\nProcessing your numbers");
    for(int i=0; i<5; i++){
        printf(".");
        for(long j=0; j<100000000; j++); // fake delay
    }
    printf("\n\nNumbers between %d and %d:\n", start, end);

    // Table header
    for(int i=0; i<numbers_per_row; i++){
        printf("+------");
    }
    printf("+\n");

    switch(option){
        case 1: // FOR LOOP
            printf("\nUsing FOR LOOP\n");
            for(num=start; num<=end; num++){
                if((choice_type==1 && num%2==0) || (choice_type==2 && num%2!=0)){
                    printf("| %4d ", num);
                    count++;
                    row_counter++;
                    for(long d=0; d<40000000; d++); // animation delay
                    if(row_counter == numbers_per_row){
                        printf("|\n");
                        for(int i=0; i<numbers_per_row; i++){
                            printf("+------");
                        }
                        printf("+\n");
                        row_counter=0;
                    }
                }
            }
            break;

        case 2: // WHILE LOOP
            printf("\nUsing WHILE LOOP\n");
            num=start;
            while(num<=end){
                if((choice_type==1 && num%2==0) || (choice_type==2 && num%2!=0)){
                    printf("| %4d ", num);
                    count++;
                    row_counter++;
                    for(long d=0; d<40000000; d++);
                    if(row_counter==numbers_per_row){
                        printf("|\n");
                        for(int i=0; i<numbers_per_row; i++){
                            printf("+------");
                        }
                        printf("+\n");
                        row_counter=0;
                    }
                }
                num++;
            }
            break;

        case 3: // DO-WHILE LOOP
            printf("\nUsing DO-WHILE LOOP\n");
            num=start;
            if(num<=end){
                do{
                    if((choice_type==1 && num%2==0) || (choice_type==2 && num%2!=0)){
                        printf("| %4d ", num);
                        count++;
                        row_counter++;
                        for(long d=0; d<40000000; d++);
                        if(row_counter==numbers_per_row){
                            printf("|\n");
                            for(int i=0; i<numbers_per_row; i++){
                                printf("+------");
                            }
                            printf("+\n");
                            row_counter=0;
                        }
                    }
                    num++;
                }while(num<=end);
            }
            break;

        default:
            printf("Invalid choice.\n");
            return 0;
    }

    // Close last incomplete row
    if(row_counter!=0){
        for(int i=row_counter; i<numbers_per_row; i++){
            printf("|      ");
        }
        printf("|\n");
        for(int i=0; i<numbers_per_row; i++){
            printf("+------");
        }
        printf("+\n");
    }

    printf("\nTotal numbers found: %d\n", count);
    printf("\nThanks for exploring loops!\n");

    return 0;
}