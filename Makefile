CC = gcc
CFLAGS = -Wall -Wextra -std=c2x
SRC = $(wildcard src/*.c)
INCLUDE = include
OUT = spm


all: compile run


compile:
	$(CC) $(SRC) -o $(OUT) -I $(INCLUDE) $(CFLAGS)
	clear

run:
	./$(OUT)
	

clean:
	rm -rf $(OUT)