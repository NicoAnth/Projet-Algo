#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sommets.h"

void viderBuffer (){
	
	int c = 0;
	while (c != '\n' && c!= EOF)
	{
		c = getchar();
	}
}

int lecture (char *chaine, int longueur){

char* posEntree = NULL;
if (fgets(chaine,longueur,stdin)!= NULL){
	
	posEntree = strchr(chaine,'\n');
	if (posEntree != NULL){
		*posEntree = '\0';
	}
	else{
		viderBuffer();
	}
	return 1;
}

return 0;

}
long lireNombre (){
	
	char nombre[20]= {0};
	
	if(lecture(nombre,20)){
		return strtol(nombre,NULL,10);
	}
	else
	{
		return 0;
	}
	
}

int strtostation (char* ch,station *s)
{
	station *tab = init_sommets();
	int i;
	
	for (i=0; i<27;i++)
	{
		if (!strcmp(tab[i].nom,ch))
		{
			*s = tab[i];
			return 0;
		}
	}
	
	return 1;
}
