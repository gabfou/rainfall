
#include <stdio.h>
//  pas finit
char* p()
{
	char truc2[76]; // taille a pas a lair de corespondre la ca devrait etre bon
	int random2emeargumentnexteip // je sais pas comment le recuperer

	fflush(STDOUT_FILENO); // heuuuu
	gets(truc2);
	if ((random2emeargumentnexteip & 0xb0000000) == 0xb0000000) // si ca commence par un b ca print l adresse de ret et ca exit avant qu on puisse effacer etrenquille grace au exit
	{
		printf("(%p)\n", );
		exit(1);  // grr
	}
	puts(truc2);
	return strdup(truc2);

}

int main()
{
	return p();
}