#include <stdio.h>

int main() {
   int comissao, totalVendido, bruto;

   // printf("Digite o total vendido nesse mês\n");
   // scanf("%d", &a);

   comissao = (totalVendido * 10) / 100;
   bruto = comissao + 1200;

   printf("Comissão de venda = R$%d\n", comissao);
   printf("Salário bruto total = R$%d", bruto);
}