#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro das cartas



int main() {

// Área para definição das variáveis e  cálculos para armazenar as propriedades das cidades


//Variáveis  cidade A01

    char pais[15];
        float area;
            char nome[20];
                float populacao;
                    float PIB;
                        char codigoA1[5], codigoA2[5];
                    int NPT;
                float PIBpercapita;
            float DensidadeP;
        float DensidadePInvertida;
    float SuperPoder;

//Variáveis  cidade B01

    float pais2[20];
        float area2;
            char nome2[15];
                float populacao2;
                    float PIB2;
                        char codigoB1[5], codigoB2[5];
                    int NPT2;
                float PIBpercapita2;
            float DensidadeP2;
        float DensidadePInvertida2;
    float SuperPoder2;


    int opcao;

//Inicio e Apresentação do Jogo para o Jogador e Menu Interativo
    printf ("------------------------------------- \n \n");
    printf ("*_*_*_*_SUPER TRUNFO_*_*_*_* \n \n");
        printf ("Olá, Seja bem vindo ao Jogo Super Trunfo!!! \n\n");
        printf ("Menu Inicial\n \n");
        printf ("( 1 ): Iniciar Jogo.\n");
        printf ("( 2 ): Regras do Jogo.\n");
        printf ("( 3 ): Sair do Jogo.\n \n");
        printf("Escolha uma Opção e aperte ENTER: ");
            scanf("%d", &opcao);


    switch (opcao)
    {
    case 1:
        
    printf ("\n\nAqui você vai nos informar duas Cidades e Suas caractéristicas. \n \n");

// Área para entrada de dados Cidade 1
    printf ("!!Digite as Caractéristicas da Primeira Cidade!! \n \n");

printf ("-Digite o nome do País (Ultilize '-' ao invés do ESPAÇO): \n");
    scanf ("%s", &pais);

printf ("-Digite o nome da cidade (Ultilize '-' ao invés do ESPAÇO): \n");
    scanf ("%s", &nome);

printf ("-Digite a população: \n");
    scanf ("%f", &populacao);

printf ("-Digite a área da cidade em 'Km2': \n");
    scanf ("%f", &area);

printf ("-Digite o PIB em Milhões: \n");
    scanf ("%f", &PIB);

printf ("-Digite o Número de pontos turísticos: \n");
    scanf ("%d", &NPT);

printf("-Digite o Código da Carta: \n");
    scanf ("%s", &codigoA1, &codigoA2);

printf ("-Carta Cadastrada com Sucesso!!! \n \n");

//Área para entrada de dados Cidade 2
    
    printf ("!!Digite as Caractéristicas da Segunda Cidade!! \n \n");

printf ("-Digite o nome do País (Ultilize '-' ao invés do ESPAÇO): \n");
    scanf ("%s", &pais2);

    printf ("-Digite o nome da cidade (Ultilize '-' ao invés do ESPAÇO): \n");
    scanf ("%s", &nome2);

printf ("-Digite a população: \n");
    scanf ("%f", &populacao2);

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

PIBpercapita  =  PIB / populacao ;

DensidadeP = populacao / area;

PIBpercapita2  =  PIB2 / populacao2;

DensidadeP2 = populacao2 / area2;

DensidadePInvertida = 1 / DensidadeP;

DensidadePInvertida2 = 1 / DensidadeP2;

SuperPoder = populacao + area + PIB + PIBpercapita + DensidadePInvertida + NPT;

SuperPoder2 = populacao2 + area2 + PIB2 + PIBpercapita2 + DensidadePInvertida2 + NPT2;



        // Área para exibição dos dados da cidade 1

    printf ("CARTA 1  \n  \n");
    printf ("-Código da cidade:%s \n", codigoA1, codigoA2);
    printf ("-Nome do País:%s \n", pais);
    printf ("-Nome da cidade:%s \n", nome);
    printf ("-População:%.2f \n", populacao);
    printf ("-Área da cidade:%.2f Km2 \n", area);
    printf ("-PIB:%.2f Milhões \n", PIB);
    printf ("-Número de pontos turisticos:%d \n", NPT);
    printf ("-Densidade Populacional:%.2f Km2 \n", DensidadeP);
    printf ("-PIB per Capita:%.2f \n", PIBpercapita);
    printf ("-O Super Poder da Carta 1 é:%.2f \n \n", SuperPoder);


// Área para exibição dos dados da cidade 2

printf ("CARTA 2 \n \n");
    printf ("-Código da cidade:%s \n", codigoB1, codigoB2);
    printf ("-Nome do País:%s \n", pais2);
    printf ("-Nome da cidade:%s \n", nome2);
    printf ("-População:%.2f \n", populacao2);
    printf ("-Área da cidade:%.2f Km2 \n", area2);
    printf ("-PIB:%.2f Milhões \n", PIB2);
    printf ("-Número de pontos turisticos:%d \n", NPT2);
    printf ("-Densidade Populacional:%.2f Km2 \n", DensidadeP2);
    printf ("-PIB per Capita:%.2f \n", PIBpercapita2);
    printf ("-O Super Poder da Carta 2 é:%.2f \n \n", SuperPoder2);

    //Comparação das Cartas Por uso do Switch.

    int opcao2;

    printf("Primeira comparação!:\n \n");
        printf("-(Opção 1):Comparar População das Cidades.\n");
        printf("-(Opção 2):Comparar Área das Cidades.\n");
        printf("-(Opção 3):Comparar PIB das Cidades.\n");
        printf("-(Opção 4):Comparar Numero de Pontos Turisticos das Cidades.\n");
        printf("-(Opção 5):Comparar Densidade Populacional das Cidades.\n\n");
        printf("Digite qual Opção Deseja Comparar e Pressione ENTER!!:");
            scanf("%d", &opcao2);
    
    

    switch (opcao2)
    {
        case 1:

        float populacaoMaior;
            printf("\n\nPaís 1: %s ",pais);
            printf("X País 2: %s \n", pais2);
            printf("-Comparação Populacional.\n");
            printf("-População 1= %.2f\n",populacao);
            printf("-População 2= %.2f\n", populacao2);
        
        populacaoMaior = ( populacao > populacao2) ?
        printf("População: Carta 1 Venceu.\n\n"):
        printf("População: Carta 2 Venceu.\n\n");
    break;

        case 2:

        float areamaior;
            printf("\n\nPaís 1: %s ",pais);
            printf("X País 2: %s \n", pais2);
            printf("-Comparação Territórial.\n");
            printf("-Área 1= %.2f \n",area);
            printf("-Área 2= %.2f \n",area2);
        
        areamaior = ( area > area2) ? 
        printf("Área: Carta 1 Venceu.\n\n"): 
        printf("Área: Carta 2 Venceu.\n\n");
    break;

        case 3:

        float PIBMAIOR;
            printf("\n\nPaís 1: %s ",pais);
            printf("X País 2: %s \n", pais2);
            printf("-Comparação Monetária.\n");
            printf("-PIB 1= %.2f Milhões \n",PIB);
            printf("-PIB 2= %.2f Milhões\n", PIB2);
        
        PIBMAIOR = ( PIB > PIB2) ? 
        printf("PIB: Carta 1 Venceu.\n\n"):
        printf("PIB: Carta 2 Venceu.\n\n");
    break;

        case 4:

        int NPTMaior;
            printf("\n\nPaís 1: %s ",pais);
            printf("X País 2: %s \n", pais2);
            printf("-Comparação Túristica.\n");
            printf("-Pontos Túristicos 1= %d \n",NPT);
            printf("-Pontos Túristicos 2= %d \n", NPT2);
        NPTMaior = ( NPT > NPT2) ? 
        printf("Número de Pontos Túristicos: Carta 1 Venceu.\n\n"):
        printf("Número de Pontos Túristicos: Carta 2 Venceu.\n\n");
    break;

        case 5:

        int Densidademaior;
            printf("\n\nPaís 1: %s ",pais);
            printf("X País 2: %s \n", pais2);
            printf("-Comparação de Densidade Populacional.\n");
            printf("-Densidade 1= %.2f Km2 \n",DensidadeP);
            printf("-Densidade 2= %.2f Km2 \n", DensidadeP2);
        Densidademaior = (DensidadeP > DensidadeP2)?
        printf("-Densidade Populacional: Carta 2 Venceu.\n\n"):
        printf("-Densidade Populacional: Carta 1 Venceu.\n\n");
    break;
    
    printf("Muito Obrigado!! Até a Próxima.\n \n");
        break;

    default:
    printf("Opção Inválida.");
        break;
    }



//Comparação 2



        int opcao3;

    printf("Segunda comparação, Escolha uma-\n Opção Diferente da anteiror!:\n \n");
        printf("-(Opção 1):Comparar População das Cidades.\n");
        printf("-(Opção 2):Comparar Área das Cidades.\n");
        printf("-(Opção 3):Comparar PIB das Cidades.\n");
        printf("-(Opção 4):Comparar Numero de Pontos Turisticos das Cidades.\n");
        printf("-(Opção 5):Comparar Densidade Populacional das Cidades.\n\n");
        printf("Digite qual Opção Deseja Comparar e Pressione ENTER!!:");
            scanf("%d", &opcao3);
    
    

    switch (opcao3)
    {
        case 1:

        float populacaoMaior;
            printf("\n\nPaís 1: %s ",pais);
            printf("X País 2: %s \n", pais2);
            printf("-Comparação Populacional.\n");
            printf("-População 1= %.2f\n", populacao);
            printf("-População 2= %.2f\n", populacao2);
        
        populacaoMaior = ( populacao > populacao2) ?
        printf("População: Carta 1 Venceu.\n\n"):
        printf("População: Carta 2 Venceu.\n\n");
    break;

        case 2:

        float areamaior;
            printf("\n\nPaís 1: %s ",pais);
            printf("X País 2: %s \n", pais2);
            printf("-Comparação Territórial.\n");
            printf("-Área 1= %.2f \n",area);
            printf("-Área 2= %.2f \n",area2);
        
        areamaior = ( area > area2) ? 
        printf("Área: Carta 1 Venceu.\n\n"): 
        printf("Área: Carta 2 Venceu.\n\n");
    break;

        case 3:

        float PIBMAIOR;
            printf("\n\nPaís 1: %s ",pais);
            printf("X País 2: %s \n", pais2);
            printf("-Comparação Monetária.\n");
            printf("-PIB 1= %.2f Milhões \n",PIB);
            printf("-PIB 2= %.2f Milhões\n", PIB2);
        
        PIBMAIOR = ( PIB > PIB2) ? 
        printf("PIB: Carta 1 Venceu.\n\n"):
        printf("PIB: Carta 2 Venceu.\n\n");
    break;

        case 4:

        int NPTMaior;
            printf("\n\nPaís 1: %s ",pais);
            printf("X País 2: %s \n", pais2);
            printf("-Comparação Túristica.\n");
            printf("-Pontos Túristicos 1= %d \n",NPT);
            printf("-Pontos Túristicos 2= %d \n", NPT2);
        NPTMaior = ( NPT > NPT2) ? 
        printf("Número de Pontos Túristicos: Carta 1 Venceu.\n\n"):
        printf("Número de Pontos Túristicos: Carta 2 Venceu.\n\n");
    break;

        case 5:

        int Densidademaior;
            printf("\n\nPaís 1: %s ",pais);
            printf("X País 2: %s \n", pais2);
            printf("-Comparação de Densidade Populacional.\n");
            printf("-Densidade 1= %.2f Km2 \n",DensidadeP);
            printf("-Densidade 2= %.2f Km2 \n", DensidadeP2);
        Densidademaior = (DensidadeP > DensidadeP2)?
        printf("-Densidade Populacional: Carta 2 Venceu.\n\n"):
        printf("-Densidade Populacional: Carta 1 Venceu.\n\n");
    break;

        default:
    printf("Opção Inválida.");
    break;
    }

    printf("Muito Obrigado!! Até a Proxima.");

        break;

    case 2:

    printf("\n\nRegras Do Jogo.\n\n");
    printf("(Número 1):\n No jogo, os jogadores comparam os atributos- \n das cartas para determinar a mais forte.\n\n");
    printf("(Número 2):\n O tema deste Super Trunfo é Países, onde você- \n comparará os atributos das cidades.\n\n");
    printf("(Número 3):\n Ganha a carta que tiver o maior Super Poder- \n que é definido pela soma de todos os atribudos\n\n");
    printf(" Divirta-se Com o Jogo.\n ");
    
        break;


    case 3:

    printf("\n\nSaindo do Jogo...\n");
    printf("Muito Obrigado, e até a Proxima!!\n\n");

        break;

    default:
    printf("Opção Inválida! Tente Novamente!");
        break;
    }


    return 0;                                             
}