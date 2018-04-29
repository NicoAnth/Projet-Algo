#include "type.h"
#include <stdio.h>
#include <stdlib.h>

liaison *init_aretes(station *s){
	
	liaison *l = malloc(66*sizeof(liaison));
	
	l[0].nom = "Bois des Coqs";
	l[0].type = 0;
	l[0].metre = 2850;
	l[0].noeuds[0] = s[1];
	l[0].noeuds[1] = s[3];
	
	l[1].nom = "Eychauda";
	l[1].type = 0;
	l[1].metre =1650;
	l[1].noeuds[0] = s[22];
	l[1].noeuds[1] = s[7];
	
	l[2].nom = "Pré Du Bois";
	l[2].type = 0;
	l[2].metre = 1575;
	l[2].noeuds[0] = s[11];
	l[2].noeuds[1] = s[9];
	
	l[3].nom = "Crête";
	l[3].type = 0;
	l[3].metre = 1875;
	l[3].noeuds[0] = s[11];
	l[3].noeuds[1] = s[23];
	
	l[4].nom = "Méa Clot";
	l[4].type = 0;
	l[4].metre =1425;
	l[4].noeuds[0] = s[23];
	l[4].noeuds[1] = s[12];

	l[5].nom = "Alpage";
	l[5].type = 0;
	l[5].metre = 1050;
	l[5].noeuds[0] = s[24];
	l[5].noeuds[1] = s[9];	
	
	l[6].nom = "Barres";
	l[6].type = 0;
	l[6].metre = 2025;
	l[6].noeuds[0] = s[11];
	l[6].noeuds[1] = s[23];
	
	//telesiège
	
	l[7].nom = "Aiguilette";
	l[7].type = 1;
	l[7].metre = 3750;
	l[7].noeuds[0] = s[2];
	l[7].noeuds[1] = s[19];
	
	l[8].nom = "Prorel";
	l[8].type = 1;
	l[8].metre = 3900;
	l[8].noeuds[0] = s[1];
	l[8].noeuds[1] = s[0];
	
	l[9].nom = "Grand Serre";
	l[9].type = 1;
	l[9].metre = 2700;
	l[9].noeuds[0] = s[5];
	l[9].noeuds[1] = s[4];
	
	l[10].nom = "Combes";
	l[10].type = 1;
	l[10].metre = 3900;
	l[10].noeuds[0] = s[6];
	l[10].noeuds[1] = s[4];
	
	l[11].nom = "Orée du Bois";
	l[11].type = 1;
	l[11].metre = 2700;
	l[11].noeuds[0] = s[6];
	l[11].noeuds[1] = s[21];
	
	l[12].nom = "Clot Gauthier";
	l[12].type = 1;
	l[12].metre = 2025;
	l[12].noeuds[0] = s[10];
	l[12].noeuds[1] = s[8];
	
	l[13].nom = "Bletonnet";
	l[13].type = 1;
	l[13].metre = 2850;
	l[13].noeuds[0] = s[16];
	l[13].noeuds[1] = s[6];
	
	l[15].nom = "Casse du Boeuf";
	l[15].type = 1;
	l[15].metre = 4650;
	l[15].noeuds[0] = s[17];
	l[15].noeuds[1] = s[9];
	
	l[16].nom = "Frejus";
	l[16].type = 1;
	l[16].metre = 1800;
	l[16].noeuds[0] = s[25];
	l[16].noeuds[1] = s[11];
	
	l[17].nom = "Côte de Chevalier";
	l[17].type = 1;
	l[17].metre = 2400;
	l[17].noeuds[0] = s[11];
	l[17].noeuds[1] = s[20];
	
	l[16].nom = "Vallons";
	l[16].type = 1;
	l[16].metre = 4650;
	l[16].noeuds[0] = s[13];
	l[16].noeuds[1] = s[14];
	
	l[16].nom = "Forêt";
	l[16].type = 1;
	l[16].metre = 2850;
	l[16].noeuds[0] = s[15];
	l[16].noeuds[1] = s[20];
	
	//oeufs
	 
	l[17].nom = "Ratier";
	l[17].type = 2;
	l[17].metre = 2850;
	l[17].noeuds[0] = s[16];
	l[17].noeuds[1] = s[6];
	
	l[18].nom = "Aravet";
	l[18].type = 2;
	l[18].metre = 3150;
	l[18].noeuds[0] = s[17];
	l[18].noeuds[1] = s[15];
	
	l[18].nom = "Frejus";
	l[18].type = 2;
	l[18].metre = 3600;
	l[18].noeuds[0] = s[17];
	l[18].noeuds[1] = s[11];
	
	//tele cabines
	
	l[19].nom = "Serre-Chevalier";
	l[19].type = 3;
	l[19].metre = 4650;
	l[19].noeuds[0] = s[6];
	l[19].noeuds[1] = s[4];
	
	l[20].nom = "Pontillas";
	l[20].type = 3;
	l[20].metre = 3150;
	l[20].noeuds[0] = s[18];
	l[20].noeuds[1] = s[25];
	
	// Pistes vertes
	
	l[21].nom = "Lièvre Blanc";
	l[21].type = 4;
	l[21].metre = 1650;
	l[21].noeuds[0] = s[8];
	l[21].noeuds[1] = s[3];
	
	l[21].nom = "Route Aravet";
	l[21].type = 4;
	l[21].metre = 7950;
	l[21].noeuds[0] = s[15];
	l[21].noeuds[1] = s[17];
	
	l[22].nom = "Briance";
	l[22].type = 4;
	l[22].metre = 10650;
	l[22].noeuds[0] = s[6];
	l[22].noeuds[1] = s[16];
	
	l[21].nom = "Chêne";
	l[21].type = 4;
	l[21].metre = 5500;
	l[21].noeuds[0] = s[6];
	l[21].noeuds[1] = s[17];
	
	l[22].nom = "Route Fréjus";
	l[22].type = 4;
	l[22].metre = 7800;
	l[22].noeuds[0] = s[13];
	l[22].noeuds[1] = s[17];
	
	l[21].nom = "Barres";
	l[21].type = 4;
	l[21].metre = 1800;
	l[21].noeuds[0] = s[23];
	l[21].noeuds[1] = s[11];
	
	l[22].nom = "Celvan";
	l[22].type = 4;
	l[22].metre = 11500;
	l[22].noeuds[0] = s[1];
	l[22].noeuds[1] = s[16];
	
	l[21].nom = "3 Croix";
	l[21].type = 4;
	l[21].metre = 6750;
	l[21].noeuds[0] = s[21];
	l[21].noeuds[1] = s[1];
	
	return l;
}
