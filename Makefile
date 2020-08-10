.PHONY: run build play test

run: build play

build:
	@gcc ./src/main.c -o ./goosegame

play:
	@./goosegame

test:
	@cppcheck --enable=all --suppress=missingIncludeSystem ./src