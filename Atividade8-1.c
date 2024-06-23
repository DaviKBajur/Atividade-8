#include <stdio.h>

#define Tammatriz 5

#ifdef TESTADOR
  #define PRINTF(format, ...) fprintf(stderr, format, __VA_ARGS__)
#else
  #define PRINTF(format, ...) printf(format, __VA_ARGS__)
#endif

void Lermatriz(int matriz[][Tammatriz]){

    for(int i =0; i < Tammatriz; i++){
        for(int j =0; j < Tammatriz; j++){
            scanf(" %d", &matriz[i][j]);

        }
    }
}

void Imprimirmatriz(int matriz[][Tammatriz]){

    for(int i =0; i < Tammatriz; i++){
        for(int j =0; j < Tammatriz; j++){
            printf("matriz[%d][%d] : ", i, j);
            PRINTF("%d\n", matriz[i][j]);

        }
    }
}


int main()
{
    int matriz[Tammatriz][Tammatriz];
    
    Lermatriz(matriz);
    
    Imprimirmatriz(matriz);
    
    return 0;
}