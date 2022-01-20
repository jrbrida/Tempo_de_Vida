#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int dia, diaatual, mes, mesatual, ano, anoatual, totaldedias, i;
 
  printf("Digite o dia que vc nasceu: \n");
  scanf("%d", &dia);
  printf("Digite o mês que vc nasceu: \n");
  scanf("%d", &mes);
  printf("Digite o ano que vc nasceu: \n");
  scanf("%d", &ano);
  printf("Digite o (DIA ATUAL!): \n");
  scanf("%d", &diaatual);
  printf("Digite o (MÊS ATUAL!): \n");
  scanf("%d", &mesatual);
  printf("Digite o (ANO ATUAL!): \n");
  scanf("%d", &anoatual);

    for(int i = ano; i < anoatual; i++){
        if(i % 4 == 0){
          totaldedias += 366;
        }else{
          totaldedias += 365;
        }
    
    
    }
  printf("Voce já viveu %d dias!!", totaldedias);
  return 0;
}