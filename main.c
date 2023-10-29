#include <stdio.h>
#include <stdbool.h>

void firstRoom(char name[16], bool *doorUnlocked) {
    char choice;

    while (*doorUnlocked == false) {
        
        printf("\n\nWhat do you do, %s?\n\nA: Investigate the Radio.\nB: Look around the Room.\nC: Open the Door.\n\n", name);
        scanf(" %c", &choice);
        
        if (choice == 'A') {
            printf("\nThe Radio seems to not work anymore.");
        } else if (choice == 'B') {
            printf("\nYou found a note under the bed saying 'Shout 1770 to open the door!'");
            *doorUnlocked = true;
        } else if (choice == 'C') {
            printf("\n When you touched the door, a suddden electrice burst from it shocked you!");
        }
    }
}

int main() {
    int  level = 1, experience = 0, health = 3,  power = 1, defense = 1, speed = 1;
    char name[16], startChoice;
    bool doorUnlocked = false;

    // printf("Welcome to Game! This is a simple choice based text game. Type H to open the help menu, S to open your stats and Y to start the game!");
    
    // scanf("%c", &startChoice);
    
    // if (startChoice == "H") {
    //     printf("H: Open the help menu\nS: Open the status menu\nY: Start the game\nX: Leave the game");
    // } else if (startChoice == "S") {
    //     printf("H: Open the help menu\nS: Open the status menu\nY: Start the game\nX: Leave the game");
    // } else if (startChoice == "H") {
    //     printf("H: Open the help menu\nS: Open the status menu\nY: Start the game\nX: Leave the game");
    // } else {
        
    // }
    
    printf("\n\nWhat is your name? ");
    scanf("%15s", name);

    printf("\nYou slowly open your eyes, the world coming into focus. The room is unfamiliar, and the air is thick with an eerie silence. As you sit up, you realize you have no memory of how you got here or where 'here' even is. Panic starts to creep in.\n\nYou notice a door at the other end of the room. Odd noises from beyond the door make your heart race. With no other options, you muster your courage and decide to investigate the source of those sounds. It's time to find out what awaits you in this mysterious mansion.\n\nAs you stand up, a crackling voice comes from a nearby radio on a dusty table.\n\n'Welcome to the Maze, %s! You're the latest contestant in our thrilliiing game! Do you have what it takes to escape the mansion's treacherous depths?? Let the challenge begin!!'", name);

    firstRoom(name, &doorUnlocked);

    return 0;
}
