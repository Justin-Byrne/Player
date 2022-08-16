# CONSTANTS
## Directories
SRC=src
INC=include

## General
CC=g++
C_FLAGS=-c
DEPS=Main.o ATTRIBUTES.o CHARACTER.o

## Output
O_LOCAT=bin/release/
O_FLAGS=-o
O_FILE=Player

# CONDITIONALS
ifeq ($(OS),Windows_NT)
	CLEAN=del *.o
else
	CLEAN=rm -f *.o
endif

# COMMANDS
linux: $(DEPS)
	$(CC) $(DEPS) $(O_FLAGS) $(O_LOCAT)$(O_FILE).sh

win32: $(DEPS)
	$(CC) $(DEPS) $(O_FLAGS) $(O_LOCAT)$(O_FILE).exe

main.o: Main.cpp
	$(CC) $(C_FLAGS) Main.cpp

ATTRIBUTES.o: $(SRC)/ATTRIBUTES.cpp $(INC)/ATTRIBUTES.h
	$(CC) $(C_FLAGS) $(SRC)/ATTRIBUTES.cpp

CHARACTER.o: $(SRC)/CHARACTER.cpp $(INC)/CHARACTER.h
	$(CC) $(C_FLAGS) $(SRC)/CHARACTER.cpp

clean:
	$(CLEAN)