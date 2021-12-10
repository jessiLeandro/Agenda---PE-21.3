#include <stdio.h>
#include <time.h>

#include "../../index.h"

// Lê a data
struct tm ler_data(){
  int dia, mes, ano, hora;
  struct tm tm;

  printf("Entre apenas com a hora do evento:\n");
  scanf("%d", &hora);
  printf("Entre com o dia do evento:\n");
  scanf("%d", &dia);
  printf("Entre com o mês do evento:\n");
  scanf("%d", &mes);
  printf("Entre com o ano do evento:\n");
  scanf("%d", &ano);

  tm.tm_mday = dia;
  tm.tm_mon = mes - 1;
  tm.tm_year = ano - 1900;
  tm.tm_hour = hora;
  tm.tm_min = 0;
  tm.tm_sec = 0;

  return tm;
}