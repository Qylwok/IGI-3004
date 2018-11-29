exo1.o: exo1.c exo1.h
	gcc -c exo1.c

test1B1.o: test1B1.c exo1.h
	gcc -c test1B1.c

test1B2.o: test1B2.c exo1.h
	gcc -c test1B2.c

test1B3.o: test1B3.c exo1.h
	gcc -c test1B3.c

test1B1: test1B1.o exo1.o
	gcc test1B1.o  exo1.o -o test1B1

test1B2: test1B2.o exo1.o
	gcc test1B2.o  exo1.o -o test1B2

test1B3: test1B3.o exo1.o
	gcc test1B3.o  exo1.o -o test1B3

##########################

exo2.o: exo2.c exo1.h
	gcc -c exo2.c

exo2: exo2.o exo1.o
	gcc exo2.o exo1.o -o exo2

##########################

gestionFichiers.o: gestionFichiers.c gestionFichiers.h
	gcc -c gestionFichiers.c


testIII1.o: testIII1.c gestionFichiers.h exo1.h
	gcc -c testIII1.c

testIII1: testIII1.o gestionFichiers.o exo1.o
	gcc testIII1.o gestionFichiers.o exo1.o -o testIII1


testIII2.o: testIII2.c gestionFichiers.h exo1.h
	gcc -c testIII2.c

testIII2: testIII2.o gestionFichiers.o exo1.o
	gcc testIII2.o gestionFichiers.o exo1.o -o testIII2


testIII3.o: testIII3.c gestionFichiers.h exo1.h
	gcc -c testIII3.c

testIII3: testIII3.o gestionFichiers.o exo1.o
	gcc testIII3.o gestionFichiers.o exo1.o -o testIII3