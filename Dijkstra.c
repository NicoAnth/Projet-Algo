#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "type.h"
#include "sommets.h"
#include "aretes.h"
#include "getinfo.h"

#define UNDEFINED -1

float calculPoids (station s1, station s2, int lvl)
{
	station *s = init_sommets();
	liaison *l = init_aretes(s);
	liaison *buffer = malloc (5*sizeof(liaison));
	int i;
	int j=0;
	float *poids = malloc(5*sizeof(liaison)) ;
	float pluspetitp = 100000;
	for (i=0;i<77;i++)
	{
		if(l[i].noeuds[0].num == s1.num && l[i].noeuds[1].num == s2.num)
		{
			buffer[j] = l[i];
			j++;
		}
	}
	// ! Revoir boucle !
	for (i=0;i<j;i++)
	{ 
	// Calcul poids remontées
	
		if (buffer[i].type == 0)
		{
			poids[i] = ((buffer[i].metre + 10000)/3);
		}
		if (buffer[i].type == 1)
		{
			poids[i] = ((buffer[i].metre + 10000)/4);
		}
		if (buffer[i].type == 2)
		{
			poids[i] = ((buffer[i].metre + 10000)/4.5);
		}
		if (buffer[i].type == 3)
		{
			poids[i] = ((buffer[i].metre + 10000)/5);
		}
		
	//Calcul poids[i] pistes	
	if (lvl==1)
	{
		if (buffer[i].type == 4)
		{
			poids[i] = ((buffer[i].metre + (buffer[i].metre*0.1))/12);
		}
		if (buffer[i].type == 5)
		{
			poids[i] = ((buffer[i].metre + (buffer[i].metre*0.2))/12);
		}
		if (buffer[i].type == 6)
		{
			poids[i] = ((buffer[i].metre + (buffer[i].metre*0.5))/12);
		}
		if (buffer[i].type == 7)
		{
			poids[i] = ((buffer[i].metre + (buffer[i].metre*0.8))/12);
			
		}
			
	}
	if (lvl==2)
	{
		if (buffer[i].type == 4)
		{
			poids[i] = ((buffer[i].metre - (buffer[i].metre*0.1))/12);
			
		}
		if (buffer[i].type == 5)
		{
			poids[i] = ((buffer[i].metre - (buffer[i].metre*0.2))/12);
			
		}
		if (buffer[i].type == 6)
		{
			poids[i] = ((buffer[i].metre - (buffer[i].metre*0.4))/12);
			
		}
		if (buffer[i].type == 7)
		{
			poids[i] = ((buffer[i].metre - (buffer[i].metre*0.5))/12);
			
		}
			
	}
}
	for(i=0;i<j;i++)
	{
		if (poids[i]<pluspetitp)
		{
			pluspetitp = poids[i];
		} 
	}
		
	return pluspetitp;
}


void dijkstra (station dep, station arr, int lvl){
	
	station *s = init_sommets();
	station *now = &s[27];
	int i;
	int j = 0;
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
			s[i].poids = 0;
		}
	}
	  
	//j;
	while ((*now).num != arr.num)
	{
		
		for (i=0;i<27;i++)
			{
			
				if (s[i].true == 0 && s[i].poids<verif && s[i].poids != UNDEFINED)
				{
					verif = s[i].poids;
					now = &s[i];
				}
			}
		verif = 100000;
		(*now).true = 1;
		printf("now = %s num = %d poids = %d\n",(*now).nom,(*now).num,(*now).poids);
		for (i=0;i<(*now).nbv;i++)
		{
			if (((*(*now).tabvoisins[i]).true) == 0)
			{
				if ((((*now).poids + calculPoids(*now,(*(*now).tabvoisins[i]),lvl))<(*(*now).tabvoisins[i]).poids) || (*(*now).tabvoisins[i]).poids == UNDEFINED )
				{
						(*(*now).tabvoisins[i]).poids = (*now).poids + calculPoids(*now,(*(*now).tabvoisins[i]),lvl);
						(*(*now).tabvoisins[i]).ant = (*now).num;
						printf("poids de %s = %d et ant = %d\n",(*(*now).tabvoisins[i]).nom,(*(*now).tabvoisins[i]).poids,(*(*now).tabvoisins[i]).ant);
				}
			}
		}
		printf("break\n");
		j++	;
	}
	printf("\nPoids du plus court chemin jusqu'à %s = %d\n",arr.nom,(*now).poids);
	printf("%d",(*now).ant);
	
}
