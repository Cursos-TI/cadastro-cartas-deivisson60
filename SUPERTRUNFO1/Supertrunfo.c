#include <stdio.h>

int main() {

  // Cadastro carta 01

    char estado1;
     char codigo1[10];
      char cidade1[20];
        int populacao1;
         float area1;
          float pib1;
            int pontosturisticos1; 

  // Cadastro carta 02

    char estado2;
     char codigo2[10];
      char cidade2[20];
       int populacao2;
         float area2;
          float pib2;
        int pontosturisticos2;

        int escolha; // Opção de escolha de atributos para comparação

        printf("Cadastro carta 01\n");

         printf("Estado:");
          scanf(" %c", &estado1);

           printf("Código da carta:");
           scanf(" %s", codigo1);

           printf("Cidade:");
           scanf(" %[^\n]", &cidade1);

            printf("População:");
            scanf(" %d", &populacao1);
 
            printf("Área:");
            scanf(" %f", &area1);

            printf("PIB:");
            scanf(" %f", &pib1);

            printf("Pontos Turísticos:");
            scanf(" %d", &pontosturisticos1);

           printf("\n===============================\n");

           printf("Cadastro carta 02\n");

           printf("Estado:");
           scanf(" %c", &estado2);
                                                                                                   
           printf("Código:");
           scanf(" %s", codigo2);

           printf("Cidade:");
           scanf(" %[^\n]", &cidade2);

           printf("População:");
           scanf(" %d", &populacao2);

           printf("Àrea:");
           scanf(" %f" , &area2);

           printf("PIB:");
           scanf(" %f", &pib2);

           printf("Pontos Turísticos:");
           scanf(" %d", &pontosturisticos2);

       // Exibição da carta 01

      printf("\n===============================\n");
      printf("CARTA 01\n");
      printf("Estado: %c\n", estado1);
      printf("Código: %s\n", codigo1);
      printf("Cidade: %s\n", cidade1);
      printf("População: %d\n", populacao1);
      printf("Àrea: %.2fkm²\n", area1);
      printf("PIB: %.2fbilhões de reais\n", pib1);
      printf("Pontos Turísticos: %d\n", pontosturisticos1);

        //Exibição carta 02

     printf("\n===============================\n");    
     printf("CARTA 02\n");
     printf("Estado: %c\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Cidade: %s\n", cidade2);
     printf("População: %d\n", populacao2);
     printf("Àrea: %.2fkm²\n", area2);
     printf("PIB: %.2fbilhões de reais\n", pib2);
     printf("Pontos Turísticos: %d\n", pontosturisticos2);

     //=======================================
     //COMPARAÇÃO DE ATRIBUTOS 
     //=======================================

    printf("\n==================================\n");
    printf("Escolha o atributo para comparação:");
    printf("1- População\n");
    printf("2- Área\n");
    printf("3- PIB\n");
    printf("4- Pontos Turísticos\n");
    printf("Escolha um Atributo:");
    scanf(" %d", &escolha);

    printf("\n Resultado da Prtida:\n");

    switch (escolha){

        case 1:
        if (populacao1 > populacao2){
            printf("Carta 1 venceu!(%s tem a maior população)\n", cidade1);

        }else if (populacao2 > populacao1){
            printf("Carta 2 venceu!(%s tem a maior população)\n", cidade2);

        } else { 
          printf("Empate!\n");

        }

          break;

          case 2:
        
          if (area1 > area2){
            printf("Carta 1 venceu!(%s tem maior área)\n", cidade1);

          } else if(area2 > area1){
              printf("Carta 2 venceu!(%s tem maior área)\n", cidade2);

          }else {
            printf("Empate! Área igual");

          }

            break;

            case 3:

            if (pib1 > pib2){
                 printf("Carta 1 venceu!(%s tem maior PIB)\n", cidade1);
            } else if (pib2 > pib1){
              printf("Carta 2 venceu!(%s tem maior PIB)\n", cidade2);

            }else { 

              printf("Empate! PIB é igual");

            }

              break;

             case 4:

              if (pontosturisticos1 > pontosturisticos2){

                printf("Carta 1 venceu! (%s tem mais pontos turísticos)\n", cidade1);

               } else if(pontosturisticos2 > pontosturisticos1){
                 
                printf("carta 2 Venceu!(%s tem mais pontos turísticos)\n", cidade2);

               } else {

                printf("Empate! Pontos Turísticos iguais\n");
               
               }

               break;
              
              default:

              printf(" Opção inválida!\n");

    

              break;
    }

        
              
              

              
            





          
      return 0;


        }
