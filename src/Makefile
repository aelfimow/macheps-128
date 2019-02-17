CFLAGS  = -O2
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -std=gnu11
CFLAGS += -g0

LDFLAGS = -lquadmath

all:
	gcc -c main.c -o main.o ${CFLAGS}
	gcc -c macheps128.c -o macheps128.o ${CFLAGS}
	gcc main.o macheps128.o -o macheps128.exe ${CFLAGS} ${LDFLAGS}
