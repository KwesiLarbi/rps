/* 
    * #TODO: Inform Users that they have started up rock! paper! scissors!
    *        - Also inform the users of the rules of the game. 
    * #TODO: Take user inputs, user inputs must be: rock, paper, scissors
    *        - Output WARNING message if not rps
    *        - User input must be outputted to the console to show their choice
    * #TODO: Create functionality for randomly generated rps from cpu
    *        - Compare CPU answer vs User answer and decide winner
    * #TODO: Keep track of User and CPU score while program is running
    *        - When program is terminated compare total scores and decide overall winner
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE_U1 30

int main()
{
    /* User enters name to be greeted */
    char u1[BUFFER_SIZE_U1];
    char ready;
    
    printf("Please enter your name: \n");
    if (fgets(u1, sizeof(u1), stdin) == NULL) {
        printf("Failed to read the input stream!");
    }
    else {
        u1[strcspn(u1, "\n")] = '\0';
    }

    printf("\n\nHello %s, and welcome to Rock! Paper! Scissors!\n\n", u1);
    printf("Rules of RPS:\n");
    printf("\t* Only options are rock(r), paper(p), and scissors(s)\n");
    printf("\t* CPU will randomly generate r, p, or s");
    printf("\t* Winning conditions are rock > scissors, scissors > paper, paper > rock\n");
    printf("\t* After each round a score will be kept and displayed\n");
    printf("\t* When program is exited an overall winner be declared based on point totals\n\n");

    printf("Are you ready? [y | n]: \n");
    if ((ready = getchar()) != 'y') {
        printf("Okay bye bye!\n");
        exit(1);
    }

    // TODO: Create while loop with switch statement
    printf("\nRock? Paper? Scissors? [r | p | s]\n");

    return 0;
}