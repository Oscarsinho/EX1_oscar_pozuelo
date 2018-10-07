#ifndef EX1_OSCAR_POZUELO_LLISTA_H
#define EX1_OSCAR_POZUELO_LLISTA_H

#endif //EX1_OSCAR_POZUELO_LLISTA_H

typedef struct{
    int element;
    int seg;
    int ant;
}Node;

typedef struct{
    int primer;
    int ultim;
    int cursor;
    Node nodes[10];
}Llista_Bi;

Llista_Bi   LLISTABI_crea(void);

void LLISTABI_insereix(Llista_Bi * l, int e);

void LLISTABI_esborrar(Llista_Bi * l);

int LLISTABI_consultar(Llista_Bi l);

void LLISTABI_vesInici(Llista_Bi * l);

void LLISTABI_vesFinal(Llista_Bi * l );

void LLISTABI_avancar(Llista_Bi * l);

void LLISTABI_retrocedir(Llista_Bi * l);

int LLISTABI_inici(Llista_Bi l);

int LLISTABI_final(Llista_Bi l);

int LLISTABI_plena(Llista_Bi l);

int LLISTABI_buida(Llista_Bi l);
