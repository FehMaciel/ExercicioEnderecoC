#include <stdio.h>

void main(){
    int ultimoMat = 7;
    int penultimoMat = 1;
    
    if (&ultimoMat > &penultimoMat){
        printf("Endereco do ultimo digito é Maior: %p \n", &ultimoMat);
        printf("Endereco do penultimo digito é Menor: %p \n", &penultimoMat);
    }
    else{
        printf("Endereco do penultimo digito é Maior: %p \n", &penultimoMat);
        printf("Endereco do ultimo digito é Menor: %p \n", &ultimoMat);
    }

}
