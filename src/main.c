#include <stdio.h>
#include <stdlib.h>
#include "libmenu.h"
#include "gamecore.h"
#include "utils.h"

int main() {
    int menuStatus = menuInicial();
    while (menuStatus >= 1 && menuStatus <= 3) {
        switch (menuStatus) {
        case 1:
            initGame(); break;
        case 2:
            menuRegras(); break;
        case 3:
            menuCreditos(); break;
        }
        menuStatus = menuInicial();
    };

    printf("Bye!");
    return 0;
}