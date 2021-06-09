#include <stdio.h>  // Defini diretivas de biblioteca pra printf e scanf//
#include <conio.h> // definição de biblioterca para getch //

main()
{
    int num, quad;
    printf("Digite o valor inteiro \n");
    scanf("%d",&num);
    quad = num * num;
    printf("O quadrado de %d =%d \n",num ,quad);
    printf("Pressiono qualquer tecla para finalizar");
    getch();
}