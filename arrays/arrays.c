#include <stdio.h>
#include "input.h"


void arrayPrint(int arr[], int arrLength){
    for(int i = 0 ; i < arrLength;i++ ){
        printf("%d", arr[i]);
    }
    printf("\n");
}

void arrayReverse(int arr[], int arrLength){
    int inicio = 0 ;
    int fim = arrLength-1;
    int temp;
    
    while (inicio < fim){
        temp=arr[inicio];
        arr[inicio] = arr[fim];
        arr[fim] = temp;

        inicio++;
        fim--;
    }
}

int arrayIsSorted(int arr[], int arrLength){
    for (int i  = 0 ; i < arrLength - 1; i++){
        if(arr[i] > arr[i+1]){
            return 0 ; 
        }
    }
    return 1;
}