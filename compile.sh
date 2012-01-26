#!/bin/bash

if [ ! -d "./bin" ]; then
    mkdir bin # create folder to the binary
fi

if [ ! -e "./bin/goosegame" ]; then
	gcc ./source/main.c -o ./bin/goosegame # compiles the source code
fi

if [ -e "./goosegame" ]; then
	rm ./goosegame # remove link if exists
fi

ln -s ./bin/goosegame # create symbolic link to the game
chmod +x ./goosegame # grant execute permission for the game