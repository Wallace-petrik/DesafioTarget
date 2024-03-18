#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    int numero = 0;
    int a = 0,b = 1,fibonacci;

    printf("\nEntre com um n�mero qualquer para verificar se pertence ou n�o � sequ�ncia de Fibonacci: ");
        scanf("%d",&numero);

    do{

        fibonacci = a + b;
        a = b;
        b = fibonacci;

    }while(numero != fibonacci && fibonacci < numero);

    if(numero==fibonacci || numero == 0){
        printf("\nO n�mero %d pertence � sequ�ncia de Fibonacci\n",numero);
    }else{
        printf("\nO n�mero %d n�o pertence � sequ�ncia de Fibonacci\n",numero);
    }
    return 0;
}
