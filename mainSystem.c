#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/*displays main menu until false(when you exit) */
	while(1){
 printf("\t- - - - - - - - - - - MAIN MENU - - - - - - - - - - -\n");
 	/* displays menu selections */
 printf("\t1. Login\n\n \t2. Teacher Info \n\n \t3. Student Info\n\n \t4. Exit\n\t");
int menuChoice;
	/* prompts user to choose menu selection and checks and then executes */
scanf("%i", &menuChoice);
if(menuChoice == 1){
	int loginChoice;
	printf("\n\t- - - - - - - - - - - LOGIN - - - - - - - - - - -\n");
	printf("\t1. Enter Login\n\t2. Create Login\n\t");
	scanf("%i", &loginChoice);
	if (loginChoice == 1)
	{;
		printf("\t- - - - - - - - - - - LOGIN - - - - - - - - - - -\n");
	}
	else if(loginChoice == 2)
	{
		printf("\t- - - - - - - - - - - CREATE USER - - - - - - - - - - -\n");
		FILE* filePointer = fopen("usernames.txt", "a");
		char username[15];
		printf("\tEnter your username (must be 15 charcaters or fewer) : ");
		scanf("%s", username);
		fprintf(filePointer, "%s\n", username);
	}
}
else if(menuChoice == 2){
	int e = 1;
	while(e == 1){
	printf("\n\t- - - - - - - - - - - TEACHER INFO - - - - - - - - - - -\n");
	FILE* filePointer = fopen("teacherInfo.txt", "r");
	char output[256];
	int i;
	for (i = 1; fgets(output, sizeof(output), filePointer) != NULL; i++)
	{
		printf("%s\n", output);
	}
	printf("press 2 to exit teacher info: \n");
	scanf("%i", &e);
}
}	
else if(menuChoice == 3){
	int e = 1;
	while(e == 1){
	printf("\n\t- - - - - - - - - - - STUDENT INFO - - - - - - - - - - -\n");
	FILE* filePointer = fopen("studentInfo.txt", "r");
	char output[256];
	int i;
	for (i = 1; fgets(output, sizeof(output), filePointer) != NULL; i++)
	{
		printf("%s\n", output);
	}
	printf("press 2 to exit student info: \n");
	scanf("%i", &e);
}
}
else if(menuChoice == 4){
	printf("\n\tThis will exit\n");
	return 0;
}
}
}
	
