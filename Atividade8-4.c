#include <stdio.h>

#define Quant_Lojas 7
#define Quant_produtos 5

#ifdef TESTADOR
  #define PRINTF(format, ...) fprintf(stderr, format, __VA_ARGS__)
#else
  #define PRINTF(format, ...) printf(format, __VA_ARGS__)
#endif

void Lermatriz(int matriz[Quant_produtos][Quant_Lojas]){
    for(int i = 0; i < Quant_Lojas; i++){
        for(int j = 0; j < Quant_produtos; j++){
            printf("Loja %d Produto %d : ", i+1, j+1);
            scanf("%d", &matriz[j][i]);  
        }
    }
}

void Calcularprodutos(int matriz[Quant_produtos][Quant_Lojas], int produtos[Quant_produtos]){
    for(int i = 0; i < Quant_produtos; i++){
        produtos[i] = 0;
    }
    
    for(int i = 0; i < Quant_Lojas; i++){
        for(int j = 0; j < Quant_produtos; j++){
            produtos[j] = produtos[j] + matriz[j][i];  
        }
    }
}

void Imprimirmatriz(int produtos[]){
    for(int i = 0; i < Quant_produtos; i++){
        if(produtos[i] < 700){
        PRINTF("%.3d", produtos[i]);
            }    }
}

int main(){
    int matriz[Quant_produtos][Quant_Lojas], produtos[Quant_produtos];
    
    Lermatriz(matriz);
    
    Calcularprodutos(matriz, produtos);

    Imprimirmatriz(produtos);
    
    return 0;
}
