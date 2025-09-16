.PHONY: build, clean

CC := gcc
FLAGS := -Wall -Wextra -pedantic
FILENAME := main

build: $(FILENAME).out

$(FILENAME).out: $(FILENAME).c
	$(CC) $< -o $@ $(FLAGS)

clean:
	rm -f *.out
