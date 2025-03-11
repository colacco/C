#include <stdio.h>

int fibonacci(int pos){
    if(pos == 1){
        return 0;
    } else if (pos == 2){
        return 1;
    }

    return fibonacci(pos-1) + fibonacci(pos-2);

}

int main() {
    int a = fibonacci(5);
    int b = fibonacci(15);
    int c = fibonacci(3);

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
}