#include <stdio.h>
typedef struct proizvod
    {
        char ime[100];
        double cena, kolicina;
    }proizvod;
int main ()
{
    int N;
    scanf("%d", &N);
    proizvod ProizvodBroj[N];
    double zbir=0;
    for (int i=1;i<=N;i++)
    {
        scanf("%s", &ProizvodBroj[i].ime);
        scanf("%lf", &ProizvodBroj[i].cena);
        scanf("%lf", &ProizvodBroj[i].kolicina);
        zbir+=ProizvodBroj[i].kolicina*ProizvodBroj[i].cena;
    }
    for (int i=1;i<=N;i++) {
        printf("%d. %s\t%.2lf x %.1lf = %.2lf\n", i, ProizvodBroj[i].ime, ProizvodBroj[i].cena, ProizvodBroj[i].kolicina, (ProizvodBroj[i].cena*ProizvodBroj[i].kolicina));
    }
    printf("Total: %.2f", zbir);
    return 0;
}
