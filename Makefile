# Specifies files to compile as part of the project
OBJS = init.c draw.c input.c main.c

# C++ compiler we are using
CC = g++

# Display all warning messages
COMPILER_FLAGS = -Wall

# Specifies the libraries we are linking against
LINKER_FLAGS = -lSDL2

# Name of final executable
OBJ_NAME = game

all: $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)

clean:
	echo "Cleaned up!"
