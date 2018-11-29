#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "gestionFichiers.h"

char * litLigne(int fd)
{
  int i = 0;
  char *c = malloc(TAILLEBUF+1);
  do {
    //    usleep(1); // � decommenter pour bien voir le probl�me de la question II-B-3 et sa r�solution en II-C
    if( (read(fd, &c[i],1) <= 0) || (i == TAILLEBUF)){
      free(c);
      return NULL;
    }
    i++;
  } while(c[i-1] != '\n');
  c[i] = '\0';
  return c;
}

int ecritLigne(int fd, char *c)
{
  int taille = strlen(c);
  if(write(fd, c, taille) == taille)
    return 1;
  else return 0;
}
