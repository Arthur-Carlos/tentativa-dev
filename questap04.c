#include <stdio.h>

int main()
{
    double sp = 67836.43;
    double rj = 36678.66;
    double mg = 29229.88;
    double es = 27165.48;
    double outros = 19849.53;
    double total = sp + rj + mg + es + outros;
    /* Caso queiram uma versão interativa:
    double sp, rj, mg, es, outros;
    printf("Digite o faturamento de SP: ");
    scanf("%lf", &sp);
    printf("Digite o faturamento de RJ: ");
    scanf("%lf", &rj);
    printf("Digite o faturamento de MG: ");
    scanf("%lf", &mg);
    printf("Digite o faturamento de ES: ");
    scanf("%lf", &es);
    printf("Digite o faturamento de Outros: ");
    scanf("%lf", &outros);
    */
    printf("Percentual de representação por estado:\n");
    printf("SP: %.2f%%\n", (sp / total) * 100);
    printf("RJ: %.2f%%\n", (rj / total) * 100);
    printf("MG: %.2f%%\n", (mg / total) * 100);
    printf("ES: %.2f%%\n", (es / total) * 100);
    printf("Outros: %.2f%%\n", (outros / total) * 100);

    return 0;
}