all: game

CC = g++
WARNINGS = -Wall
DEBUG = -ggdb -fno-omit-frame-pointer
OPTIMIZE =
LIBRARY = -w -lSDL2 -lSDL2_image -lSDL2_mixer


game: Makefile game.cpp
	$(CC) $(LIBRARY) -o $@ $(WARNINGS) $(DEBUG) $(OPTIMIZE) game.cpp

clean:
	rm -f game

# Builder will call this to install the application before running.
install:
	echo "Installing is not supported"

# Builder uses this target to run your application.
run:
	./game

