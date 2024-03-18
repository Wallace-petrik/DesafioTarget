#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    int numero = 0;
    int a = 0,b = 1,fibonacci;

    printf("\nEntre com um número qualquer para verificar se pertence ou não à sequência de Fibonacci: ");
        scanf("%d",&numero);

    do{

        fibonacci = a + b;
        a = b;
        b = fibonacci;

    }while(numero != fibonacci && fibonacci < numero);

    if(numero==fibonacci || numero == 0){
        printf("\nO número %d pertence à sequência de Fibonacci\n",numero);
    }else{
        printf("\nO número %d não pertence à sequência de Fibonacci\n",numero);
    }
    return 0;
}
