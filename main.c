#include <stdio.h>
#include "my_mat.h"

int main() {
char var;
    scanf("%s",&var);
while(var!='D'){
    if(var=='A') setMyMatrix();
    if(var=='B') {
        isThereWay();
        printf("\n");
    }
    if(var=='C') {
        findShortestPath();
        printf("\n");
    }
    scanf("%s",&var);
}
}
