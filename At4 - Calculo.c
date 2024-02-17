// ATIVIDADE 4 //
// CALCULO ADS //
// NOME COMPLETO 1: Weslley Novelino Cavallaro
// NOME COMPLETO 2:
// NOME COMPLETO 3:
// NOME COMPLETO 4:
// NOME COMPLETO 5:
///////////////////

///////////////////////////////////////////////////////////////////
///       FUNCAO A SER IMPLEMENTADA PELO GRUPO                  ///
///       FUNCAO RECEBE OPCAO (inteiro), k, a, b (float)         ///
///       FUNCAO IRA RETORNAR A INTEGRAL DEFINIDA de f(x) EM RELACAO A X DE a ATE b das seguintes funcoes avaliada em x: ///
///               f(x) = x^k - SE OPCAO 1                      ///
///               f(x) = 1/x - SE OPCAO 2                      ///
///               -1234567   - SE OUTRA OPCAO OU SE X INVALIDO NO DOMINIO   ///
///////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <math.h>


float integral_definida(int opcao, float k, float a, float b)
{
  
    if(opcao == 1){
        
        if(k < 0){
            
            if(a*b >= 0){
                
                if(k == -1){
                    
                    return log(fabs(b)) - log(fabs(a));
                    
                }else{
                    
                    return (pow(b, (k+1)))/(k+1) - (pow(a, (k+1)))/(k+1);
                    
                }
            }else{
                
                return -1234567;
                
            }
        }else{
            
            return (pow(b, (k+1)))/(k+1) - (pow(a, (k+1)))/(k+1);
            
        }
                
  
    }if(opcao == 2){
        
        if(a*b <= 0){
            
            return -1234567;
            
        }else{
        
        	return log(fabs(b)) - log(fabs(a));
        
        }
    }

}


/////////////////////////
/// CODIGO PARA TESTE ///
////////////////////////
int main()
{
    float k, a, b;
    int opcao;
   
    a = 2; // Entradas para teste
    b = 3; // Entradas para teste
    k = -1; // Entradas para teste
       
    for (opcao = 1; opcao <= 3; opcao++)
    {
        if (opcao == 1)
        {
            if (integral_definida(opcao,k,a,b) ==-1234567)
            {
                printf("OPCAO %d:integral (a = %.2f) ate (b = %.2f) x^%.2f dx  = DIVERGE\n",opcao,a,b,k);
            }
            else
            {
                printf("OPCAO %d: integral (a = %.2f) ate (b = %.2f) x^%.2f dx  = %f\n",opcao,a,b,k,integral_definida(opcao,k,a,b));
            }
        }
        else if (opcao == 2)
        {
            if (integral_definida(opcao,k,a,b) ==-1234567)
            {
                printf("OPCAO %d:integral (a = %.2f) ate (b = %.2f) 1/x dx  = DIVERGE \n",opcao,a,b);
            }
            else
            {
                printf("OPCAO %d: integral (a = %.2f) ate (b = %.2f) 1/x dx  = %f \n",opcao,a,b,integral_definida(opcao,k,a,b));
            }
        }
        else
        {
            printf("OPCAO %d: OPCAO INEXISTENTE \n", opcao);
        }
    }  
    return 0;
}