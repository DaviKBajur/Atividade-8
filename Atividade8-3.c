#include <stdio.h>

#ifdef TESTADOR
  #define PRINTF(format, ...) fprintf(stderr, format, __VA_ARGS__)
#else
  #define PRINTF(format, ...) printf(format, __VA_ARGS__)
#endif

void LerVetor(int tamvetor, float vetor[]){

    for(int i =0; i < tamvetor; i++){
        
            
            printf("vetor[%d] : ", i);
            scanf(" %f", &vetor[i]);

    }
}



void Lermatriz(int tamvetor, float matriz[][tamvetor]){

    for(int i =0; i < tamvetor; i++){
        for(int j =0; j < tamvetor; j++){
            
            printf("matriz[%d][%d] : ", i, j);
            scanf(" %f", &matriz[i][j]);

        }
    }
}

void ResultadoSomaMatriz(int tamvetor, float matriz[][tamvetor], float vetor[], float resultado[]){
    

    for(int i =0; i < tamvetor; i++){
        resultado[i] = 0;
        for(int j =0; j < tamvetor; j++){
           resultado[i] += vetor[j] * matriz[i][j];

        }
    }

}

void ImprimirResultado(float resultado[], int tamvetor){

    for(int i =0; i < tamvetor; i++){
        PRINTF("%f\n", resultado[i]);

    }
}

int main()
{
    int tamvetor;
    printf("diga o tamanho do vetor\n :");
    scanf("%d%*c", &tamvetor);
    float matriz[tamvetor][tamvetor], vetor[tamvetor], resultado[tamvetor];
    
    LerVetor(tamvetor, vetor);
    
    Lermatriz(tamvetor, matriz);

    ResultadoSomaMatriz( tamvetor, matriz, vetor, resultado);
    
    ImprimirResultado(resultado, tamvetor);
    
    return 0;
}