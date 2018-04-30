#include "type.h"
#include <stdio.h>
#include <stdlib.h>

liaison *init_aretes(station *s){
	
	liaison *l = malloc(66*sizeof(liaison));
	
	//teleski
	
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
	
	l[14].nom = "Casse du Boeuf";
	l[14].type = 1;
	l[14].metre = 4650;
	l[14].noeuds[0] = s[17];
	l[14].noeuds[1] = s[9];
	
	l[15].nom = "Frejus";
	l[15].type = 1;
	l[15].metre = 1800;
	l[15].noeuds[0] = s[25];
	l[15].noeuds[1] = s[11];
	
	l[16].nom = "Côte de Chevalier";
	l[16].type = 1;
	l[16].metre = 2400;
	l[16].noeuds[0] = s[11];
	l[16].noeuds[1] = s[20];
	
	l[17].nom = "Vallons";
	l[17].type = 1;
	l[17].metre = 4650;
	l[17].noeuds[0] = s[13];
	l[17].noeuds[1] = s[14];
	
	l[18].nom = "Forêt";
	l[18].type = 1;
	l[18].metre = 2850;
	l[18].noeuds[0] = s[15];
	l[18].noeuds[1] = s[20];
	
	//oeufs
	 
	l[19].nom = "Ratier";
	l[19].type = 2;
	l[19].metre = 2850;
	l[19].noeuds[0] = s[16];
	l[19].noeuds[1] = s[6];
	
	l[20].nom = "Aravet";
	l[20].type = 2;
	l[20].metre = 3150;
	l[20].noeuds[0] = s[17];
	l[20].noeuds[1] = s[15];
	
	l[21].nom = "Frejus";
	l[21].type = 2;
	l[21].metre = 3600;
	l[21].noeuds[0] = s[17];
	l[21].noeuds[1] = s[11];
	
	//tele cabines
	
	l[22].nom = "Serre-Chevalier";
	l[22].type = 3;
	l[22].metre = 4650;
	l[22].noeuds[0] = s[6];
	l[22].noeuds[1] = s[4];
	
	l[23].nom = "Pontillas";
	l[23].type = 3;
	l[23].metre = 3150;
	l[23].noeuds[0] = s[18];
	l[23].noeuds[1] = s[25];
	
	// Pistes vertes
	
	l[24].nom = "Lièvre Blanc";
	l[24].type = 4;
	l[24].metre = 1650;
	l[24].noeuds[0] = s[8];
	l[24].noeuds[1] = s[3];

	l[25].nom = "Route Aravet";
	l[25].type = 4;
	l[25].metre = 7950;
	l[25].noeuds[0] = s[15];
	l[25].noeuds[1] = s[17];
	
	l[26].nom = "Briance";
	l[26].type = 4;
	l[26].metre = 10650;
	l[26].noeuds[0] = s[6];
	l[26].noeuds[1] = s[16];
	
	l[27].nom = "Chêne";
	l[27].type = 4;
	l[27].metre = 5500;
	l[27].noeuds[0] = s[6];
	l[27].noeuds[1] = s[17];
	
	l[28].nom = "Route Fréjus";
	l[28].type = 4;
	l[28].metre = 7800;
	l[28].noeuds[0] = s[13];
	l[28].noeuds[1] = s[17];
	
	l[29].nom = "Barres";
	l[29].type = 4;
	l[29].metre = 1800;
	l[29].noeuds[0] = s[23];
	l[29].noeuds[1] = s[11];
	
	l[30].nom = "Celvan";
	l[30].type = 4;
	l[30].metre = 11500;
	l[30].noeuds[0] = s[1];
	l[30].noeuds[1] = s[16];
	
	l[31].nom = "3 Croix";
	l[31].type = 4;
	l[31].metre = 6750;
	l[31].noeuds[0] = s[21];
	l[31].noeuds[1] = s[1];
	
	//Pistes Bleues
	
	l[32].nom = "Myrtille";
	l[32].type = 5;
	l[32].metre = 4500;
	l[32].noeuds[0] = s[0];
	l[32].noeuds[1] = s[1];
	
	l[33].nom = "Vallons";
	l[33].type = 5;
	l[33].metre = 2500;
	l[33].noeuds[0] = s[3];
	l[33].noeuds[1] = s[5];
	
	l[34].nom = "Vallons2";
	l[34].type = 5;
	l[34].metre = 500;
	l[34].noeuds[0] = s[5];
	l[34].noeuds[1] = s[1];

	l[35].nom = "Eftanis";
	l[35].type = 5;
	l[35].metre = 600;
	l[35].noeuds[0] = s[4];
	l[35].noeuds[1] = s[20];

	l[36].nom = "Eftanis suite"; //liaison entre Eftanis et Combes
	l[36].type = 5;
	l[36].metre = 350;
	l[36].noeuds[0] = s[20];
	l[36].noeuds[1] = s[26];
	
	l[37].nom = "Eftanis";
	l[37].type = 5;
	l[37].metre = 1800;
	l[37].noeuds[0] = s[26];
	l[37].noeuds[1] = s[5];
	
	l[38].nom = "Genepi";
	l[38].type = 5;
	l[38].metre = 1350;
	l[38].noeuds[0] = s[26];
	l[38].noeuds[1] = s[9];
	
	l[39].nom = "Forêt";
	l[39].type = 5;
	l[39].metre = 1650;
	l[39].noeuds[0] = s[26];
	l[39].noeuds[1] = s[24];
	
	l[40].nom = "Fangeas";
	l[40].type = 5;
	l[40].metre = 1950;
	l[40].noeuds[0] = s[20];
	l[40].noeuds[1] = s[9];
	
	l[41].nom = "Alpage";
	l[41].type = 5;
	l[41].metre = 750;
	l[41].noeuds[0] = s[9];
	l[41].noeuds[1] = s[24];
	
	l[42].nom = "Marteau";
	l[42].type = 5;
	l[42].metre = 1500;
	l[42].noeuds[0] = s[24];
	l[42].noeuds[1] = s[15];
	
	l[43].nom = "Marteau";
	l[43].type = 5;
	l[43].metre = 4200;
	l[43].noeuds[0] = s[9];
	l[43].noeuds[1] = s[24];
	
	l[44].nom = "Mélèzes";
	l[44].type = 5;
	l[44].metre = 1950;
	l[44].noeuds[0] = s[24];
	l[44].noeuds[1] = s[6];
	
	l[45].nom = "Sellettes";
	l[45].type = 5;
	l[45].metre = 2700;
	l[45].noeuds[0] = s[8];
	l[45].noeuds[1] = s[10];
	
	l[46].nom = "Goulet";
	l[46].type = 5;
	l[46].metre = 1350;
	l[46].noeuds[0] = s[8];
	l[46].noeuds[1] = s[23];
	
	l[47].nom = "Goulet";
	l[47].type = 5;
	l[47].metre = 1800;
	l[47].noeuds[0] = s[23];
	l[47].noeuds[1] = s[11];
	
	l[48].nom = "Goulet";
	l[48].type = 5;
	l[48].metre = 450;
	l[48].noeuds[0] = s[11];
	l[48].noeuds[1] = s[13];
	
	l[49].nom = "Combes";
	l[49].type = 5;
	l[49].metre = 1650;
	l[49].noeuds[0] = s[26];
	l[49].noeuds[1] = s[5];
	
	l[50].nom = "Alpage";
	l[50].type = 5;
	l[50].metre = 750;
	l[50].noeuds[0] = s[9];
	l[50].noeuds[1] = s[24];
	
	l[51].nom = "Traverse";
	l[51].type = 5;
	l[51].metre = 1250;
	l[51].noeuds[0] = s[10];
	l[51].noeuds[1] = s[11];
	
	return l;
}
