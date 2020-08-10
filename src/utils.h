#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED

/*
  Library which brings together the main functions and structures
   that can be reused in the project
*/

#include <time.h>  //the standard C Library
#define TAMANHO_MAPA_1 39 //Define Map 1 size: 0-39 (40 tracks)
#define TAMANHO_MAPA_2 33 //Defone Map 2 size: 0-33 (34 tracks)

//Struct to manipulate the player entity
typedef struct Jogador{
  char nome[30];
  int posicao;
} Jogador;

/*
  this method clear the terminal
  call the "clear" function of system (*nix)
  In Windows OS is 'cls'
*/
void limpaTela(){
#if defined(__linux__)
  system("clear");
#else
  system("cls");
#endif
}

/*
  Generate a random number between 1 and valor_max
*/
int geraAleatorio(int valor_max){
  int aleatorio;
  srand(time(NULL));
  aleatorio = rand()%valor_max;
  if(aleatorio==0) {
    aleatorio = 1;
  }
  return aleatorio;
}

/*
This method calculates the position of the player
If it is greater than the track size, the excess will be subtracted
*/
int calculaPosicaoMapa(int pos, int tamanho){
  if(pos>tamanho){
    int excesso = pos - tamanho;
    pos = tamanho - excesso;
  }
  return pos;
}

/*
  Returns the size of the map passed as a parameter
*/
int tamanhoMapa(int mapa){
  int tamanho;
  switch(mapa){
    case 1:
      tamanho = TAMANHO_MAPA_1+1;
      break;
    case 2:
      tamanho = TAMANHO_MAPA_2+1;
      break;
  }
  return tamanho;
}

#endif // UTILS_H_INCLUDED
