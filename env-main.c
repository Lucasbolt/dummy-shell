#include "main.h"
void genpath(void) __attribute__((constructor));
/**
 * genpath - generates PATH
 */
void genpath(void)
{
	pid_t pid;
	
	pid = fork();

	if (pid < 0)
		return;
	else if (pid == 0)
		system("printenv PATH | tr ':' '\n' > .tt");
	else
	{
		wait(NULL);
	}
}

/**
 * main - main exec file
 * @argc: arg count
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc > 1)
		puts(argv[1]);
	else
		prompt();
	return (0);
}
