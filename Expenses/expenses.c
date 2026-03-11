#include <stdio.h>
#include <string.h>
#include "expenses.h"

Expense expenseCreate(const char *description, float value){
    Expense e ;
    strcpy(e.description,description);
    e.value = value;
    return e ;
}

void expensePrint(Expense e){
    printf("%s- %2f\n",e.description,e.value);
}

float expensesTotal(Expense arr[], int length){
    float total = 0 ;
    for(int i =0; i<length; i++){
        total +=arr[i].value;
    }
    return total;
}