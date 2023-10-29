#include <stdio.h>
#include <stdbool.h>

void showMainMenu(int level, int experience, int health, int power, int defense, int speed ) {
    char startChoice;

    while (true) {
        printf("Welcome to Labyrinth! This is a simple choice based text game. Type H to open the help menu, S to open your status, and Y to start the game: ");
        scanf(" %c", &startChoice);

        if (startChoice == 'H') {
            printf("\nH: Open the help menu\nS: Open the status menu\nY: Start the game\nX: Leave the game\n");
        } else if (startChoice == 'S') {
            printf("\nStatus\nLevel: %i\nExperience: %i/%i\nHealth: %i\nPower: %i\nDefense: %i\nSpeed: %i\n", level, experience, level, health, power, defense, speed);
        } else if (startChoice == 'Y') {
            break;
        } else {
            printf("Invalid input!\n");
        }
    }
}

void firstRoomTaskOne(int health, char name[16], bool passcodeKnown) {
    char choice1;

    while (passcodeKnown == false) {
        
        printf("\n\nWhat do you do, %s?\n\nA: Investigate the Radio.\nB: Look around the Room.\nC: Open the Door.\n\n", name);
        scanf(" %c", &choice1);
        
        if (choice1 == 'A') {
            printf("\nThe Radio seems to not work anymore.");
        } else if (choice1 == 'B') {
            printf("\nYou found a note under the bed saying 'Shout 1770 to open the door!'");
            passcodeKnown = true;
        } else if (choice1 == 'C') {
            printf("\n When you touched the door, a suddden electrice burst from it shocked you!\nYou take 1 damage.");
            health--;
        } else {
            printf("Invalid input!\n");
        }
    }
}

void firstRoomTaskTwo(int health, char name[16], bool doorUnlocked) {
    char choice2;

    while (doorUnlocked == false) {
        
        printf("\n\nWhat do you do, %s?\n\nA: Investigate the Radio.\nB: Shout 1770 to open the Door.\nC: Open the Door.\n\n", name);
        scanf(" %c", &choice2);
        
        if (choice2 == 'A') {
            printf("\nThe Radio seems to not work anymore but it is blinking the color blue now.");
        } else if (choice2 == 'B') {
            printf("\nThe Door opened.");
            doorUnlocked = true;
        } else if (choice2 == 'C') {
            printf("\n When you touched the door, a suddden electrice burst from it shocked you!\nYou take 1 damage.");
            health--;
        } else {
            printf("Invalid input!\n");
        }
    }
}

int main() {
    int  level = 1, experience = 0, health = 3, power = 1, defense = 1, speed = 1;
    char name[16], startChoice;
    bool passcodeKnown = false, doorUnlocked = false;

    showMainMenu(level, experience, health, power, defense, speed);
    
    printf("\n\nWhat is your name? ");
    scanf("%15s", name);

    printf("\nYou slowly open your eyes, the world coming into focus. The room is unfamiliar, and the air is thick with an eerie silence. As you sit up, you realize you have no memory of how you got here or where 'here' even is. Panic starts to creep in.\n\nYou notice a door at the other end of the room. Odd noises from beyond the door make your heart race. With no other options, you muster your courage and decide to investigate the source of those sounds. It's time to find out what awaits you in this mysterious mansion.\n\nAs you stand up, a crackling voice comes from a nearby radio on a dusty table.\n\n'Welcome to the Labyrinth, %s! You're the latest contestant in our thrilliiing game! Do you have what it takes to escape the mansion's treacherous depths?? Let the challenge begin!!'", name);

    firstRoomTaskOne(health, name, passcodeKnown);
    firstRoomTaskTwo(health, name, doorUnlocked);
    
    printf("End of current story.");
    
    return 0;
}
