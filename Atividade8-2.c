#include <stdio.h>

#ifdef TESTADOR
  #define PRINTF(format, ...) fprintf(stderr, format, __VA_ARGS__)
#else
  #define PRINTF(format, ...) printf(format, __VA_ARGS__)
#endif

void Lermatriz(int linhas, int colunas, float matriz[linhas][colunas]){

    for(int i =0; i < linhas; i++){
        for(int j =0; j < colunas; j++){
            
            printf("matriz[%d][%d] : ", i, j);
            scanf(" %f", &matriz[i][j]);

        }
    }
}

float ResultadoSomaMatriz(int linhas, int colunas, float matriz[linhas][colunas]){
    float resultado = 0;

    for(int i =0; i < linhas; i++){
        for(int j =0; j < colunas; j++){
            resultado += matriz[i][j];

        }
    }

    return resultado;

}

int main()
{
    int linhas, colunas;
    printf("diga o tamanho da matriz\n :");
    scanf("%d%*c%d", &linhas, &colunas);
    float matriz[linhas][colunas];
    
    Lermatriz(linhas, colunas, matriz);
    
    PRINTF("%f", ResultadoSomaMatriz( linhas, colunas, matriz));
    
    return 0;
}