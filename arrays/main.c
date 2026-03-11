#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include "arrays.h"

int main() {

    int arr[]={1,4,7,10,14,15};
    int size = 6;
    
    arrayPrint(arr,size);
    if(arrayIsSorted(arr,size)){
        printf("array sorted \n");
    } else{
        printf("not sorted \n");
    }

    arrayReverse(arr,size);
    arrayPrint(arr,size);
}
