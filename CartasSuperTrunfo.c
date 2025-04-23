#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro das cartas



int main() {

    // Área para definição das variáveis e  cálculos para armazenar as propriedades das cidades

//Variáveis  cidade A01
    
    char estado[15];
    float area;
    char nome[15];
    unsigned long int populacao;
    float PIB;
    char codigoA1[5], codigoA2[5];
    int NPT;
    float PIBpercapita;
    float DensidadeP;
    float DensidadePInvertida;
    float SuperPoder;

//Variáveis  cidade B01

    char estado2[15];
    float area2;
    char nome2[15];
    unsigned long int populacao2;
    float PIB2;
    char codigoB1[5], codigoB2[5];
    int NPT2;
    float PIBpercapita2;
    float DensidadeP2;
    float DensidadePInvertida2;
    float SuperPoder2;



//Inicio e Apresentação do Jogo para o Jogador
    printf ("------------------------------------- \n \n");
    printf ("*_*_*_*_SUPER TRUNFO_*_*_*_* \n \n");
    printf ("Olá, Seja bem vindo ao Jogo Super Trunfo!!! \n");
    printf ("Aqui você vai nos informar duas Cidades e Suas caractéristicas. Vamos começar?! \n \n");

// Área para entrada de dados Cidade 1
    printf ("!!Digite as Caractéristicas da Primeira Cidade!! \n \n");

    printf ("-Digite o nome do Estado: \n");
    scanf ("%s", &estado);

    printf ("-Digite o nome da cidade: \n");
    scanf ("%s", &nome);

    printf ("-Digite a população: \n");
    scanf ("%lu", &populacao);

    printf ("-Digite a área da cidade em 'Km2': \n");
    scanf ("%f", &area);

    printf ("-Digite o PIB em Milhões: \n");
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

    printf ("-Digite o nome do Estado: \n");
    scanf ("%s", &estado2);

    printf ("-Digite o nome da cidade: \n");
    scanf ("%s", &nome2);

    printf ("-Digite a população: \n");
    scanf ("%lu", &populacao2);

    printf ("-Digite a área da cidade em 'Km2': \n");
    scanf ("%f", &area2);

    printf ("-Digite o PIB em Milhões: \n");
    scanf ("%f", &PIB2);

    printf ("-Digite o Número de pontos turísticos: \n");
    scanf ("%d", &NPT2);

    printf("-Digite o Código da Carta: \n");
    scanf ("%s", &codigoB1, &codigoB2);

    printf ("-Carta Cadastrada com Sucesso!!!\n \n");

    //Área de cálculo

    PIBpercapita2  =  PIB2 / populacao2;

    DensidadeP2 = populacao2 / area2;

    DensidadePInvertida = 1 / DensidadeP;

    DensidadePInvertida2 = 1 / DensidadeP2;

    SuperPoder = populacao + area + PIB + PIBpercapita + DensidadePInvertida + NPT;
 
    SuperPoder2 = populacao2 + area2 + PIB2 + PIBpercapita2 + DensidadePInvertida2 + NPT2;


// Área para exibição dos dados da cidade 1

    printf ("CARTA 1  \n  \n");
    printf ("-Código da cidade:%s \n", codigoA1, codigoA2);
    printf ("-Nome do estado:%s \n", estado);
    printf ("-Nome da cidade:%s \n", nome);
    printf ("-População:%d \n", populacao);
    printf ("-Área da cidade:%.2f Km2 \n", area);
    printf ("-PIB:%.2f Milhões \n", PIB);
    printf ("-Número de pontos turisticos:%d \n", NPT);
    printf ("-Densidade Populacional:%.2f Km2 \n", DensidadeP);
    printf ("-PIB per Capita:%.2f \n", PIBpercapita);
    printf ("-O Super Poder da Carta 1 é:%.2f \n \n", SuperPoder);
    
    
 // Área para exibição dos dados da cidade 1

    printf ("CARTA 2 \n \n");
    printf ("-Código da cidade:%s \n", codigoB1, codigoB2);
    printf ("-Nome do estado:%s \n", estado2);
    printf ("-Nome da cidade:%s \n", nome2);
    printf ("-População:%d \n", populacao2);
    printf ("-Área da cidade:%.2f Km2 \n", area2);
    printf ("-PIB:%.2f Milhões \n", PIB2);
    printf ("-Número de pontos turisticos:%d \n", NPT2);
    printf ("-Densidade Populacional:%.2f Km2 \n", DensidadeP2);
    printf ("-PIB per Capita:%.2f \n", PIBpercapita2);
    printf ("-O Super Poder da Carta 2 é:%.2f \n \n", SuperPoder2);

    printf("Comparação das Cartas:\n \n");
    
    //População
    if( populacao > populacao2){
        printf("População: Carta 1 Venceu.\n");
    }
        else{
    printf("População: Carta 2 Venceu.\n");
    }

    //Área
    if( area > area2){
        printf("Área: Carta 1 Venceu.\n");
    }
        else{
    printf("Área: Carta 2 Venceu.\n");
    }

    //PIB
    if( PIB > PIB2){
        printf("PIB: Carta 1 Venceu.\n");
    }
        else{
    printf("PIB: Carta 2 Venceu.\n");
    }

    //Número de Pontos Túristicos
    if( NPT > NPT2){
        printf("Número de Pontos Túristicos: Carta 1 Venceu.\n");
    }
        else{
    printf("Número de Pontos Túristicos: Carta 2 Venceu.\n");
    }

    //Densidade Populacional
    if( DensidadeP > DensidadeP2){
        printf("Densidade Populacional: Carta 1 Venceu.\n");
    }
        else{
    printf("Densidade Populacional: Carta 2 Venceu.\n");
    }

    //PIB Percapita
    if( PIBpercapita > PIBpercapita2){
        printf("PIB Percapita: Carta 1 Venceu.\n");
    }
        else{
    printf("PIB Percapita: Carta 2 Venceu.\n");
    }

    //Super Poder
    if( SuperPoder > SuperPoder2){
        printf("Super Poder: Carta 1 Venceu a Coparação.\n");
    }
        else{
    printf("Super Poder: Carta 2 Venceu a Coparação. \n \n");
    }

    printf("Muito Obrigado!! Até a Próxima.\n \n");

    

    return 0;                                             
}