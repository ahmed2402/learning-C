// Create a 2D Array, storing the tables of 2 & 3.
#include <stdio.h>

void storeTable(int arr[][10], int n, int m, int number) {
    for (int i = 0; i < m; i++) {
        arr[n][i] = number * (i + 1);
    }
}

int main() {
    int tables[2][10];
    
    storeTable(tables, 0, 10, 2); // Store multiplication table of 2 in tables[0][]
    storeTable(tables, 1, 10, 3); // Store multiplication table of 3 in tables[1][]
    
    for (int i = 0; i < 10; i++) { // Print table of 2
        printf("%d\t", tables[0][i]);
    }
    printf("\n");
    
    for (int i = 0; i < 10; i++) { // Print table of 3
        printf("%d\t", tables[1][i]);
    }
    printf("\n");
    
    return 0;
}
