#include <stdio.h>
#include <stdlib.h>
#include "pila.h"


int main()
{
//    3.- Cargar desde teclado una pila DADA y pasar a la pila DISTINTOS todos aquellos
//elementos distintos al valor 8.
//
//    Pila dada, distintos, aux;
//    inicpila (&aux);
//    inicpila (&dada);
//    inicpila (&distintos);
//
//    char control;
//    do{
//        printf("Agrega un valor para la Pila\n");
//        leer(&dada);
//        printf("presione c para continuar cargandos elementos a la pila\n");
//        fflush(stdin);
//        scanf("%c", &control);
//        //se puede usar getche.
//    }while(control == 'c' || control == 'C');
//
//    printf("Pila dada");
//    mostrar(&dada);
//
//    while (!pilavacia(&dada)){
//        if (tope(&dada) != 8){
//            apilar(&distintos, desapilar(&dada));
//        } else{
//            apilar(&aux, desapilar(&dada));
//            }
//    }
//
//    while (!pilavacia(&aux)){
//            apilar(&dada, desapilar(&aux));
//    }
//
//
//    mostrar(&dada);
//    mostrar(&distintos);


//4.- Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO.
//Pasar los elementos de la pila ORIGEN a la pila DESTINO, pero dejándolos en el
//mismo orden.

//      Pila origen, destino, aux;
//      inicpila (&aux);
//      inicpila (&origen);
//      inicpila (&destino);
//      char control;
//
//    do{
//        printf("Agrega un valor para la Pila\n");
//        fflush(stdin);
//        leer(&origen);
//        printf("presione c para continuar cargandos elementos a la pila\n");
//        fflush(stdin);
//        scanf("%c", &control);
//    }while(control == 'c' || control == 'C');
//
//    printf("Pila origen.\n");
//    mostrar(&origen);
//
//    do {
//        apilar(&aux, desapilar(&origen));
//    }while (!pilavacia(&origen));
//
//    do {
//        apilar(&destino, desapilar(&aux));
//    }while (!pilavacia(&aux));
//
//    printf("Pila destino\n");
//    mostrar(&destino);


//5.- Cargar desde el teclado la pila DADA. Invertir la pila de manera que DADA
//contenga los elementos cargados originalmente en ella, pero en orden inverso.

//      Pila dada, aux, auxx;
//      inicpila(&dada);
//      inicpila(&aux);
//      inicpila(&auxx);
//      char control;
//
//      do{
//
//        printf("Ingrese un valor para la pila dada.\n");
//        fflush(stdin);
//        leer(&dada);
//
//        printf("Presione c para continuar cargando elementos a la pila.\n");
//        fflush(stdin);
//        scanf("%c", &control);
//      }while ( control == 'c' || control == 'C');
//
//      printf("Pila dada:\n");
//      mostrar(&dada);
//
//      do {
//        apilar(&aux, desapilar(&dada));
//      }while (!pilavacia(&dada));
//
//      do {
//        apilar(&auxx, desapilar(&aux));
//      }while (!pilavacia(&aux));
//
//      do {
//        apilar(&dada, desapilar(&auxx));
//      }while (!pilavacia(&auxx));
//
//      printf("Pila dada invertida:\n");
//      mostrar(&dada);


//6.- Pasar el primer elemento (tope) de la pila DADA a su última posición (base),
//dejando los restantes elementos en el mismo orden.

//
//        Pila dada, aux;
//        inicpila(&dada);
//        inicpila(&aux);
//        int top = 0;
//        char control;
//
//        do {
//            printf("Ingrese un valor para la pila DADA\n");
//            fflush(stdin);
//            leer(&dada);
//
//            printf("Ingrese la letra 'c' para poder seguir ingresando valores a la pila DADA.\n");
//            fflush(stdin);
//            scanf("%c", &control);
//
//        }while( control == 'c' || control == 'C');
//
//        printf("Pila DADA:\n");
//        mostrar(&dada);
//
//        system("pause");
//        printf("\n");
//
//        top = tope(&dada);
//        desapilar(&dada);
//
//        do{
//            apilar(&aux, desapilar(&dada));
//        }while (!pilavacia(&dada));
//
//        apilar(&dada, top);
//
//        do{
//            apilar(&dada, desapilar(&aux));
//        }while (!pilavacia(&aux));
//
//
//        printf("Pila final:\n");
//        mostrar(&dada);



    return 0;
}
