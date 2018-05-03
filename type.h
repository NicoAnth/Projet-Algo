#include <stdio.h>
#include <stdlib.h>

#ifndef H_TYPE
#define H_TYPE
#define UNDEFINED -1
//La struct station se décompose comme suit :
//La variable poids permet de determiner le poids final du noeud
//La variable nbv recense le nombre de voisins
//La variable true indique si le noeud a deja été parcouru
//La variable ant permet de connaitre le predecesseur du noeud
//La variable tabvoisins correspond au tableau d'adresses des voisins
//Le nom de la piste utilisée pour arriver à cette station
typedef struct station station;
struct station{
	char* nom;
	int num;
	int nbv;
	int poids;
	int true;
	int ant;
	char nompiste[100];
	station **tabvoisins;
};

//Definition du type : 0 teleski, 1 telesiege, 2 oeuf, 3 telecabine, 4 vert, 5 bleue, 6 rouge, 7 noire
typedef struct{
	char* nom;
	int type;
	int metre;
	station noeuds[2];
}liaison;


#endif
