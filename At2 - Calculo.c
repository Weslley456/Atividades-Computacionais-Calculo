//////////////// ATIVIDADE 2 ////////////////////
/////////////// CALCULO ADS ///////////////////////////////////////
// NOME COMPLETO 1: Weslley Novelino Cavallaro                  ///
// NOME COMPLETO 2: João Lucas Latafini Batista                 ///
// NOME COMPLETO 3: Victor Hugo de Jesus Augusto Nascimento     ///
// NOME COMPLETO 4:                                             ///
// NOME COMPLETO 5:                                             ///
///////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <math.h>

////////////////////////////////////////////////////////////////////////////////////
///       FUNCAO A SER IMPLEMENTADA PELO GRUPO                                   ///
///       FUNCAO RECEBE OPCAO (inteiro) E ANGULO [rad]                           ///
///       FUNCAO IRA RETORNAR:                                                   ///
///               return sin(ANGULO) - SE OPCAO 1                                ///
///               return cos(ANGULO) - SE OPCAO 2                                ///
///               return tan(ANGULO) - SE OPCAO 3 E ANGULO VALIDO NO DOMINIO     ///
///               return -123456789   - SE OPCAO 3 E ANGULO INVALIDO NO DOMINIO  ///
///               return -1 SE QUALQUER OUTRA OPCAO                              ///
////////////////////////////////////////////////////////////////////////////////////

float trigonometrica(int opcao, float x)
{
   
    if(opcao == 1){
        
        return (sin(x));
    
    }else if(opcao == 2){

       return (cos(x));
            
    }else if(opcao == 3){
            
            if(cos(x) == 0){
                return(-123456789);
            }else{

                return (tan(x));
            }
        
    }else{
            
        return(-1);
            
        }


    }



int main()
{
    float x,y;
    int opcao, k;
   
    x = M_PI/9;
       
    for (opcao = 1; opcao <= 4; opcao++){
        if (opcao == 1){
            printf("OPCAO %d: sin(%.4f [rad]) = %.4f\n",opcao,x,trigonometrica(opcao, x));
            }
        else if (opcao == 2){
             printf("OPCAO %d: cos(%.4f [rad]) = %.4f\n",opcao,x,trigonometrica(opcao, x));
        }
        else if (opcao == 3){
                y = trigonometrica(opcao, x);
                if (y==-123456789)
                    {
                        printf("OPCAO %d: tan(%.4f [rad]) NAO EXISTE\n",opcao,M_PI*(0.5+k));
                    }
                else{
                        printf("OPCAO %d: tan(%.4f [rad]) = %.4f\n",opcao,x,y);
                    }
        }
        else{
            printf("OPCAO %d: OPCAO INEXISTENTE", opcao);
        }
    }  
    return 0;
}