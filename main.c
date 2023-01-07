#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int Calculo (float vGas, float vEta );


int main(){
    setlocale(LC_ALL,"Portuguese");

    printf("##### ECO CAR ##### \n");

    float precoGasolina, precoEtanol;

    printf(" Qual o preço da Gasolina? \n");
    scanf("%f", &precoGasolina);

    printf(" Qual o preço do Etanol? \n");
    scanf("%f", &precoEtanol);

    int resultado = Calculo( precoGasolina, precoEtanol);
    
    if(resultado == 0)
    {
        printf("compensa abastecer com gasolina \n");
    }
    else if (resultado == 1)
    {
        printf("compensa abastecer com etanol \n");
    }
    else{
        printf("são equivalentes, tanto faz \n");
    }
        
    
    
    system("pause");
    return 0;
}

int Calculo (float vGas, float vEta ){
    //preço da gasolina * 0.7 = preco máximo do álcool
    if((vGas * 0.70) < vEta ){
        //compensa abastecer com gasolina
        return 0;
    }
    else if((vGas * 0.70) > vEta){
        //compensa abasteer com etÃ¡nol
        return 1;
    }
    else{
        //valores sÃ£o equivalentes
        return 2;
    }
}

