//
// final project: connect 4
// marissa floam
// Bridget LaBonney
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define COL 21
#define ROW 18


int getMenuChoice();
void printBoard(char[][COL]);
void updateBoard(char[][COL], char[], char[], int);
int checkPlayer(int);

int main(){
  int option, turn = 0;
  char arr[ROW][COL] = {"[ ][ ][ ][ ][ ][ ][ ]","[ ][ ][ ][ ][ ][ ][ ]", "[ ][ ][ ][ ][ ][ ][ ]","[ ][ ][ ][ ][ ][ ][ ]","[ ][ ][ ][ ][ ][ ][ ]","[ ][ ][ ][ ][ ][ ][ ]"};
  FILE* fp;
  
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
  printf("---------------------\n");
  printf("[1][2][3][4][5][6][7]\n");
  printf("---------------------\n");
  for(row = 0; row < 6; row++){
    for(col = 0; col < COL; col++){
      printf("%c", arr[row][col]);
    }
  printf("\n");
    }
  printf("[1][2][3][4][5][6][7]\n");
  printf("---------------------\n\n");
  }
  
void updateBoard(char arr[][COL], char player1[], char player2[], int turn){
  //prompts the user for a move, and places the players move onto the board.
  int player = checkPlayer(turn), move;
  char a;

  if(player == 0){
    printf("%s - Enter your move: ", player1);
    a = 'X';
  }
  if(player == 1){
    printf("%s - Enter your move: ", player2);
    a = 'O';
  }
  scanf("%d", &move);
  int col;
  switch(move){
    case 1:
      col = 1;
      break;
    case 2:
      col = 4;
     break;
    case 3:
     col = 7;
      break;
    case 4:
      col = 10;
      break;
    case 5:
      col = 13;
      break;
    case 6:
      col = 16;
      break;
    case 7:
      col = 19;
      break;
    default:
      break;
  }
  //please dont mind the nasty in this one. its the only way I can do this lmao

  for(int i = ROW; i != -1; i--){
    if(arr[i][col] == ' '){
      arr[i][col] = a;
      break;
    }
  }
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

void playerNames(char player1[], char player2[]){
   printf("Player 1, please enter your name: ");
   scanf("%s", player1);
   printf("Player 2, please enter your name: ");
   scanf("%s", player2);
}

void getScores(FILE* file, int result, char player1[], char player2[]){
  //opens file for writing, based on the result from playGame prints a name and # of games won to the file
  int games = 1;
  file = fopen(FILE_NAME, "w");
  if(file == NULL){
     printf("File could not be found.\n");
  }
  else{
    if(result == 0){
        fprintf(file, "%s %d\n", a, games);
    }
    else if(result == 1){
      fprintf(file, "%s %d\n", b, games);
    }
    //gotta increment somewhere if the name is already in the file, working on it
  }
}

void showScores(FILE* file){
  //opens file for reading, should scan for names and scores and print them out in order of wins
  char name[MAX];
  char test;
  int wins;
  file = fopen(FILE_NAME, "r");
  if(file == NULL){
    printf("File could not be found.\n");
  }
  else{
    printf("**HIGH SCORES**\n");
    while(!feof(file)){
      fscanf(file, "%s %d\n", &name, &wins);
      //gotta implement order by number of wins here
      printf("%s: %d", name, wins);
    }
  }
     
