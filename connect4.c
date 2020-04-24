//
// final project: connect 4
// marissa floam
// Bridget LaBonney
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define SIZE 100
#define BLANK_BOARD char[][SIZE}

int getMenuChoice();
void printBoard(char[][SIZE]);
void updateBoard(char[][SIZE], char[], char[], int);
int checkPlayer(int);

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
  int row, col;
  printf("-----------------");
  for(row = 0; row < SIZE; row++){
    
    }

  }
  
void updateBoard(char arr[][SIZE], char player1[], char player2[], int turn){
  //prompts the user for a move, and places the players move onto the board.
  int player = checkPlayer(turn), move;
  
  if(player == 0){
    printf("%s, enter your move: ", player1);
    
  }
  if(player == 1){
    printf("%s, enter your move: ", player2);
    
  }
  scanf("%d", &move);


  }
  
int checkPlayer(int turn){
  int num = turn % 2;
  if(num == 0){
    return 1;
  }
  else{
  return 0;
  }
}
