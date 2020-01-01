#CROSS=arm-linux-

all: main

main: main.c
#	$(CROSS)gcc -o main main.c
	$(CROSS)cc -o main main.c
clean:
	@rm -vf main *.o *~
