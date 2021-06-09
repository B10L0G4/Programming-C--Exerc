#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n = 10; //atribuindo valor para a variavél 
    float n2 = 6.79; // float para casas decimais, tem precisão de 7  casa decimais   
    char letras ='a'; // char para letras , aqui tb não precisa de parenteses 
    char frase[10]= "Bom Dia "; // quando é mais de um caracter usar aspas nem de parenteses (pelo visto)
    //string é quando há mais de um caracter, deve-se usar s , quando for apenas um caracter usa-se c 
    double n3 = 1.234567; // permite mais casas decimais que uma variavel float, permite maior precisão 
    // tem uma precisão de 15 casas decimais o dobro do que o float, double é uma variavel real com 
    // real precisão dupla 

    
    int valor1, valor2 , soma, sub, multi, div; // posso colocar quantas variaveis quiser na mesma linha desde que sejam de mesma tippo
    // utilização do scanf 
    printf ("Digite o numero \n" );
    scanf("%d",&valor1);// no scanf precisa-se colocar o & para endereçar a avariavel de referencia 
    
    printf ("Digite outro numero \n" );
    scanf("%d", &valor2);

    //operadores aritméticos
    soma = valor1 + valor2; 
    sub= valor1 - valor2;
    multi = valor1 * valor2;
    div = valor1 / valor2;

    printf ("Valor da soma de %d + %d = %d\n",valor1, valor2, soma );
    printf ("Valor da soma de %d - %d = %d\n",valor1, valor2, sub );
    printf ("Valor da soma de %d * %d = %d\n",valor1, valor2, multi );
    printf ("Valor da soma de %d / %d = %d\n",valor1, valor2, div);

    printf ("Exibindo inteiro %d\n", n ); // % é um marcador  e d significa inteiro decimal , 
    // essa marcação significa qyue nessa marcação vai aparecer um valor inteiro decimal. 
    printf ("Exibindo real %f\n", n2 ); // f para float
    printf ("Exibindo  caracter %c\n", letras); // c para char 
    printf ("Exibindo  frases  %s\n", frase);
    printf ("Exibindo  double %f\n", n3); // utiliza f como o float
    printf ("Exibindo  varias variaveis  %d %f %c %s %f \n", n, n2, letras,frase, n3);// para 
    // para diversas variavéis devem ser usadas as mesmas em sequencia . 
printf("Hello World! \n");

system("pause"); // somente windows
return 0;
}