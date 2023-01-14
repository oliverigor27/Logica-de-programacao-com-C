#include <stdio.h>

int main() {
   int tempoDuracao, hora, minuto, segundo;

   printf("Informe o tempo de duração em segundos: \n");
   scanf("%d", &tempoDuracao);

   segundo = (tempoDuracao % 3600) % 60;
   minuto = (tempoDuracao % 3600) / 60;
   hora = tempoDuracao / 3600;


   printf("%2.0d:%2.0d:%2.0d", hora, minuto, segundo);

}

