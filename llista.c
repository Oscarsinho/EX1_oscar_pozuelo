#include "llista.h"
#include <stdio.h>
Llista_Bi LLISTABI_crea(){
    Llista_Bi l;
    int i;
    l.primer = 0;
    l.ultim = 9;
    l.cursor = 0;

    for(i=0; i<10; i++){
        l.nodes[i].seg = i+1;
        l.nodes[i].ant = i-1;
        l.nodes[i].element = -1;
    }
    l.nodes[0].ant = -1;
    l.nodes[9].seg = -1;

    return l;

}

void LLISTABI_insereix(Llista_Bi * l, int e) {
    int aux1;
    int aux2;
    int aux3;
    int i;
    if(LLISTABI_plena(*l)==1){
        printf("Error, no es pot inserir cap element ja que la llista està plena\n");
    }
    else{

        for(i=0;i<10;i++){
            if(l->nodes[i].element == -1){
                aux1=i;
                break;
            }
        }
        for(i=0; i < 10; i++){
            if(l->nodes[i].element > e){
                aux1 = i;
                break;
            }
        }
        aux2 = e;
        for(i=aux1; i < 10; i++){
            aux3 = l->nodes[i].element;
            l->nodes[i].element = aux2;
            aux2 = aux3;
        }


    }
}

void LLISTABI_esborrar(Llista_Bi * l) {
    int aux;
    int i;
    if (LLISTABI_buida(*l) == 1) {
        printf("Error. No es pot esborrar element ja que la llista està buida\n");
    } else {
        if (l->nodes[l->cursor].element == -1) {
            printf("Error. No es pot esborrar element ja que la casella seleccionada està buida\n");
        } else {
            for(i=l->cursor+1; i < 10; i++){
                if(l->nodes[i].element == -1){
                    aux = i;
                    break;
                }
            }
            for(i=l->cursor; i < aux; i++){
                l->nodes[i].element = l->nodes[i+1].element;
            }
            l->nodes[aux].element = -1;
        }
    }
}
