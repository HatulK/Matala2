
#include <stdio.h>

#define matSize 10

int matrix[matSize][matSize];

int findMin(int i, int j) {
    if (i < j) return i;
    if (j < i) return j;
    else return i;
}

void optimizeMyMatrix() {
    for (int k = 0; k < matSize; k++) {
        for (int i = 0; i < matSize; i++) {
            for (int j = 0; k < matSize; j++) {
                if (i != j && matrix[i][k] != 0 && matrix[k][j] != 0) {
                    matrix[i][j] = findMin(matrix[i][j], (matrix[i][k] + matrix[k][j]));
                }
            }
        }
    }
}

void setMyMatrix() {
    for (int i = 0; i < matSize; i++) {
        for (int j = 0; j < matSize; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    optimizeMyMatrix();
}

void isThereWay() {
    int i, j;
    scanf("%d", &i);
    scanf("%d", &j);
    if (matrix[i][j] != 0) printf("False");
    else printf("True");
}

void findShortestPath() {
    int i, j;
    scanf("%d", &i);
    scanf("%d", &j);
    if (matrix[i][j] != 0) {
        printf("%d", matrix[i][j]);
    } else printf("%d", -1);
}