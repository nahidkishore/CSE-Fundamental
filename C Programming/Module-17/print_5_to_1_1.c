#include <stdio.h>

void printNumbers(int n) {
    if (n > 0) {
        printf("%d ", n);
        printNumbers(n-1); // recursive call
    }
}

int main() {
    printNumbers(5);
    return 0; 
}
