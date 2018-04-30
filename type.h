#include <stdio.h>
#include <stdlib.h>

#ifndef H_TYPE
#define H_TYPE

//La struct station se décompose comme suit :
//La variable poids permet de determiner le poids final du noeud
//La variable true indique si le noeud a deja été parcouru
//La variable ant permet de connaitre le predecesseur du noeud
typedef struct station station;
struct station{
	char* nom;
	int num;
	int y; // ordonnée du point 0-25
	int poids;
	int true;
	int ant;
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
