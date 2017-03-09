#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"

/*Um numero e primo se ele tem exatamente dois divisores naturais
distintos: o numero um e ele mesmo.
O programa deve ter os seguintes passos:
Ler um numero n
Testar se nenhum dos numeros entre 2 e (n - 1) divide n.
Lembre-se que o operador % retorna o resto da divisao inteira.
Portanto (a % b) e zero se, e somente se, b divide a.
Note que nao e necessario testar os numeros entre bn=2c + 1 e n 􀀀 1.*/
int main()
{
    int n, i, primo = 1;
    printf("Digite um numero\n");
    n = GetInt();

    for (i = 2; primo && (i <= sqrt(n)); i++);
    if ( (n % i) == 0)
    primo = 0;
    if (primo)
        printf("%d e um numero primo\n", n);
    else
        printf("%d nao e um numero primo\n",n);

    return 0;
}
