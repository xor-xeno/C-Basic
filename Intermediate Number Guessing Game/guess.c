//***********************************CODE NUMBER GUESSING C PROGRAMMING LANGUAGE******************************************//
//***************************************************XOR XENO************************************************************//


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice;
    int guess;
    int guesses = 0;
    int answer;


    srand(time(0)); //SEED


    // Display options
    printf("Choose one of the following options:\n");
    printf("1. Normal\n");
    printf("2. Advance\n");
    printf("3. God 3\n");

    // Get user input
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Process the user's choice
    switch (choice) {
        case 1:
            printf("!!!  MODE NORMAL  !!!\n");
                 answer = (rand() % 100) + 1;

                    do
                     {
                        printf("Enter a guess from 1 to 100: ");
                        scanf("%d", &guess);
                        if(answer> guess)
                            {
                            printf("TRY BIG NUMBER !\n");
                            }
                            else if(answer<guess)
                            {
                            printf("TRY SMALL NUMBER !\n");
                            }
                            else
                            {
                            printf("Congratulations! YOU WON THE GUESSING GAME.\n");
                            }

                        guesses++;
                     } while ( answer != guess);

        break;
        case 2:
            printf("!!!  MODE ADVANCE  !!!\n");
            answer = (rand() % 1000) + 100;

                    do
                     {
                        printf("Enter a guess from 100 to 1100: ");
                        scanf("%d", &guess);
                        if(answer> guess)
                            {
                            printf("TRY BIG NUMBER !\n");
                            }
                            else if(answer<guess)
                            {
                            printf("TRY SMALL NUMBER !\n");
                            }
                            else
                            {
                            printf("Congratulations! YOU WON THE GUESSING GAME.\n");
                            }

                        guesses++;
                     } while ( answer != guess);
            break;
        case 3:
            printf("!!!  MODE GOD  !!!\n");
            answer = (rand() % 100000) + 1000;

                    do
                     {
                        printf("Enter a guess from 1000 to 101000: ");
                        scanf("%d", &guess);
                        if(answer> guess)
                            {
                            printf("TRY BIG NUMBER !\n");
                            }
                            else if(answer<guess)
                            {
                            printf("TRY SMALL NUMBER !\n");
                            }
                            else
                            {
                            printf("Congratulations! YOU WON THE GUESSING GAME.\n");
                            }

                        guesses++;
                     } while ( answer != guess);
            break;
        default:
            printf("Invalid choice. Please choose a number between 1 and 3.\n");
            break;
    }


     printf("--------------------------------------\n");
     printf("THE CORRECT NUMBER WAS %d \n",answer);
     printf("YOU TOOK %d GUESSES TO COMPLETE THE GAME\n",guesses);  
     printf("--------------------------------------\n"); 

    return 0;
}


//***********************************CODE NUMBER GUESSING C PROGRAMMING LANGUAGE******************************************//
//***************************************************XOR XENO************************************************************//
