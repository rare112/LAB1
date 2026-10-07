all: stringmain.c stringfunc.c stringfunc.h
	gcc -o string stringmain.c stringfunc.c

stepwise: stringmain.o stringfunc.o stringfunc.h 
	gcc -o string stringmain.o stringfunc.o stringfunc.h 
 
stringmain.o: stringmain.c 
	gcc -c stringmain.c 
 
stringfunc.o: stringfunc.c stringfunc.h 
	gcc -c stringfunc.c stringfunc.h 
 
clean: 
	rm -rf *.o