#include <stdio.h>

int main() {
	
	int level, experience, health, power, defense, speed;
	char name[16];
	
	
	printf("Welcome to this world!");
	
	printf("\n\nWhat is your name, traveler? ");
	scanf("%15s", name);
	
	printf("Are you ready to start your adventure, %s?", name);
	
	return 0;
}
