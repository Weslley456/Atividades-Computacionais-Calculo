//////////////// ATIVIDADE 3 ////////////////////
/////////////// CALCULO ADS ////////////////////
// NOME COMPLETO 1: Weslley Novelino Cavallaro
// NOME COMPLETO 2: João Lucas Altafini Batista
// NOME COMPLETO 3: Victor Augusto Nascimento
// NOME COMPLETO 4:
// NOME COMPLETO 5:
///////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <math.h>

///////////////////////////////////////////////////////////////////
///       FUNCAO A SER IMPLEMENTADA PELO GRUPO                  ///
///       FUNCAO RECEBE OPCAO (inteiro), k e x (float)         ///
///       FUNCAO IRA RETORNAR A DERIVADA de f(x) das seguintes funcoes avaliada em x: ///
///               f(x) = x^k - SE OPCAO 1                      ///
///               f(x) = ln(x) - SE OPCAO 2                      ///
///               f(x) = tan(x) - SE OPCAO 3      ///
///               -1234567   - SE OUTRA OPCAO OU SE X INVALIDO NO DOMINIO   ///
///////////////////////////////////////////////////////////////////

float derivada(int opcao, float k, float x)
{

    if(opcao == 1){
        
        return k*pow(x,k-1);
        
    }else if(opcao == 2){
        
        if(x == 0.0f){
            
            return -1234567;
            
        }else{
            
            return 1/x;
            
        }
        
    }else if(opcao == 3){
        
        if((cos(x) <= 0.000004 && cos(x) >= -0.000004)){
            
            return -1234567;
            
        }else{
            
            return pow(1/cos(x),2);
            
        }
        
    }else{
        
        return -1234567;
        
    }

}

/////////////////////////
/// CODIGO PARA TESTE ///
////////////////////////
int main()
{
    float k, x;
    int opcao;
   
    x = 2;
    k = 3;
       
    for (opcao = 1; opcao <= 4; opcao++){
        if (opcao == 1){
            printf("OPCAO %d: Se f(x) = x^%.2f, entao f'(%.2f) = %f\n",opcao,k,x,derivada(opcao,k,x));
            }
        else if (opcao == 2){
                if (derivada(opcao,k,x)==-1234567)
                    {
                        printf("OPCAO %d: Se f(x) = ln(x), entao f'(%.2f) = NAO EXISTE\n",opcao,x);
                    }
                else{
                    printf("OPCAO %d: Se f(x) = ln(x), entao f'(%.2f) = %f\n",opcao,x,derivada(opcao,k,x));
                }
        }
        else if (opcao == 3){
                if (derivada(opcao,k,x)==-1234567)
                    {
                        printf("OPCAO %d: Se f(x) = tan(x), entao f'(%.2f) = NAO EXISTE\n",opcao,x);
                    }
                else{
                        printf("OPCAO %d: Se f(x) = tan(x), entao f'(%.2f) = %f\n",opcao,x,derivada(opcao,k,x));
                    }
        }
        else{
            printf("OPCAO %d: OPCAO INEXISTENTE", opcao);
        }
    }  
    return 0;
}