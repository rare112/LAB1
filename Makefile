all: sizesmain.c sizesfunc.c sizesfunc.h
	gcc -o sizes sizesmain.c sizesfunc.c

stepwise: sizesmain.o sizesfunc.o sizesfunc.h 
	gcc -o sizes sizesmain.o sizesfunc.o sizesfunc.h 
 
sizesmain.o: sizesmain.c 
	gcc -c sizesmain.c 
 
sizesfunc.o: sizesfunc.c sizesfunc.h 
	gcc -c sizesfunc.c sizesfunc.h 
 
clean: 
	rm -rf *.o