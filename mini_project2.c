#include <stdio.h>
int main()
{
    int chocklate = 5;
    int pick;
    int current_player = 1;
    printf("chocklate remaining=%d\n", chocklate);
    while (chocklate > 0)
    {

        printf("PLAYER %d turn \n", current_player);
        printf("pick chocklate (0 to 3): ");
        scanf("%d", &pick);

        if (pick < 0 || pick > 3 || pick > chocklate)
        {
            printf("Invalid move try again.\n");
            continue;
        }
        chocklate -= pick;
        if (chocklate > 0)
        {
            printf("The chocklate remaining %d \n", chocklate);
            current_player = (current_player == 1) ? 2 : 1;
        }
        else
        {
            int lossing_player = (current_player == 1) ? 2 : 1;
            int winning_payer = current_player;
            printf("Only chilly remains!\n");
            printf("player %d gets chilly \n", lossing_player);
            printf("Player %d lost\n", lossing_player);
            printf("player %d won\n", winning_payer);
            break;
        }
    }
    return 0;
}
