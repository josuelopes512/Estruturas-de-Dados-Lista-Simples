#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char *argv[]){
	TLista *lista = criar();
	inserir(lista, 4);
	inserir(lista, 0);
	inserir(lista, 1);
	inserir(lista, 7);
	inserir(lista, 5);
	
//	int i;
//	for(i=0;i<30;i++){
//		inserir(lista, 2*i+1);
//	}
	
	exibe(lista);
	
	//inserir_pos(lista, 2, 2);
	ordena_bin(lista,tamanho(lista));
	
	exibe(lista);
}
