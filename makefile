#! /bin/bash

LinkList:main.o mainmenu.o display.o init.o insertLL.o insertValueLL.o deleteLL.o reverseLL.o createLL.o  findLengthLL.o
	gcc -o LinkList main.o mainmenu.o display.o init.o insertLL.o insertValueLL.o deleteLL.o reverseLL.o createLL.o  findLengthLL.o 

main.o:main.c headers.h declarations.h
	gcc -c main.c
mainmenu.o:mainmenu.c headers.h declarations.h
	gcc -c mainmenu.c
display.o:display.c headers.h declarations.h
	gcc -c display.c
init.o:init.c headers.h declarations.h
	gcc -c init.c
insertLL.o:insertLL.c headers.h declarations.h
	gcc -c insertLL.c
insertValueLL.o:insertValueLL.c headers.h declarations.h
	gcc -c insertValueLL.c
deleteLL.o:deleteLL.c headers.h declarations.h
	gcc -c deleteLL.c
reverseLL.o:reverseLL.c headers.h declarations.h
	gcc -c reverseLL.c
createLL.o:createLL.c headers.h declarations.h
	gcc -c createLL.c
findLengthLL.o:findLengthLL.c headers.h declarations.h
	gcc -c findLengthLL.c

clean:
	rm *.o
	rm LinkList
