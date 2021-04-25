#include <stdio.h>

int main(){
    int i = 0, j = 0, k = 0;
    // Sequence Point
    // int a = 1;
    // int b = 2;
    // Semicolon (;) is the Sequence Point to divide the Code Execution Sequence
    // In this case, the `||` is the First Sequence Point,
    // so it check that the `i` variable is validates to it condition
    // Usually `&&` is check for first, and `||` check later,
    // but in this case following the `Sequence Point` method
    // the `||` is check for first and then `&&` check later

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
}
