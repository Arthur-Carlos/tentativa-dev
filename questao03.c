#include <stdio.h>

#define MES 30

int main()
{
    float faturamento[MES];
    float menor, maior, feriados = 0, soma = 0, media;
    int dias_acima_media = 0;

    printf("Digite o faturamento diário para %d dias:\n", MES);
    for (int i = 0; i < MES; i++)
    {
        printf("Dia %d: ", i + 1);
        scanf("%f", &faturamento[i]);
        if (faturamento[i] = 0)
        {
            feriados++;
        }
    }

    menor = maior = faturamento[0];

    for (int i = 0; i < MES; i++)
    {
        if (faturamento[i] < menor)
        {
            menor = faturamento[i];
        }
        if (faturamento[i] > maior)
        {
            maior = faturamento[i];
        }
        soma += faturamento[i];
    }

    media = soma / (MES - feriados);

    for (int i = 0; i < MES; i++)
    {
        if (faturamento[i] > media)
        {
            dias_acima_media++;
        }
    }

    printf("\nMenor faturamento: %.2f\n", menor);
    printf("Maior faturamento: %.2f\n", maior);
    printf("Numero de dias com faturamento acima da media: %d\n", dias_acima_media);

    return 0;
}