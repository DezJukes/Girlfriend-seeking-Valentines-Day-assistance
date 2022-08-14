#include <stdio.h>
#include <stdlib.h>

int main() {
	char name[25];
	int choice;
	
	printf("What is your name? ");
	scanf("%[^\n]”", &name);
	
	printf("\nHappy Valentine's Day %s!", name);
	
	printf("\n\nPick a number between 1 and 3.\n");
	scanf("%d", &choice);
	
	while(choice>3){
		printf("\nThat's not an option!");
		printf("\nPlease pick a number between 1 and 3.\n");
		scanf("%d", &choice);
	}
	if(choice==1)
		printf("\nYou've won the option to choose my lingerie. <3");
	
	else if(choice==2)
		printf("\nYou've won a striptease at a date and time of your choice.");
	
	else if(choice==3)
		printf("\nYou've won the option to choose any position and I have to comply. \nChoose wisely :)");
}
