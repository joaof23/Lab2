typedef struct{
    char description[50];
    float value ;
}Expense;

Expense expenseCreate(const char *description, float value);
void expensePrint(Expense e);
float expensesTotal(Expense arr[], int length);

