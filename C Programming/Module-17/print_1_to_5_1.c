#include <stdio.h>

void printNumbers(int n) {
    if (n > 0) {

        printNumbers(n-1); // recursive call
      
        printf("%d ", n);
    }
}

int main() {
    printNumbers(5);
    return 0;
}
