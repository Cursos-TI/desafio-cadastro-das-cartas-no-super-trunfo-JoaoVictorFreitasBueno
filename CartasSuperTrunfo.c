#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro das cartas



int main() {

    // Área para definição das variáveis e  cálculos para armazenar as propriedades das cidades

//Variáveis  cidade A01

    float area;
    char nome[15];
    int populacao;
    float PIB;
    char codigoA1[5], codigoA2[5];
    int NPT;
    float PIBpercapita;
    float DensidadeP;

//Variáveis  cidade B01

    float area2;
    char nome2[15];
    int populacao2;
    float PIB2;
    char codigoB1[5], codigoB2[5];
    int NPT2;
    float PIBpercapita2;
    float DensidadeP2;



//Inicio e Apresentação do Jogo para o Jogador
    printf ("------------------------------------- \n \n");
    printf ("*_*_*_*_SUPER TRUNFO_*_*_*_* \n \n");
    printf ("Olá, Seja bem vindo ao Jogo Super Trunfo!!! \n");
    printf ("Aqui você vai nos informar duas Cidades e Suas caractéristicas. Vamos começar?! \n \n");

// Área para entrada de dados Cidade 1
    printf ("!!Digite as Caractéristicas da Primeira Cidade!! \n \n");

    printf ("-Digite o nome da cidade: \n");
    scanf ("%s", &nome);

    printf ("-Digite a população: \n");
    scanf ("%d", &populacao);

    printf ("-Digite a área da cidade em 'Km2': \n");
    scanf ("%f", &area);

    printf ("-Digite o PIB: \n");
    scanf ("%f", &PIB);

    printf ("-Digite o Número de pontos turísticos: \n");
    scanf ("%d", &NPT);

    printf("-Digite o Código da Carta: \n");
    scanf ("%s", &codigoA1, &codigoA2);

    printf ("-Carta Cadastrada com Sucesso!!! \n \n");

    //Área de cálculo cidade 1

    PIBpercapita  =  PIB / populacao ;

    DensidadeP = populacao / area;

 //Área para entrada de dados Cidade 2
    
    printf ("!!Digite as Caractéristicas da Segunda Cidade!! \n \n");

    printf ("-Digite o nome da cidade: \n");
    scanf ("%s", &nome2);

    printf ("-Digite a população: \n");
    scanf ("%d", &populacao2);

    printf ("-Digite a área da cidade em 'Km2': \n");
    scanf ("%f", &area2);

    printf ("-Digite o PIB: \n");
    scanf ("%f", &PIB2);

    printf ("-Digite o Número de pontos turísticos: \n");
    scanf ("%d", &NPT2);

    printf("-Digite o Código da Carta: \n");
    scanf ("%s", &codigoB1, &codigoB2);

    printf ("-Carta Cadastrada com Sucesso!!!\n \n");

    //Área de cálculo

    PIBpercapita2  =  PIB2 / populacao2;

    DensidadeP2 = populacao2 / area2;
    

// Área para exibição dos dados da cidade 1

    printf ("Carta 1  \n  \n");
    printf ("-Nome da cidade:%s \n", nome);
    printf ("-População:%d \n", populacao);
    printf ("-Área da cidade:%.2f Km2 \n", area);
    printf ("-PIB:%.2f \n", PIB);
    printf ("-Número de pontos turisticos:%d \n", NPT);
    printf ("-Densidade Populacional:%.2f Km2 \n", DensidadeP);
    printf ("-PIB per Capita:%.2f \n \n", PIBpercapita);
    printf ("-Código da cidade:%s \n", codigoA1, codigoA2);
    
    
 // Área para exibição dos dados da cidade 1

    printf ("Carta 2 \n \n");
    printf ("-Nome da cidade:%s \n", nome2);
    printf ("-População:%d \n", populacao2);
    printf ("-Área da cidade:%.2f Km2 \n", area2);
    printf ("-PIB:%.2f \n", PIB2);
    printf ("-Número de pontos turisticos:%d \n", NPT2);
    printf ("-Densidade Populacional:%.2f Km2 \n", DensidadeP2);
    printf ("-PIB per Capita:%.2f \n", PIBpercapita2);
    printf ("-Código da cidade:%s \n", codigoB1, codigoB2);



    return 0;                                             
}