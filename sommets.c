#include "type.h"
#include <stdio.h>
#include <stdlib.h>

station* init_sommets ()
{
	station *a = malloc(28*sizeof(station));
	
	a[0].tabvoisins = malloc(1*sizeof(station));
	a[1].tabvoisins = malloc (4*sizeof(station));
	a[2].tabvoisins = malloc (2*sizeof(station));
	a[3].tabvoisins = malloc (2*sizeof(station));
	a[4].tabvoisins = malloc (4*sizeof(station));
	a[5].tabvoisins = malloc (2*sizeof(station));
	a[6].tabvoisins = malloc (4*sizeof(station));
	a[7].tabvoisins = malloc (2*sizeof(station));
	a[8].tabvoisins = malloc (2*sizeof(station));
	a[9].tabvoisins = malloc (3*sizeof(station));
	a[10].tabvoisins = malloc (2*sizeof(station));
	a[11].tabvoisins = malloc (2*sizeof(station));
	a[12].tabvoisins = malloc (1*sizeof(station));
	a[13].tabvoisins = malloc (3*sizeof(station));
	a[14].tabvoisins = malloc (1*sizeof(station));
	a[15].tabvoisins = malloc (3*sizeof(station));
	a[16].tabvoisins = malloc (1*sizeof(station));
	a[17].tabvoisins = malloc (3*sizeof(station));
	a[18].tabvoisins = malloc (1*sizeof(station));
	a[19].tabvoisins = malloc (1*sizeof(station));
	a[20].tabvoisins = malloc (3*sizeof(station));
	a[21].tabvoisins = malloc (3*sizeof(station));
	a[22].tabvoisins = malloc (2*sizeof(station));
	a[23].tabvoisins = malloc (3*sizeof(station));
	a[24].tabvoisins = malloc (3*sizeof(station));
	a[25].tabvoisins = malloc (2*sizeof(station));
	a[26].tabvoisins = malloc (3*sizeof(station));
	
	a[0].num = 0;
	a[0].nom = "Col du Prorel";
	a[0].tabvoisins[0] = &a[1];
	a[0].nbv = 1;
	
	
	a[1].num = 1;
	a[1].nom = "i5";
	a[1].tabvoisins[0] = &a[0];
	a[1].tabvoisins[1] = &a[2];
	a[1].tabvoisins[2] = &a[3];
	a[1].tabvoisins[3] = &a[6];
	a[1].nbv = 4;
	
	
	a[2].num = 2;
	a[2].nom = "Aiguillette";
	a[2].tabvoisins[0] = &a[16];
	a[2].tabvoisins[1] = &a[19];
	a[2].nbv = 2;
	
	a[3].num = 3;
	a[3].nom = "Col de la Ricelle";
	a[3].tabvoisins[0] = &a[1];
	a[3].tabvoisins[1] = &a[5];
	a[3].nbv = 2;
	
	a[4].num = 4;
	a[4].nom = "Serre Chevalier";
	a[4].tabvoisins[0] = &a[5];
	a[4].tabvoisins[1] = &a[20];
	a[4].tabvoisins[2] = &a[21];
	a[4].tabvoisins[3] = &a[3];
	a[4].nbv = 4;
	
	a[5].num = 5;
	a[5].nom = "Grand Alpe";
	a[5].tabvoisins[0] = &a[1];
	a[5].tabvoisins[1] = &a[4];
	a[5].nbv = 2;
	
	a[6].num = 6;
	a[6].nom = "Serre Ratier";
	a[6].tabvoisins[0] = &a[4];
	a[6].tabvoisins[1] = &a[16];
	a[6].tabvoisins[2] = &a[26];
	a[6].tabvoisins[3] = &a[21];
	a[6].nbv = 4;
	
	a[7].num = 7;
	a[7].nom = "L'Eychauda";
	a[7].tabvoisins[0] = &a[22];
	a[7].tabvoisins[1] = &a[10];
	a[7].nbv = 2;
	
	a[8].num = 8;
	a[8].nom = "Clot Gauthier";
	a[8].tabvoisins[0] = &a[10];
	a[8].tabvoisins[1] = &a[23];
	a[8].nbv = 2;
	
	a[9].num = 9;
	a[9].nom = "i6";
	a[9].tabvoisins[0] = &a[10];
	a[9].tabvoisins[1] = &a[6];
	a[9].tabvoisins[2] = &a[15];
	a[9].nbv = 3;
	
	a[10].num = 10;
	a[10].nom = "i9";
	a[10].tabvoisins[0] = &a[8];
	a[10].tabvoisins[1] = &a[11];
	a[10].nbv = 2;
	
	a[11].num = 11;
	a[11].nom = "Fréjus";
	a[11].tabvoisins[0] = &a[23];
	a[11].tabvoisins[1] = &a[13];
	a[11].nbv = 2;
	
	a[12].num = 12;
	a[12].nom = "Col Méa";
	a[12].tabvoisins[0] = &a[23];
	a[12].nbv = 1;
	
	a[13].num = 13;
	a[13].nom = "Village de Fréjus";
	a[13].tabvoisins[0] = &a[17];
	a[13].tabvoisins[1] = &a[25];
	a[13].tabvoisins[2] = &a[14];
	a[13].nbv = 3;
	
	a[14].num = 14;
	a[14].nom = "Col de la Cucumelle";
	a[14].tabvoisins[0] = &a[13];
	a[14].nbv = 1;
	
	a[15].num = 15;
	a[15].nom = "Aravet";
	a[15].tabvoisins[0] = &a[17];
	a[15].tabvoisins[1] = &a[6];
	a[15].tabvoisins[2] = &a[20];
	a[15].nbv = 3;
	
	a[16].num = 16;
	a[16].nom = "Chantemerle";
	a[16].tabvoisins[0] = &a[6];
	a[16].nbv = 1;
	
	a[17].num = 17;
	a[17].nom = "Villeneuve";
	a[17].tabvoisins[0] = &a[15];
	a[17].tabvoisins[1] = &a[9];
	a[17].tabvoisins[2] = &a[11];
	a[17].nbv = 3;
	
	a[18].num = 18;
	a[18].nom = "Le Bez";
	a[18].tabvoisins[0] = &a[25];
	a[18].nbv = 1;
	
	a[19].num = 19;
	a[19].nom = "Hauteurs d'Aiguillette";
	a[19].tabvoisins[0] = &a[2];
	a[19].nbv = 1;
	
	a[20].num = 20;
	a[20].nom = "Eftanis";
	a[20].tabvoisins[0] = &a[10];
	a[20].tabvoisins[1] = &a[9];
	a[20].tabvoisins[2] = &a[26];
	a[20].nbv = 3;
	
	a[21].num = 21;
	a[21].nom = "Orée du Bois";
	a[21].tabvoisins[0] = &a[5];
	a[21].tabvoisins[1] = &a[6];
	a[21].tabvoisins[2] = &a[24];
	a[21].nbv = 3;
	
	a[22].num = 22;
	a[22].nom = "Pied Eychauda";
	a[22].tabvoisins[0] = &a[7];
	a[22].tabvoisins[0] = &a[10];
	a[22].nbv = 2;
	
	a[23].num = 23;
	a[23].nom = "Barres";
	a[23].tabvoisins[0] = &a[10];
	a[23].tabvoisins[1] = &a[11];
	a[23].tabvoisins[2] = &a[12];
	a[23].nbv = 3;
	
	a[24].num = 24;
	a[24].nom = "Marteau";
	a[24].tabvoisins[0] = &a[6];
	a[24].tabvoisins[1] = &a[15];
	a[24].tabvoisins[2] = &a[9];
	a[24].nbv = 3;
	
	a[25].num = 25;
	a[25].nom = "Prairie";
	a[25].tabvoisins[0] = &a[11];
	a[25].tabvoisins[1] = &a[18];
	a[25].nbv = 2;
	
	a[26].num = 26;
	a[26].nom = "Combes";
	a[26].tabvoisins[0] = &a[24];
	a[26].tabvoisins[1] = &a[9];
	a[26].tabvoisins[2] = &a[5];
	a[26].nbv = 3;
	
	a[27].num = 27;
	a[27].nom = "Init";
	a[27].nbv = 0;
	
	
	return a;
	
}
