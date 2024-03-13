CC = gcc
CFLAGS = -O0

all: main

main: main.o
	@echo "Creating $@"
	$(CC) $(CFLAGS) -o main main.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f main main.o

	