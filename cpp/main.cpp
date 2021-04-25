#include <stdio.h>

int main(){
    int i = 0, j = 0, k = 0;
    if(++i == 0 || ++j == 1 && ++k == 1){
        printf("%d, %d, %d : ", i, j, k);
        printf("\n");
    }
    if(++i == 1 || ++j == 1 && ++k == 1){
        printf("%d, %d, %d : ", i, j, k);
        printf("\n");
    }
}
