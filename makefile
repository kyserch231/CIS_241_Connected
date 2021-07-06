CC = clang
CFLAGS = -O2

.PHONY: clean

dice: dice.o diceroll.o
	$(CC) $(CFLAGS) -o dice dice.o diceroll.o

dice.o: dice.c
	$(CC) $(CFLAGS) -c dice.c

diceroll.o: diceroll.c
	$(CC) $(CFLAGS) -c diceroll.c

clean:
	rm *.o dice

