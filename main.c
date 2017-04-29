/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tassio
 *
 * Created on 25 de Março de 2017, 17:20
 */

#include <stdio.h>
#include <stdlib.h>
int a[10], x, inicio, fim;

int buscar(int *a, int x, int inicio, int fim) {
    int meio = (inicio + fim) / 2;
    if (a[meio] == x) {
        printf("\n%d", a[meio]);
    } else {
        if (a[meio] < x) {
            printf("\n%d",a[meio]);
            buscar(a, x, meio + 1, fim);
        } else {
            printf("\n%d",a[meio]);
            buscar(a, x, inicio, meio);
        }
    }
    return 0;
}

int main(int argc, char** argv) {

    for (int t = 1; t <= 10; t++) {
        a[t] = t;
    }
    inicio = 1;
    fim = 10;
    x = 4;

    printf("Vetor = ");
    for (int t = 1; t <= 10; t++) {
        printf("%d", a[t]);
    }

    buscar(a, x, inicio, fim);

    return (EXIT_SUCCESS);
}