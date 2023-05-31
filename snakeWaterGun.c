// Snake Water Gun Game;
// Author --> Adarsh Maurya 

// Abbreviations 
// s = 'snake';
// w = 'water';
// g = 'gun';


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int snakeWaterGun(char userChoice, char randChoice);

int main()
{   
    char welcome[] = "********Welcome to Snake Water Gun Game*******";
    printf("%s\n",welcome);
    printf("Snake = s, Water = w, Gun = g, Quit = q \n");

    do{
        char userChoice, randChoice;
        printf("Enter your choice: ");
        scanf("%c",&userChoice);

        srand(time(0));
        int number = rand()%100 +1;
        if(number < 33){
            randChoice = 's';
        }
        else if(number > 33 && number < 66){
            randChoice = 'w';
        }
        else{
            randChoice = 'g';
        }
        
        

        if(userChoice == 'q'){
            break;
        }
        else{
            int result = snakeWaterGun(userChoice, randChoice);

            if(result == 0){
                printf("Match Drawn! \n");
            }
            else if(result == 1){
                printf("You won! \n");
            }
            else{
                printf("You Lost!\n");     

            }
        }
    }
    while(1);


    return 0;
}

int snakeWaterGun(char userChoice, char randChoice){

    if( userChoice == 's' && randChoice == 's'){
        return 0;
    }
    else if( userChoice == 's' && randChoice == 'w'){
        return 1;
        // userScore ++;
    }
    else if( userChoice == 's' && randChoice == 'g'){
        return -1;
        // compScore ++;
    }
    else if( userChoice == 'w' && randChoice == 's'){
        return -1;
        // compScore ++;
    }
    else if( userChoice == 'w' && randChoice == 'w'){
        return 0;
    }
    else if( userChoice == 'w' && randChoice == 'g'){
        return 1;
        // userScore ++;
    }
    else if( userChoice == 'g' && randChoice == 's'){
        return 1;
        // userScore ++;
    }
    else if( userChoice == 'g' && randChoice == 'w'){
        return -1;
        // compScore ++;
    }
    else if( userChoice == 'g' && randChoice == 'g'){
        return 0;
    }
    

}
