CC = gcc
CFLAGS = -Wall -Wextra -std=c2x
SRC = $(wildcard src/*.c)
OUT = spm

all: compile run


compile:
	$(CC) $(SRC) -o $(OUT) $(CFLAGS)
	clear

run:
	./$(OUT)
	

clean:
	rm -rf $(OUT)