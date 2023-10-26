#include <stdio.h>

int main() {
	
	int level, experience, health, power, defense, speed;
	char name[32], choice;
	
	printf("What is your name, traveler? ");
	scanf("%32s", name);
	
	printf("\nWelcome to this world, %s!", name);
	
	printf("\n\nYou find yourself alone in the plains with a dagger tattered clothes and a knife. In the distance, you see a huge forest and multiple hills. Where do you go?");
	
	printf("\n\nP: stay in the plains\nF: travel to the forest\nH: climb the hills\n");
	
	scanf("%s", &choice);
	
	if (choice == 'P') {
	    printf("You stayed at the plains");
	} else if (choice == 'F') {
	    printf("You went to the forest");
	} else if (choice == 'H') {
	    printf("You went to hills");
	}
	
	return 0;
}
