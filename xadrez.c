#include <stdio.h>

int main(){

    int t = 1, b = 1;

//movendo a torre com WHILE

    printf("**Movendo a torre**\n");

    while (t <=5 ){
    printf("%d direita\n", t);
    t++;
    }

//movendo o bispo com DO-WHILE

    printf("**Movendo o bispo**\n");

    do {
    printf("%d cima, direita\n", b);
    b++;
    }while (b <= 5);

//movendo a rainha com FOR

    printf("**Movendo a rainha**\n");

    for ( int r = 1; r <= 8; r++)
    {
        printf("%d esquerda\n", r);
    }
    


return 0;
    
}







