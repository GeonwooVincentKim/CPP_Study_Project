#include <stdio.h>

int main(){
    int i = 0, j = 0, k = 0;
    // Sequence Point
    // ';', '||', '&&' are Sequence Point
    // 1, 1, 1
    if(++i == 0 || ++j == 1 && ++k == 1){
        printf("%d, %d, %d : ", i, j, k);
        printf("\n");
    }

    // The `i` is validates, so it doesn't check `j` and `k`
    // 1, 0, 0
    if(++i == 1 || ++j == 1 && ++k == 1){
        printf("%d, %d, %d : ", i, j, k);
        printf("\n");
    }
    return 0;
}
