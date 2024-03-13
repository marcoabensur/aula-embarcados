CC = gcc
CFLAGS = -O0

all: main.bin

main.bin: main.o
	@echo "Creating $@"
	$(CC) $(CFLAGS) -o main.bin main.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f main.bin main.o

	