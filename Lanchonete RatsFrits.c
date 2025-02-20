//Atualizado 2025 CÓDIGO PRINCIPAL MIKE
//lanchonete Ratos Fritos Primeiro código 2014
//programa para calculor as vendas de uma lanchonete 
//Michael Moraes Sabino

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int iMenuPrincipal, iMenuLanches, iMenuBebidas, iMenuSobremesas; //variáveis de menu
    float valorLanches = 0, valorBebidas = 0, valorSobremesas = 0, valorTotal; //variáveis do cliente
    int promocao; //quantidades de pés de moleque
    
    // Variáveis de relatório
    // QUANTIDADES
    int qMisto = 0, qOvo = 0, qHotDog = 0, qXSal = 0, qXBac = 0, qTudo = 0;
    int qPing = 0, qTub = 0, qSoda = 0, qSuco = 0, q51 = 0;
    int qArroz = 0, qAcai = 0, qGel = 0, qPe = 0, qPud = 0;
    int qLanches = 0, qBebidas = 0, qSobrem = 0;

    // Percentuais de produtos vendidos
    float totalMisto, totalOvo, totalHotDog, totalXSal, totalXBac, totalTudo;
    float totalPing, totalTub, totalSoda, totalSuco, total51;
    float totalArroz, totalAcai, totalGel, totalPe, totalPud;
    float totalLanches, totalBebidas, totalSobrem;

    /* (do) é o laço de repetição que o bloco de comandos será
       executado enquanto o usuário não escolher a opção SAIR (5)*/
    do {
        printf("\n -----------------------------------------\n");
        printf("\n ********  LANCHONETE RATS FRITS  ********\n");
        printf("\n -----------------------------------------\n");
        printf("              MENU PRINCIPAL\n\n");
        printf("\n  Entre com uma das opcoes abaixo:\n\n");
        printf("   1 - LANCHES\n");    
        printf("   2 - BEBIDAS\n");
        printf("   3 - SOBREMESAS\n\n");
        printf("   4 - FECHAR PEDIDOS\n");
        printf("   5 - VIZUALIZAR RELATORIO DE VENDAS\n");
        printf("   6 - SAIR DO SISTEMA\n");
        printf("\n -----------------------------------------\n");
        printf("\n Opcao selecionada: ");
        scanf("%d", &iMenuPrincipal);

        switch(iMenuPrincipal) {
            case 1:
                // MENU LANCHES
                do {
                    system("cls");

			        printf("\n -----------------------------------------\n");
			        printf("\n ********  LANCHONETE RATS FRITS  ********\n");
			        printf("\n -----------------------------------------\n");
                    printf("              MENU DE LANCHES\n\n");
                    printf("\n  Entre com uma das opcoes abaixo:\n\n");
                    printf("  1 |   MISTO         | R$ 2,50 \n");    
                    printf("  2 |   PAO COM OVO   | R$ 3,60 \n");
                    printf("  3 |   HOTDOG        | R$ 4,50 \n");
                    printf("  4 |   X-SALADA      | R$ 6,00 \n");
                    printf("  5 |   X-BACON       | R$ 7,50 \n");
                    printf("  6 |   PAO COM TUDO  | R$ 10,00 \n\n");
                    printf("  7 -  Voltar ao menu principal \n");
                    printf("\n Opcao selecionada: ");
                    scanf("%d", &iMenuLanches);

                    // Registrando valor para cada lanche
                    if(iMenuLanches == 1) {
                        valorLanches += 2.5;
                        qMisto++;
                    } else if(iMenuLanches == 2) {
                        valorLanches += 3.6;
                        qOvo++;
                    } else if(iMenuLanches == 3) {
                        valorLanches += 4.5;
                        qHotDog++;
                    } else if(iMenuLanches == 4) {
                        valorLanches += 6;
                        qXSal++;
                    } else if(iMenuLanches == 5) {
                        valorLanches += 7.5;
                        qXBac++;
                    } else if(iMenuLanches == 6) {
                        valorLanches += 10;
                        qTudo++;
                    }
                } while(iMenuLanches < 7); // Fechando do - menu lanches
                system("cls"); 
                break; // Ao término de cada opção, inserir o break

            case 2:
                // MENU BEBIDAS
                do {
                    system("cls");

			        printf("\n -----------------------------------------\n");
			        printf("\n ********  LANCHONETE RATS FRITS  ********\n");
			        printf("\n -----------------------------------------\n");
                    printf("              MENU DE BEBIDAS\n\n");
                    printf("\n  Entre com uma das opcoes abaixo: \n\n");
                    printf(" 1 |      PINGADO         | R$ 1,20 \n");    
                    printf(" 2 |      TUBAINA         | R$ 2,50 \n");
                    printf(" 3 |      SODA            | R$ 4,50 \n");
                    printf(" 4 |      SUCO            | R$ 5,00 \n");
                    printf(" 5 |      51              | R$ 2,00 \n");
                    printf("\n 6 - Voltar ao Menu Principal \n\n");
                    printf("\n Opcao selecionada: ");
                    scanf("%d", &iMenuBebidas);

                    // Registrando valor para cada bebida
                    if(iMenuBebidas == 1) {
                        valorBebidas += 1.2;
                        qPing++;
                    } else if(iMenuBebidas == 2) {
                        valorBebidas += 2.5;
                        qTub++;
                    } else if(iMenuBebidas == 3) {
                        valorBebidas += 4.5;
                        qSoda++;
                    } else if(iMenuBebidas == 4) {
                        valorBebidas += 5;
                        qSuco++;
                    } else if(iMenuBebidas == 5) {
                        valorBebidas += 2;
                        q51++;
                    }
                } while(iMenuBebidas < 6);
                system("cls"); 
                break;

            case 3:
                // MENU SOBREMESAS
                do {
                    system("cls");

			        printf("\n -----------------------------------------\n");
			        printf("\n ********  LANCHONETE RATS FRITS  ********\n");
			        printf("\n -----------------------------------------\n");
                    printf("            MENU DE SOBREMESAS\n\n");
                    printf("\n  Entre com uma das opcoes a baixo: \n\n");
                    printf("  1 |        ARROZ DOCE      | R$ 5,00 \n");
                    printf("  2 |        ACAI            | R$ 9,50 \n");
                    printf("  3 |        GELATINA        | R$ 3,00 \n");
                    printf("  4 |        PE DE MOLEQUE   | R$ 0,50 \n");
                    printf("  5 |        PUDIM           | R$ 6,00 \n");
                    printf("\n  6 - Voltar ao Menu Principal \n\n");
                    printf("\n Opcao selecionada: ");
                    scanf("%d", &iMenuSobremesas);

                    // Registrando valor para cada sobremesa
                    if(iMenuSobremesas == 1) {
                        valorSobremesas += 5;
                        qArroz++;
                    } else if(iMenuSobremesas == 2) {
                        valorSobremesas += 9.5;
                        qAcai++;
                    } else if(iMenuSobremesas == 3) {
                        valorSobremesas += 3;
                        qGel++;
                    } else if(iMenuSobremesas == 4) {
                        valorSobremesas += 0.5;
                        qPe++;
                    } else if(iMenuSobremesas == 5) {
                        valorSobremesas += 6;
                        qPud++;
                    }
                } while(iMenuSobremesas < 6);
                system("cls");
                break;

            case 4:
            	system("cls");
                // FECHAR PEDIDO
                valorTotal = (valorLanches + valorBebidas + valorSobremesas);

                printf("\n --------------------------------------------\n");
                printf("\n *********  LANCHONETE  RATS FRITS  *********\n");
                printf("\n --------------------------------------------\n");
                printf("\n        Nota fiscal da venda \n\n");
                printf("  LANCHES:    ..............R$ %.2f \n", valorLanches);
                printf("  BEBIDAS:    ..............R$ %.2f \n", valorBebidas);
                printf("  SOBREMESAS: ..............R$ %.2f \n\n", valorSobremesas);
                printf("  TOTAL:      ..............R$ %.2f \n", valorTotal); 

                // PROMOÇÃO
                if(valorTotal >= 15) {
                    promocao = (int)(valorTotal / 15);
                    printf("\n\n");
                    printf("\n        PROMOCAO DO MES            \n\n");
                    printf("  Voce ganhou %d pes de moleque!!! \n", promocao);                        
                }

                printf("\n\n  Pressione qualquer tecla para novo cliente...");
                getch(); // Espera qualquer tecla ser pressionada

                valorLanches = 0;
                valorBebidas = 0;
                valorSobremesas = 0;
                valorTotal = 0;

                system("cls");
                break;    

            case 5:   
                // RELATORIO - ADMINISTRADOR
                system("cls");
                printf("\n *********  LANCHONETE  RATS FRITS  *********\n");
                printf("\n             Relatorio de Vendas\n\n");
                printf("---------QUANTIDADE DE PRODUTOS VENDIDOS---------\n\n\n");

                qLanches = qMisto + qOvo + qHotDog + qXSal + qXBac + qTudo;
                printf("=====LANCHES: %d UNIDADES===== \n\n", qLanches);
                printf(" MISTO: %d \n PAO COM OVO: %d \n HOTDOG: %d \n X-SALADA: %d \n X-BACON: %d \n PAO COM TUDO: %d \n\n", qMisto, qOvo, qHotDog, qXSal, qXBac, qTudo);

                qBebidas = qPing + qTub + qSoda + qSuco + q51;
                printf("=====BEBIDAS: %d UNIDADES===== \n\n", qBebidas);
                printf(" Pingado: %d \n TUBAINA: %d \n SODA: %d \n SUCO: %d \n 51: %d \n\n", qPing, qTub, qSoda, qSuco, q51);

                qSobrem = qArroz + qAcai + qGel + qPe + qPud;
                printf("=====SOBREMESAS: %d UNIDADES===== \n\n", qSobrem);
                printf(" ARROZ DOCE: %d \n ACAI: %d \n GELATINA: %d \n PE DE MOLEQUE: %d \n PUDIM: %d \n\n", qArroz, qAcai, qGel, qPe, qPud);
				printf("-------------------------------------------------\n");
                printf(" \n Pressione qualquer tecla para continuar");

                getch();
                system("cls");

                printf("\n *********  LANCHONETE  RATS FRITS  *********\n");
                printf("\n             Relatorio de caixa \n\n");
                printf("----------- ARRECADACAO DIARIA -------------\n");				

                // Total lanches
                totalMisto = qMisto * 2.5;
                totalOvo = qOvo * 3.6;
                totalHotDog = qHotDog * 4.5;
                totalXSal = qXSal * 6;
                totalXBac = qXBac * 7.5;
                totalTudo = qTudo * 10;
                totalLanches = totalMisto + totalOvo + totalHotDog + totalXSal + totalXBac + totalTudo;

                printf("\n====LANCHES:          R$ %.2f \n\n", totalLanches);
                printf(" MISTO: 	  R$ %.2f \n", totalMisto);
                printf(" PAO COM OVO:     R$ %.2f \n", totalOvo);
                printf(" HOTDOG:          R$ %.2f \n", totalHotDog);
                printf(" X-SALADA:        R$ %.2f \n", totalXSal);
                printf(" X-BACON:         R$ %.2f \n", totalXBac);
                printf(" PAO COM TUDO:    R$ %.2f \n", totalTudo);

                // Total bebidas
                totalPing = qPing * 1.2;
                totalTub = qTub * 2.5;
                totalSoda = qSoda * 4.5;
                totalSuco = qSuco * 5;
                total51 = q51 * 2;
                totalBebidas = totalPing + totalTub + totalSoda + totalSuco + total51;

                printf("\n====BEBIDAS:          R$ %.2f \n\n", totalBebidas);
                printf(" PINGADO:         R$ %.2f \n", totalPing);
                printf(" TUBAINA:         R$ %.2f \n", totalTub);
                printf(" SODA:            R$ %.2f \n", totalSoda);
                printf(" SUCO:            R$ %.2f \n", totalSuco);
                printf(" 51:              R$ %.2f \n", total51);
  
                // Total sobremesas
                totalArroz = qArroz * 5;
                totalAcai = qAcai * 9.5;
                totalGel = qGel * 3;
                totalPe = qPe * 0.5;
                totalPud = qPud * 6;
                totalSobrem = totalArroz + totalAcai + totalGel + totalPe + totalPud;

                printf("\n====SOBREMESAS:       R$ %.2f \n\n", totalSobrem);
                printf(" ARROZ DOCE:      R$ %.2f \n", totalArroz);
                printf(" ACAI:            R$ %.2f \n", totalAcai);
                printf(" GELATINA:        R$ %.2f \n", totalGel);
                printf(" PE DE MOLEQUE:   R$ %.2f \n", totalPe);
                printf(" PUDIM:           R$ %.2f \n", totalPud);
                
                // Total Geral
                printf("\n====TOTAL ARRECADADO: R$ %.2f \n", totalLanches + totalBebidas + totalSobrem);
				printf("--------------------------------------------\n");
                printf("\n Pressione qualquer tecla para continuar...");
                getch();
                system("cls");
                break;

            case 6:
                printf("\n\n Saindo do sistema...");
                break;

            default:
                printf("\n Opção inválida. Tente novamente.");
                break;
        }
   } while(iMenuPrincipal != 6); // Termina o loop quando a opção 6 for escolhida

    return 0;
}