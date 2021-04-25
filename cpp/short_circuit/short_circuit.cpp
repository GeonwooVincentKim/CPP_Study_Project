#include <stdio.h>

int main(){
    bool a = false;
    bool b = true;
    // De Morgan's Law
    // If `a` and `b` is not false
    // => If `a` or `b` is true
    if(!(a == false && b == false)){
        printf("a and b are not false\n");
        printf("%d - %d\n", a, b);
    }
    if(a == true || b == true){
        printf("a or b is true\n");
        printf("%d - %d\n", a, b);
    }
    return 0;
}