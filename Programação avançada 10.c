//Imprimir um triângulo de n asteriscos.

void imprimeTriangulo (int n) {
    for (int l=1; l<=n; l++) {
        for (int c=1; c<=l; c++)
            printf ("*");
        printf ("\n");
    }    
}
int main()
{
    int n;
    printf ("Qual o tamanho desejado ?");
    scanf ("%d", &n);
    printf ("Triangulo de %d\n",n);
    imprimeTriangulo(n);    
    return 0;
}
