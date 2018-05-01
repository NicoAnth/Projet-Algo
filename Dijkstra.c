#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "type.h"
#include "sommets.h"
#include "aretes.h"
#include "getinfo.h"


void calculPoids (station s1, station s2, int lvl)
{
	station *s = init_sommets();
	liaison *l = init_aretes(s);
	liaison *buffer = malloc (5*sizeof(liaison));
	int i;
	int j=0;
	float poids;
	
	for (i=0;i<77;i++)
	{
		if(l[i].noeuds[0].num == s1.num && l[i].noeuds[1].num == s2.num)
		{
			buffer[j] = l[i];
			printf("%s\n",buffer[j].nom);
			j++;
		}
	}
	if (lvl == 1)
	{
		if (buffer[0].type == 0)
		{
			
		}
		
	}
	
	
}


void dijkstra (station dep, station arr, int lvl){
	
	station *s = init_sommets();
	liaison *a = init_aretes(s);
	station *now;
	int i;
	// On initialise toutes les variables à 0 et les poids à -1
	// hormis le point de depart
	for (i=0;i<27;i++)
	{
		s[i].poids = -1;
		s[i].true = 0;
		s[i].ant = 0;
		if (s[i].num == dep.num)
		{
			s[i].poids = 0;
			s[i].true = 1;
			now = &s[i];
		}
	}
	
	//Cela ne fonctionne pas pour les sommets qui recherchent un sommet situé plus loin dans le tableau !
	// si now.tabvoisin[0].num > now.num
	calculPoids(*now,(*now).tabvoisins[0],lvl);
	
		
	
	
}
