#include <stdio.h>
#include <stdlib.h>

#ifndef H_TYPE
#define H_TYPE

typedef struct station station;
struct station{
	char* nom;
	int num;
	int y; // ordonnée du point 0-25
	station *tabvoisins;
};

//Definition du type : 0 teleski, 1 telesiege, 2 oeuf, 3 telecabine, 4 vert, 5 bleue, 6 rouge, 7 noire
typedef struct{
	char* nom;
	int type;
	int metre;
	station noeuds[2];
}liaison;

#endif
