//
// final project: connect 4
// marissa floam
// Bridget LaBonney
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define SIZE 100

int getMenuChoice();
void printBoard(char[][SIZE]);
void updateBoard(char[][SIZE]);
int checkPlayer();

int main(){
  int option;
  do{
  option = getMenuChoice();
  switch(option){
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    default:
        printf("Please enter a valid option!\n");
      break;
    }
  }
    while(option != 0);
  return 0;
}

int getMenuChoice(){
  int input;
  printf("***CONNECT 4***\n");
  printf("1. Play Game\n2. Show Scores\n 0. EXIT\n");
  printf("Enter your choice: ");
  scanf("%d", &input);
         return input;
  }
  
void printBoard(char arr[][SIZE]){
  // simply prints out the board to the screen.
  }
  
void updateBoard(char arr[][SIZE]){
  //prompts the user for a move, and places the players move onto the board.
  int player, move;
  
  }
 
int checkPlayer(){
  //checks which player's turn it is and returns a 0 or 1.
  return 0;
}
