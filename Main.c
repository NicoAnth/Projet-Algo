#include "type.h"
#include "sommets.h"
#include "aretes.h"
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
	
	station *s;
	liaison *a;
	s = init_sommets();
	a = init_aretes(s);
	printf("%d",a[0].metre);
	
	return 0;
}
