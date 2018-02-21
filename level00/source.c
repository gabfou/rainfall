#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char *machin;
	int arg;
	int gid;
	int uid;
	
	arg = atoi(argv[1]);
	if (arg != 423)
	{
		fwrite("No !\n", 5, 1, STDERR_FILENO);
		return (0);
	}
	machin = strdup("/bin/sh");
	gid = getegid();
	uid = geteuid();
	setresgid(gid, gid, gid);
	setresuid(uid, uid, uid);

	execv("/bin/dash", argv);
	return (0);
}
