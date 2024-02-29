# Makefile for opening and cleaning the project

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra

# Source files
SRC = main.c

# Object files
OBJ = $(SRC:.c=.o)

# Executable
TARGET = main

# Default target
all: $(TARGET)

# Compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Link object files into executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

# Clean the project
clean:
	rm -f $(OBJ) $(TARGET)
