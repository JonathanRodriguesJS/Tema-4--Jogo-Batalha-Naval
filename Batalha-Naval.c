#include <stdio.h>
#include <stdlib.h>


void mostrar_tabela(int mat[10][10]){
    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            //printf("%d ",mat[i][j]);
            printf("%c ", mat[i][j] ? '#' : '.');

        }
        printf("\n");
    }
}

void cruz(int mat[10][10]){
    
    int centroY = 2;
    int centroX = 7;
    
    for(int i = centroY - 2; i <= centroY +2; i++){
        for(int j = centroX -2; j <= centroX + 2; j++){
            if (i == centroY){
                mat[i][j] = 1;
            }else{
                mat[i][centroX] = 1;
            }
            
        }
    }
}

void cone(int mat[10][10]){
    
    int centro = 2;
    for(int i = 1; i <=3; i++){
        for(int j = centro - (i -1); j <= centro + (i - 1); j++){
            mat[i][j] = 1;
        }
    }
}

void octaedro(int mat[10][10], int centro_linha, int centro_coluna){
    
    for (int i = -2; i <= 2; i++) {
        int linha = centro_linha + i;
        if (linha < 0 || linha >= 10) continue;

        int dist = abs(i);
        int inicio = centro_coluna - (2 - dist);
        int fim = centro_coluna + (2 - dist);

        for (int j = inicio; j <= fim; j++) {
            if (j >= 0 && j < 10) {
                mat[linha][j] = 1;
            }
        }
    }
}

int main(){
    int mat[10][10];
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            mat[i][j] = 0;
        }
    }    

    octaedro(mat,7,4);
    cone(mat);
    cruz(mat);
    
    printf("\n - Batalha Naval -  \n\n");
    mostrar_tabela(mat);
    
    return 0;
}