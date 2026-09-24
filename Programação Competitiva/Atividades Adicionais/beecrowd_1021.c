#include <stdio.h>
#include <math.h>

int main() {

    double x;
    int valor;

    scanf("%lf", &x);

    valor = round(x * 100);

    int n100, n50, n20, n10, n5, n2;
    int m1, m050, m025, m010, m005, m001;

    n100 = valor / 10000;
    valor %= 10000;

    n50 = valor / 5000;
    valor %= 5000;

    n20 = valor / 2000;
    valor %= 2000;

    n10 = valor / 1000;
    valor %= 1000;

    n5 = valor / 500;
    valor %= 500;

    n2 = valor / 200;
    valor %= 200;

    m1 = valor / 100;
    valor %= 100;

    m050 = valor / 50;
    valor %= 50;

    m025 = valor / 25;
    valor %= 25;

    m010 = valor / 10;
    valor %= 10;

    m005 = valor / 5;
    valor %= 5;

    m001 = valor;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m050);
    printf("%d moeda(s) de R$ 0.25\n", m025);
    printf("%d moeda(s) de R$ 0.10\n", m010);
    printf("%d moeda(s) de R$ 0.05\n", m005);
    printf("%d moeda(s) de R$ 0.01\n", m001);

    return 0;
}
