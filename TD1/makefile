gestionFichiers.o: gestionFichiers.c gestionFichiers.h 
	gcc -c gestionFichiers.c

test1c.o: test1c.c gestionFichiers.h
	gcc -c test1c.c

test2b1.o: test2b1.c gestionFichiers.h
	gcc -c test2b1.c

test2b2.o: test2b2.c gestionFichiers.h
	gcc -c test2b2.c

test2b3.o: test2b3.c gestionFichiers.h
	gcc -c test2b3.c

test2b4.o: test2b4.c gestionFichiers.h
	gcc -c test2b4.c

test2b5.o: test2b5.c gestionFichiers.h
	gcc -c test2b5.c

test1: test1c.o gestionFichiers.o
	gcc test1c.o gestionFichiers.o -o test1

test2b1: test2b1.o gestionFichiers.o
	gcc test2b1.o gestionFichiers.o -o test2b1

test2b2: test2b2.o gestionFichiers.o
	gcc test2b2.o gestionFichiers.o -o test2b2

test2b3: test2b3.o gestionFichiers.o
	gcc test2b3.o gestionFichiers.o -o test2b3

test2b4: test2b4.o gestionFichiers.o
	gcc test2b4.o gestionFichiers.o -o test2b4

test2b5: test2b5.o gestionFichiers.o
	gcc test2b5.o gestionFichiers.o -o test2b5