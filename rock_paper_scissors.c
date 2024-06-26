#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int game(char your, char comp){
    if(your==comp){
        return -1;
    } else if (your=='S' && comp=='R'){
        return 0;
    } else if (your='S' && comp=='P'){
        return 1;
    } else if (your=='R' && comp =='P'){
        return 0;
    } else if (your =='R' && comp == 'S'){
        return 1;
    } else if (your =='P' && comp == 'R'){
        return 1;
    } else {
        return 0;
    }
}
int main(){
    int random_number;
    char player_move, computer_move, result;
    srand(time(NULL)); 
    random_number = rand()%100;
    if(random_number<33){
        computer_move='R';
    } else if (random_number>33 && random_number < 66){
        computer_move='P';
    } else {
        computer_move='S';
    }
    printf("Enter R for rock, p for Paper, or S for sicssors\n");
    scanf("%c", &player_move);
    printf("You chose: %c and the Computer chose: %c", player_move, computer_move);
    result = game(player_move, computer_move);
    if(result ==1){
        printf("you win!");
    } else if (result == -1){
        printf("draw!");
    } else {
        printf("you lost!");
    }
    return 0;
}

