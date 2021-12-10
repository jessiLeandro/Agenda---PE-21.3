#include <stdio.h>
#include <time.h>

#include "../../index.h"

void salvar_evento(Evento evento){ 
  FILE *fp_db;

  fp_db = fopen ("db.txt","a+");
  
  if (fp_db != NULL) {
    struct tm tm = *localtime(&evento.data);

    fprintf(
      fp_db,
      "%s%d\n%d/%d/%d %d:00\n",
      evento.name,
      evento.categoria,
      tm.tm_mday,
      tm.tm_mon + 1,
      tm.tm_year + 1900,
      tm.tm_hour
    );
    
    fclose(fp_db);
  }
}