#include <stdio.h>

void inputMenu(char cat1[20], char cat2[20], char cat3[20],
               char items1[3][20], float price1[3],
               char items2[3][20], float price2[3],
               char items3[3][20], float price3[3]) 
{
    printf("\nEnter Category 1 Name: ");
    scanf("%s", cat1);

    for(int i = 0; i < 3; i++) {
        printf("Item %d Name: ", i+1);
        scanf("%s", items1[i]);
        printf("Price: ");
        scanf("%f", &price1[i]);
    }

    printf("\nEnter Category 2 Name: ");
    scanf("%s", cat2);

    for(int i = 0; i < 3; i++) {
        printf("Item %d Name: ", i+1);
        scanf("%s", items2[i]);
        printf("Price: ");
        scanf("%f", &price2[i]);
    }

    printf("\nEnter Category 3 Name: ");
    scanf("%s", cat3);

    for(int i = 0; i < 3; i++) {
        printf("Item %d Name: ", i+1);
        scanf("%s", items3[i]);
        printf("Price: ");
        scanf("%f", &price3[i]);
    }
}

void displayMenu(char cat1[20], char cat2[20], char cat3[20],
                 char items1[3][20], float price1[3],
                 char items2[3][20], float price2[3],
                 char items3[3][20], float price3[3]) 
{
    printf("\n\n====== FULL MENU ======\n");

    printf("\n--- %s ---\n", cat1);
    for(int i = 0; i < 3; i++)
        printf("%s - $%.2f\n", items1[i], price1[i]);

    printf("\n--- %s ---\n", cat2);
    for(int i = 0; i < 3; i++)
        printf("%s - $%.2f\n", items2[i], price2[i]);

    printf("\n--- %s ---\n", cat3);
    for(int i = 0; i < 3; i++)
        printf("%s - $%.2f\n", items3[i], price3[i]);
}

void budgetItems(char cat1[20], char cat2[20], char cat3[20],
                 char items1[3][20], float price1[3],
                 char items2[3][20], float price2[3],
                 char items3[3][20], float price3[3]) 
{
    printf("\n\n====== BUDGET ITEMS (< $10) ======\n");

    for(int i = 0; i < 3; i++)
        if(price1[i] < 10)
            printf("%s (%s) - $%.2f\n", items1[i], cat1, price1[i]);

    for(int i = 0; i < 3; i++)
        if(price2[i] < 10)
            printf("%s (%s) - $%.2f\n", items2[i], cat2, price2[i]);

    for(int i = 0; i < 3; i++)
        if(price3[i] < 10)
            printf("%s (%s) - $%.2f\n", items3[i], cat3, price3[i]);
}

int main() 
{
    char cat1[20], cat2[20], cat3[20];
    char items1[3][20], items2[3][20], items3[3][20];
    float price1[3], price2[3], price3[3];

    inputMenu(cat1, cat2, cat3, items1, price1, items2, price2, items3, price3);
    displayMenu(cat1, cat2, cat3, items1, price1, items2, price2, items3, price3);
    budgetItems(cat1, cat2, cat3, items1, price1, items2, price2, items3, price3);

    return 0;
}

