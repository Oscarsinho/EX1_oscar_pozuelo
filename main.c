#include <stdio.h>
#include "llista.h"
int main() {
    Llista_Bi l;
    int e;
    l = LLISTABI_crea();
    LLISTABI_insereix(&l,2);
    e = LLISTABI_consultar(l);
    printf("%d\n",e);
    LLISTABI_insereix(&l,4);
    LLISTABI_insereix(&l,1);
    LLISTABI_avancar(&l);
    LLISTABI_avancar(&l);
    e = LLISTABI_consultar(l);
    printf("%d\n",e);
    LLISTABI_vesInici(&l);
    e = LLISTABI_consultar(l);
    printf("%d\n",e);

    return 0;
}
