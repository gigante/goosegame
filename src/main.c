#include <stdio.h>
#include <stdlib.h>
#include "libmenu.h"
#include "gamecore.h"
#include "utils.h"

int main() {
    int menuStatus;
    do {
        menuStatus = menuInicial();
        if (menuStatus == 1) { //Start Game
            initGame();
        }
        else if (menuStatus == 2) { //Show Game Rules
            menuRegras();
        }
        else if (menuStatus == 3) { //Show Credits
            menuCreditos();
        }
    } while (menuStatus >= 1 && menuStatus <= 3);

    printf("Bye!");
    return 0;
}