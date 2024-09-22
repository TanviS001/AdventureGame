#include <stdio.h>
void theFinalPuzzle()
{
    int finalChoice;
    int answer;
    printf("\n\nFinal Choice:");
    printf("\n1. Use the keys\n2. Try to force the door open\n3. Solve a riddle");
    printf("\n");

    printf("\n\n1, 2 or 3?");
    scanf("\n%d", &finalChoice);

    switch (finalChoice)
    {
    case 1:
        printf("\nIf you collected the 2 key from earlier rooms (library, dining hall, and hidden passage), you unlock the door and escape.");
        printf("\n\nYou escaped Successfully!!");
        break;
    case 2:
        printf("\n\nWithout all the keys, you will fall into a trap and meet your end.");
        printf("\nEscape failed!");
        break;
    case 3:
        printf("\n\nHere is a Riddle:");
        printf("\nI speak without a mouth and hear without ears. I have no body, but I come alive with the wind. What am I? Can you guess?");
        printf("\n\nOptions:\n1. A Shadow\n2. An Echo\n3. A whisper");
        printf("\n1, 2 or 3?");
        scanf("\n%d", answer);

        if (answer = 2)
        {
            printf("\n\nYou get the Keys needed! Now you unlock the door and escape");
            printf("\nYou escaped Successfully!!");
        }
        else
        {
            printf("\n\nUnfortunately, for you the game ends here.");
            printf("\nEscape failed!");
        }
        break;
    }
}
void library()
{
    int choice3;
    printf("\n\nThe library is filled with ancient books and a dusty desk. A strange book is glowing in the corner.");
    printf("\n\nChoices:");
    printf("\n1. Read the book: It contains a map of the mansion with hidden passageways marked. \n2. Take the book: There is a map in this book that will help you later. \n3. Ignore the book: You feel a cold breeze... You are alone with no clues.");
    printf("\n\n1, 2 or 3?");
    scanf("\n%d", &choice3);

    switch (choice3)
    {
    case 1:
        printf("\n\nUsing the map will reveal a hidden passage that allows you to bypass one of the traps in the final room.");
        printf("\n\nYou reach a grand door at the end of the hallway, but it's locked. You need 2 keys to open it.");
        theFinalPuzzle();
        break;
    case 2:
        printf("\n\nYou are clueless. You finally decide to open the book.");
        printf("\nYou find a map!!");
        printf("\n\nUsing the map will reveal a hidden passage that allows you to bypass one of the traps in the final room.");
        printf("\n\nYou reach a grand door at the end of the hallway, but it's locked. You need 2 keys to open it.");
        theFinalPuzzle();
        break;
    case 3:
        printf("\n\nUnfortunately, for you, the game ends here.");
        break;
    }
}
void theDiningHall()
{
    int choice3;
    printf("\n\nYou enter a grand hall with a table full of food. The smell is oddly tempting.");
    printf("\n\nChoices:");
    printf("\n1. Eat the food\n2. Examine the food");

    printf("\n\n1 or 2?");
    scanf("\n%d", &choice3);

    switch (choice3)
    {
    case 1:
        printf("\n\nIt's a trap! You fall unconscious and wake up in a different, scarier part of the mansion.");
        printf("\nUnfortunately, for you, the game ends here.");
        break;
    case 2:
        printf("\nYou notice a strange key hidden in a dish. Keep it with you.");
        printf("\n\nYou reach a grand door at the end of the hallway, but it's locked. You need 2 keys to open it.");
        theFinalPuzzle();
        break;
    }
}
void theBasement()
{
    int choice3;
    printf("\n\nThe basement is dark and cold. You hear growls coming from the shadows.");
    printf("\n\nChoices:");
    printf("\n1. Explore: You find an old lantern. It helps light the way, but something is watching you.");
    printf("\n2. Return to the hallway: You hear a whisper, \"Don't come back…\"");

    printf("\n\n1 or 2?");
    scanf("\n%d", &choice3);

    switch (choice3)
    {
    case 1:
        printf("\n\nYou reach a grand door at the end of the hallway, but it's locked. You need 2 keys to open it.");
        theFinalPuzzle();
        break;
    case 2:
        printf("\nYou are clueless... Nothing makes sense.");
        printf("\n\nUnfortunately, for you, the game ends here.");
        break;
    }
}
void hallway()
{
    int choice2;
    printf("\nIf you use the old key, the door unlocks, and you step into a dark hallway. Three doors lie ahead.");
    printf("\nChoices:");
    printf("\n1. Left Door \n2. Middle Door \n3. Right Door");

    printf("\n\n1, 2, or 3?");
    scanf("\n%d", &choice2);

    switch (choice2)
    {
    case 1:
        printf("Leads to a library filled with strange books.");
        library();
        break;
    case 2:
        printf("Leads to a dining hall with a mysterious feast.");
        theDiningHall();
        break;
    case 3:
        printf("Leads to a staircase descending into darkness.");
        theBasement();
        break;
    }
}

void main()
{
    int choice1;
    printf("\nYou wake up in a dark, cold mansion with no memory of how you got there. The doors are locked, and strange sounds echo through the hallways. Your objective is to escape before the haunting spirits trap you inside forever. The mansion has multiple rooms, each with puzzles, items, and dangers. You will need to make wise decisions to survive.");
    printf("\n\nIntro: You wake up in a dimly lit room with a single door in front of you. The door is locked, and you hear footsteps outside.");
    printf("\n\nPlayer's first decision:");
    printf("\n1. Search the room for clues. \n2. Try to open the door. \n3. Yell for help.");

    printf("\n\n1, 2, or 3?");
    scanf("\n%d", &choice1);

    switch (choice1)
    {
    case 1:
        printf("\n\nYou find an old key hidden under the bed. There's also a creepy painting on the wall that seems to follow your movements.");
        hallway();
        break;
    case 2:
        printf("\nIt's locked, and a loud bang echoes from behind you.");
        break;
    case 3:
        printf("\nYou hear a woman's sinister laugh from the hall. No one is coming to help.");
        break;
    }
}