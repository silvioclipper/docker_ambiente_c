#include <stdio.h>
#include "./packages/somar.h"

int main(){
    //delete desta linha até a linha antes do colchete
    float valor_1 = 1.01;
    float valor_2 = 2.02;
    float resultado = somar(valor_1,valor_2);

    printf  (
                "%s%.2f%s",
                "***************************************************************************\n\
                \nParabéns!!!\
                \nO ambiente esta pronto para trabalhar!\
                \nA biblioteca particular resultou: ",resultado,
                "\nDelete o que esta dentro do arquivo main -> main(){delete_aqui} e inicie a sua aplicação\
                \nDelete a pasta packages, caso não queira criar biblioteca particular.\n\
                \nsilvadias seu dev amigo!\n\
                \n****************************************************************************\n"
            );
    
    return (0);
    //delete até aqui. Dentro do colchete inicie o seu código. Depois dê o comando no terminal docker-compose up
}