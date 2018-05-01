#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "type.h"
#include "sommets.h"
#include "aretes.h"
#include "getinfo.h"


float calculPoids (station s1, station s2, int lvl)
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
			j++;
		}
	}
	// ! Implémenter boucle pour calculer tous les chemins ! 
	// Calcul poids remontées
	
		if (buffer[0].type == 0)
		{
			poids = ((buffer[0].metre + 10000)/3);
			return poids;
		}
		if (buffer[0].type == 1)
		{
			poids = ((buffer[0].metre + 10000)/4);
			return poids;
		}
		if (buffer[0].type == 2)
		{
			poids = ((buffer[0].metre + 10000)/4.5);
			return poids;
		}
		if (buffer[0].type == 3)
		{
			poids = ((buffer[0].metre + 10000)/5);
			return poids;
		}
		
	//Calcul poids pistes	
	if (lvl==1)
	{
		if (buffer[0].type == 4)
		{
			poids = ((buffer[0].metre + (buffer[0].metre*0.1))/12);
			return poids;
		}
		if (buffer[0].type == 5)
		{
			poids = ((buffer[0].metre + (buffer[0].metre*0.2))/12);
			return poids;
		}
		if (buffer[0].type == 6)
		{
			poids = ((buffer[0].metre + (buffer[0].metre*0.5))/12);
			return poids;
		}
		if (buffer[0].type == 7)
		{
			poids = ((buffer[0].metre + (buffer[0].metre*0.8))/12);
			return poids;
		}
			
	}
	if (lvl==2)
	{
		if (buffer[0].type == 4)
		{
			poids = ((buffer[0].metre - (buffer[0].metre*0.1))/12);
			return poids;
		}
		if (buffer[0].type == 5)
		{
			poids = ((buffer[0].metre - (buffer[0].metre*0.2))/12);
			return poids;
		}
		if (buffer[0].type == 6)
		{
			poids = ((buffer[0].metre - (buffer[0].metre*0.4))/12);
			return poids;
		}
		if (buffer[0].type == 7)
		{
			poids = ((buffer[0].metre - (buffer[0].metre*0.5))/12);
			return poids;
		}
			
	}
		
	return 0;
}


void dijkstra (station dep, station arr, int lvl){
	
	station *s = init_sommets();
	station *now = &s[27];
	int i;
	int verif=1;
	
	// On initialise toutes les variables à 0 et les poids à -1
	// hormis le point de depart
	for (i=0;i<28;i++)
	{
		s[i].poids = -1;
		s[i].true = 0;
		s[i].ant = 0;
		if (s[i].num == dep.num)
		{
			s[i].poids = -2;
		}
	}
	  

	while ((*now).num != arr.num)
	{
		
		for (i=0;i<27;i++)
			{
				if (s[i].true == 0 && s[i].poids<verif)
				{
					verif = s[i].poids;
					now = &s[i];
				}
			}
		(*now).true = 1;

		for (i=0;i<(*now).nbv;i++)
		{
			if (((*(*now).tabvoisins[i]).true) == 0)
			{
				if ((((*now).poids + calculPoids(*now,(*(*now).tabvoisins[i]),lvl))<(*(*now).tabvoisins[i]).poids) || (*(*now).tabvoisins[i]).poids == -1 )
				{
						(*(*now).tabvoisins[i]).poids = (*now).poids + calculPoids(*now,(*(*now).tabvoisins[i]),lvl);
						(*(*now).tabvoisins[i]).ant = (*now).num;
				}
			}
		}	
	}
	
}
