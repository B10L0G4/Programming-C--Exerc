#include <stdio.h>

int main() {
 /*int c ,n ; 
n = 1;

for (c= 1; c <= 10; c = c + 1)
{    printf("Teste 01 \n");
    
}*/

/*int c;
c=1;
while (c <=5)
{
 printf("%i \n",c);
 ++c; // adicioma 1 a variavél 

}*/

int  n, f ;
n = 1 ;
f = 5 ;


for (;f >= 1 ; --f)
{
    n *= f ;
    printf ("O número Fatorial é %i \n",n );

}
/*while (f >= n, --f){

    printf("%i \n", t );
    n = n +1;

}*/

return 0 ;
}
