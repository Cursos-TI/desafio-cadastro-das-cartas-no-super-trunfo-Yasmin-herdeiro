#include <stdio.h>

int main(){
char estado1[30], codigodacarta1[4], nomedacidade1[30];
int populacao1, numerodePontosturisticos1;
float Areaemkm1, pib1;

char estado2[30], codigodacarta2[4], nomedacidade2[30];
int populacao2, numerodePontosturisticos2;
float Areaemkm2, pib2;

printf("Dados da primeira carta\n");
printf("Digite seu estado: ");
scanf("%s",estado1);
printf("Digite o codigo da carta: ");
scanf("%s",codigodacarta1);
printf("Digite o nome da cidade: ");
scanf("%s",nomedacidade1);
printf("Digite a populacao: ");
scanf("%d",&populacao1);
printf("Digite a area em km: ");
scanf("%f",&Areaemkm1);
printf("Digite o pib: ");
scanf("%f",&pib1);
printf("Digite os numero de pontos turisticos: ");
scanf("%d",&numerodePontosturisticos1);

printf("Dados da segunda carta\n");
printf("Digite seu estado: ");
scanf("%s",estado2);
printf("Digite o codigo da carta: ");
scanf("%s",codigodacarta2);
printf("Digite o nome da cidade: ");
scanf("%s",nomedacidade2);
printf("Digite a populacao: ");
scanf("%d",&populacao2);
printf("Digite a area em km: ");
scanf("%f",&Areaemkm2);
printf("Digite o pib: ");
scanf("%f",&pib2);
printf("Digite os numero de pontos turisticos: ");
scanf("%d",&numerodePontosturisticos2);

printf("Primeira carta");
printf("estado:%s\n",estado1);
printf("codigo da carta:%s\n",codigodacarta1);
printf("nome da cidade:%s\n",nomedacidade1); 
printf("populacao:%d\n",populacao1);
printf("area em km:%.2f\n",Areaemkm1);
printf("pib:%.2f\n",pib1);
printf("numero de pontos turisticos:%d\n",numerodePontosturisticos1);

printf("Segunda carta");
printf("estado:%s\n",estado2);
printf("codigo da carta:%s\n",codigodacarta2);
printf("nome da cidade:%s\n",nomedacidade2); 
printf("populacao:%d\n",populacao2);
printf("area em km:%.2f\n",Areaemkm2);
printf("pib:%.2f\n",pib2);
printf("numero de pontos turisticos:%d\n",numerodePontosturisticos2);


return 0;
}
