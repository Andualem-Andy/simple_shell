#include <stdio.h>
/**
 * main - check the code
 *
 * Return: success
 */
int main(int argc, char *argv[], char * envp[])
{
	int i;
	for (i = 0; envp[i] != NULL; i++)
		printf("\n%s", envp[i]);
	getchar();
	return (0);
}
