#include <stdio.h>
#include <stdbool.h>
#define N 8
void afisare_solutii(char tabla[N][N]);
bool verificare(char tabla[N][N], int linie, int coloana);
bool rezolva_n_regine(char tabla[N][N], int coloana);
void opt_regine();

void afisare_solutii(char tabla[N][N])
{
    int i, j;
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf(" %c ", tabla[i][j]);
        }
        printf("\n");
    }
    printf("\n"); 
}

bool verificare(char tabla[N][N], int linie, int coloana)
{
    int i, j;
    //Verifica randul pe orizontala
    for(i = 0; i < coloana; i++)
    {
        if(tabla[linie][i] == 'Q')
        {
            return false;
        }
    }
    
    //vericica diagonala din stanga sus
    for(i = linie, j = coloana; i >= 0 && j >= 0; i--, j--)
    {
        if(tabla[i][j] == 'Q')
        {
            return false;
        }
    }

    //Verifica diagonala din stanga jos
    for(i = linie, j = coloana; i < N && j >= 0; i++, j--)
    {
        if(tabla[i][j] == 'Q')
        {
            return false;
        }
    }

    return true;
}


int main()
{
    opt_regine();
    return 0;
}
