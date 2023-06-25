.PHONY = clean
CC = gcc
mega:
	pwd
	echo "converter o arquivo teste"
super:
	ls -la
	clear
ultra:
	cd teste/

more: 
	echo "Fazer o calculo da idade"
	pwd
cyeah: soma.c
	${CC} soma.c -o soma.o
clean:
	rm -rf *.o