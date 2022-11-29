#include <stdio.h>
#include "my_mat.h"

int main() {
char var = scanf("%s",&var);
while(var!='D'){
    if(var=='A') setMyMatrix();
    if(var=='B') isThereWay();
    if(var=='C') findShortestPath();
    scanf("%s",&var);
}
}
