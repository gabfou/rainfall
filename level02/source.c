

char* p()
{
	char truc2[104]; // taille a pas a lair de corespondre
	fflush(NULL); // heuuuu
	gets(truc2);
	int random2emeargumentebp
	if ((random2emeargumentebp & 0xb0000000) == 0xb0000000) // si ca commence par un b ca print l adresse de ebp et ca exit avant qu on puisse effacer etrenquille grace au exit
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