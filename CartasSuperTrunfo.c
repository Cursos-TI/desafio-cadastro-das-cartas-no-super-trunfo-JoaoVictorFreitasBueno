#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas



int main() {

    // Área para definição das variáveis para armazenar as propriedades das cidades

    
    float area;
    char nome[15];
    int populacao;
    float PIB;
    char codigo1[5], codigo2[5];
    int NPT;
    
    // Área para entrada de dados

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &nome);

    printf ("Digite a população: \n");
    scanf ("%d", &populacao);

    printf ("Digite a área da cidade em 'Km2': \n");
    scanf ("%f", &area);

    printf ("Digite o PIB: \n");
    scanf ("%f", &PIB);

    printf ("Digite o Número de pontos turísticos: \n");
    scanf ("%d", &NPT);

    printf("Digite o Código da Carta: \n");
    scanf ("%s", &codigo1, &codigo2);


    // Área para exibição dos dados da cidade

    printf ("-Nome da cidade:%s \n", nome);
    printf ("-População:%d \n", populacao);
    printf ("-Área da cidade:%.2f Km2 \n", area);
    printf ("-PIB:%.2f Milhões \n", PIB);
    printf ("-Número de pontos turisticos:%d \n", NPT);
    printf ("-Código da cidade:%s \n", codigo1, codigo2);
    printf ("-Carta Cadastrada com Sucesso!!!");
    


    return 0;                                             
}
