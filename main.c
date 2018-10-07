#include <stdio.h>
#include "llista.h"
int main() {
    Llista_Bi l;
    int e;
    l = LLISTABI_crea();
    LLISTABI_insereix(&l,2);
    e = LLISTABI_consultar(l);
    //Introduim un element i comprovem que està correctament colocat
    printf("%d\n",e);
    LLISTABI_insereix(&l,4);
    LLISTABI_insereix(&l,1);
    LLISTABI_avancar(&l);
    LLISTABI_avancar(&l);
    e = LLISTABI_consultar(l);
    //Hem inserit mes elements i comprovem que estàn correctament colocats
    printf("%d\n",e);
    LLISTABI_vesInici(&l);
    e = LLISTABI_consultar(l);
    printf("%d\n",e);
    LLISTABI_esborrar(&l);
    LLISTABI_esborrar(&l);
    LLISTABI_esborrar(&l);
    if(LLISTABI_buida(l) == 1){
        printf("La llista està buida\n");
    }
    return 0;
}
