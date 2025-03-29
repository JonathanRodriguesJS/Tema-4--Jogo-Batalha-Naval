#include <stdio.h>

int main()
{

    char *tabuleiro[10][10];
    char *topo[15] = {" ", " ", " ", " ", " ", "A ", "B ", "C ", "D ", "E ", "F ", "G ", "H ", "I ", "J "};

    for (int h = 0; h < 15; h++)
    {
        printf("%s", topo[h]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        if (i != 9)
        {
            printf("%d  | ", i + 1);
        }
        else
        {
            printf("%d | ", i + 1);
        }
        for (int j = 0; j < 10; j++)
        {

            tabuleiro[i][j] = "- ";

            if ((i == 2 && j > 2 && j < 6) || (j == 7 && i > 1 && i < 5))
            {
                tabuleiro[i][j] = "0 ";
            }

            printf("%s", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
