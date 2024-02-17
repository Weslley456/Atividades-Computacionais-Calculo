// João Lucas Altafini Batista
// Weslley Novelino Cavallaro


#include <stdio.h>
#include <math.h>

/////////////////////////////////////////////////////////////////////////////////////
///          FUNCAO A SER IMPLEMENTADA PELO GRUPO                                 ///
///          FUNCAO RECEBE OPCAO E ANGULO                                         ///
///          FUNCAO IRA RETORNAR:                                                 ///
///          VALOR EM RADIANOS SE ENTRADA EM GRAUS - SE OPCAO 1                   ///
///          VALOR EM GRAUS SE ENTRADA EM RADIANOS - SE OPCAO 2                   ///
///          RETORNAR -1 SE QUALQUER OUTRA OPCAO                                  ///
/////////////////////////////////////////////////////////////////////////////////////

float converte(int opcao, float angulo)
{
    
    float resultado;

    if(opcao == 1){

        printf("Digite um angulo: \n");
        scanf("%f", &angulo);

        resultado = (angulo * M_PI) / 180;
    
    }else{

        printf("Digite seu valor em radianos: \n");
        scanf("%f", &angulo);

        resultado = (180 * angulo) / M_PI;

    }

    return (resultado);
}

/////////////////////////////////////////////////////////////
/// CODIGO PARA TESTE - NAO MODIFICAR ELE    ///
////////////////////////////////////////////////////////////
int main()
{
    
    float angulo;
    int opcao;
       
    for (opcao = 1; opcao <= 3; opcao++){
        
        if (opcao == 1){
            
            printf("OPCAO %d: O angulo %f em graus = %f radianos\n",opcao,angulo,converte(opcao, angulo));
            
            }
            
        else if (opcao == 2){
            
            printf("OPCAO %d: O angulo %.4f em radianos = %.4f graus\n", opcao,angulo,converte(opcao, angulo));
        
        }
        
        else{
            
            printf("OPCAO %d: OPCAO INEXISTENTE", opcao);
            
        }
    }  
    return 0;
}