// USE A 2D CHARACTER ARRAY TO STORE AND DISPLAY A TIC TAC TOE BOARD

#include <stdio.h>
int main()
{
    char board[3][3] = {
        {'X', 'O', 'O'},
        {'O', 'X', 'X'},
        {'O', 'X', 'O'},
    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j != 2)
            {
                printf("%c|", board[i][j]);
            }
            else
            {
                printf("%c", board[i][j]);
            }
        }
        printf("\n");
        if (i != 2)
        {
            printf("------\n");
        }
    }
    return 0;
}