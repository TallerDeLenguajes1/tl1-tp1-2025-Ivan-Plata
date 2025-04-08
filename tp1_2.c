#include <stdio.h>
// 4.a
int cuadradoNumero(int num);
// 4.b
void cuadradoNumeroVoid(int *punt);
// 4.c
void mostrarVariable(int *var);
// 4.d
void Invertir(int *a, int *b);
// 4.e
void orden(int *a, int *b);

// 4.f
int main()
{

    int a = 6, b = 12, c = 3, d = 9;

    printf("%d\n", cuadradoNumero(a));
    printf("%d\n", cuadradoNumero(c));
    cuadradoNumeroVoid(&a);
    cuadradoNumeroVoid(&c);
    printf("%d\n", a);
    printf("%d\n", c);
    mostrarVariable(&b);
    mostrarVariable(&d);
    Invertir(&c, &b);
    Invertir(&a, &d);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    orden(&c, &d);
    orden(&a, &b);
    printf("%d , %d\n", a, b);
    printf("%d , %d\n", c, d);

    return 0;
}

void orden(int *a, int *b)
{
    int aux;
    aux = *a;
    if (*b < *a)
    {
        *a = *b;
        *b = aux;
    }
}

void Invertir(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void mostrarVariable(int *var)
{
    printf("%d ", *var);
    printf("%p ", var);
}

void cuadradoNumeroVoid(int *punt)
{
    *punt = *punt * *punt;
}

int cuadradoNumero(int num)
{
    return (num * num);
}
