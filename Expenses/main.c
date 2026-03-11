#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include "expenses.h"

int main() {

    Expense expenses[3];

    expenses[0]=expenseCreate("net",200);
    expenses[1]=expenseCreate("food",100);
    expenses[2]=expenseCreate("sair",50);

    float total = expensesTotal(expenses,3);
    printf("total: %2.f\n",total);
    return 0 ;
}
