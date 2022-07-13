yuki: yuki.o gasto.o
	gcc -o yuki yuki.c gasto.c 

yuki.o: yuki.c gasto.h
	gcc -c yuki.c

gasto.o: gasto.c gasto.h
	gcc -c gasto.c
