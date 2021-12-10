// https://www.tutorialspoint.com/c_standard_library/time_h.htm
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../../index.h"

void carregar_eventos(Lista *lista){
  int index = 0;
  FILE *fp_db;

  fp_db = fopen ("db.txt","r");
  
  printf("\n\n***** lendo... *****\n");  

  if (fp_db != NULL) {

    while(feof(fp_db) == 0){
      int hora, dia, mes, ano;
      struct tm tm;
      Evento evento;

      fscanf(fp_db, "%[^\n]s", evento.name);

      if(feof(fp_db) == 1) return;

      fscanf(fp_db, "%d %d/%d/%d %d:00\n", &evento.categoria, &dia, &mes, &ano, &hora);

      strcat(evento.name, "\n");
      tm.tm_mday = dia;
      tm.tm_mon = mes - 1;
      tm.tm_year = ano - 1900;
      tm.tm_hour = hora;
      tm.tm_min = 0;
      tm.tm_sec = 0;

      evento.data = mktime(&tm);

      insere_lista_inicio(lista, evento);
      index++;
    }

    printf("Encontrado(s) %d evento(s)", index);
   
    fclose(fp_db);
    printf("\n**************\n");
  }else {
    printf("\n\n***** Erro ao carregar eventos *****\n");  
  }  
}