#include "type.h"
#include "sommets.h"
#include "aretes.h"
#include "getinfo.h"
#include "Dijkstra.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (int argc, char* argv[])
{
	
	station *s;
	liaison *a;
	station dep;
	station arr;
	int lvl;
	char pos[35];
	char dest[35];
	s = init_sommets();
	a = init_aretes(s);
	
	printf("Quel type de skieur êtes vous ? Tapez 1 pour Débutant ou 2 pour Expérimenté :");
	lvl = lireNombre();
	printf("Où vous trouvez-vous ? ");
	lecture(pos,35);
	printf ("A quel endroit souhaitez-vous vous rendre ? ");
	lecture(dest,35);
	
	if (strtostation(pos,&dep))
	{
		printf("Erreur: position de départ non reconnue. Référez vous au README si vous avez besoin d'aide.\n\n");
		return 0;
	}
	if (strtostation(dest,&arr))
	{
		printf("Erreur: position d'arrivée non reconnue. Référez vous au README si vous avez besoin d'aide.\n\n");
		return 0;
	}
	
	dijkstra(dep,arr,lvl);
	
	return 0;
}
