#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int play_again = 1;
    // random number gen
    srand(time(NULL));
    while (play_again == 1)
    {

        printf("\t WELCOME THE GAME OF ROCK PAPER AND SCISSORS \t\t\n\n");
        printf("\t IT IS GOING TO BE A THREE ROUND GAME  \t\t\n\n");

        int user_hand, tyson_hand, user_score = 0, tyson_score = 0;
        for (int i = 0; i < 3; i++)
        {
            printf("==============================================================================================================================\n\n");
            printf("##############  ROUND %d HAS STARTED \n\n", i + 1);
            // user hand

            do
            {
                printf("\t ENTER THE NUMBER OF THE HAND YOU WANT TO PLAY \t\t\n\n");
                printf("Enter 1 for Rock, 2 for Paper, 3 for Scissors\n");

                scanf("%d", &user_hand);
                if (user_hand < 1 || user_hand > 3)
                {

                    printf("\n\t CHOOSE A CORRECT HAND BY SELECTING --------->\n 1 for Rock\n 2 for Paper\n 3 for Scissors\n\n");
                }

            } while (user_hand < 1 || user_hand > 3);


            if (user_hand == 1)
            {
                printf("YOU HAVE CHOSEN -------->\t ROCK \n");
            }
            else if (user_hand == 2)
            {
                printf("YOU HAVE CHOSEN -------->\t PAPER \n");
            }
            else if (user_hand == 3)
            {
                printf("YOU HAVE CHOSEN -------->\t SCISSORS \n");
            }

            // tysons hand

            tyson_hand = (rand() % 3) + 1;

            if (tyson_hand == 1)
            {
                printf("TYSON HAVE CHOSEN -------->\t ROCK \n\n");
            }
            else if (tyson_hand == 2)
            {
                printf("TYSON HAVE CHOSEN -------->\t PAPER \n\n");
            }
            else if (tyson_hand == 3)
            {
                printf("TYSON HAVE CHOSEN -------->\t SCISSORS \n\n");
            }

            // condition

            if (user_hand == tyson_hand)
            {
                printf("------------->>> IT IS A DRAW \n\n");
            }

            else if (user_hand == 1 && tyson_hand == 3)
            {
                printf("------------->>> CONGRATULATIONS YOU WON ROUND %d \n\n", i + 1);
                user_score++;
            }
            else if (user_hand == 2 && tyson_hand == 1)
            {
                printf("------------->>> CONGRATULATIONS YOU WON ROUND %d\n\n", i + 1);
                user_score++;
            }
            else if (user_hand == 3 && tyson_hand == 2)
            {
                printf("------------->>> CONGRATULATIONS YOU WON ROUND %d\n\n", i + 1);
                user_score++;
            }
            else
            {
                printf("------------->>> TYSON WON ROUND %d\n\n", i + 1);
                tyson_score++;
            }
            printf("\nCURRENT SCORE -----> USER :%d\n\t\t     TYSON:%d\n \n", user_score, tyson_score);
        }

        printf("\tTHE GAME HAS ENDED AND\n\n");
        if (user_score == tyson_score)
        {
            printf("\tIT IS A DRAW");
        }
        else if (user_score > tyson_score)
        {
            printf("------------->>>CONGRATULATIONS YOU WON THE GAME\n\n ");
        }
        if (user_score < tyson_score)
        {
            printf("------------->>> TYSON WON THE GAME HAHA\n\n");
        }
        
        printf("\tDO YOU WANT TO PLAY AGAIN ?\n\n");
        printf("\tPRESS 1 TO PLAY AGAIN AND 0 TO EXIT \n");
        scanf("%d",&play_again);
        
        if (play_again==0){
            printf("\tTHANKS FOR PLAYING \n");

        }

    }
    return 0;
}