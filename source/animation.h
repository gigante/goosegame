#ifndef ANIMATION_H_INCLUDED
#define ANIMATION_H_INCLUDED

#include <time.h> //the standard C Library

/*
  This Method prints the screen frame passed as parameter
*/

void printFrameAnimation(int frame){
  switch (frame)
  {
  	case 1:
  	  printf("   o   \n");
      printf("  /|\\  \n");
      printf("  / \\  \n");
  		break;
    case 2:
      printf("       \\ o /  \n");
      printf("         |    \n");
      printf("        / \\   \n");
  		break;
    case 3:
      printf("              _ o  \n");
      printf("               /\\  \n");
      printf("              | \\  \n");
  		break;
    case 4:
      printf("                         \n");
      printf("                    __\\o \n");
      printf("                   /) |  \n");
  		break;
    case 5:
      printf("                         __|    \n");
      printf("                           \\o   \n");
      printf("                           ( \\  \n");
  		break;
    case 6:
      printf("                                \\ /  \n");
      printf("                                 |   \n");
      printf("                                /o\\  \n");
  		break;
    case 7:
      printf("                                       |__  \n");
      printf("                                      o/    \n");
      printf("                                     / )    \n");
  		break;
    case 8:
      printf("                                                  \n");
      printf("                                            o/__  \n");
      printf("                                            |  (\\ \n");
  		break;
    case 9:
      printf("                                                   o _  \n");
      printf("                                                   /\\   \n");
      printf("                                                   / |  \n");
  		break;
    case 10:
      printf("                                                        \\ o / | \n");
      printf("                                                          |   | YOU WIN!\n");
      printf("                                                         / \\  |\n");
  		break;
  }
}

/*
  This Method prints animation on the screen And shows winner name passed as parameter
  PS.: The Struct Jogador is located into header file ./utils.h
*/
void initAnimationWinner(Jogador jogador){
  int i;
  for (i=1; i<=10; i++){
    limpaTela();
    printf("\n");
  	printFrameAnimation(i);
  	sleep(1);
  }
  printf("\n");
  printf("Congratulations %s, you win the Goose Game!!\n\n", jogador.nome);
  menuContinuar();
}

#endif // ANIMATION_H_INCLUDED
