#Edition des liens

all: Main.o sommets.o aretes.o getinfo.o Dijkstra.o
	gcc sommets.o aretes.o getinfo.o Dijkstra.o Main.o -o Projet

test: all
	./Projet

#Compilation

Main.o: Main.c type.h sommets.h aretes.h getinfo.h Dijkstra.h
	gcc -c -g -Wall Main.c -o Main.o 

aretes.o: aretes.c type.h
	gcc -c -g -Wall aretes.c -o aretes.o

sommets.o: sommets.c sommets.h type.h
	gcc -c -g -Wall sommets.c -o sommets.o

getinfo.o: getinfo.c sommets.h
	gcc -c -g -Wall getinfo.c -o getinfo.o

Dijkstra.o: Dijkstra.c type.h sommets.h aretes.h getinfo.h
	gcc -c -g -Wall Dijkstra.c -o Dijkstra.o

clean: 
	rm -rf *.o

mrproper: clean
	rm -rf Projet


