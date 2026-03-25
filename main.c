#include <stdio.h>

long long pot(long long base, int exp) {
    long long resultado = 1;
    for (int i = 0; i < exp; i++)
        resultado *= base;
    return resultado;
}

long long pot_eficiente(long long base, int exp) {
    /* IMPLEMENTAR ESTA FUNÇÃO COM ALGORITMO MAISEFICIENTE QUE POT() */
    if(exp == 0)    //Se exp for 0
    {
        return 1;
    }
    else if (exp %2 == 0) //Se exp for par
    {
        int meio = pot_eficiente(base, exp/2);
        return meio*meio;
    }
    else
    {
        return base*pot_eficiente(base, exp - 1);
    }
    return 0; // Substitua este retorno pelo resultado correto
}

int main() {
    long long base;
    int exp;
    scanf("%lld %d", &base, &exp);

    long long r1 = pot(base, exp);
    long long r2 = pot_eficiente(base, exp);

    printf("%lld\n%lld\n", r1, r2);
    return 0;
}
