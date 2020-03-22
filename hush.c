#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <readline/readline.h>
#include <raedline/history.h>

#define MAXCOM 1000 // max number of letters to be supported
#define MAXLIST 100 // max number of commands to be supported

// Clearing the shell using escape sequences
#define clear() printf("\033[H\033[J")

// Greeting the shell during startup
void init_shell()
{
	clear();
	printf("***********\n
		   hush	   \n
		***********\n");
	char *username = getenv("USER");
	printf("\nUSER is: @%s", username);	
	printf("\n");
	sleep(1);
	clear();
}

// FUnction to take input
int takeInput(char* str)
{
	char *buf;

	buf = readline("\n>>> ");
	if (strlen(buf) != 0)
	{
		add_history(buf);
		strcpy(str, buf);
		return 0;
	}
	else
	{
		return 1;
	}
}


