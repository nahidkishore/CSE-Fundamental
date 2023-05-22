#include <stdio.h>

int main() {
    int n, i, min, freq = 0;
    scanf("%d", &n);
    
    // read the array elements and find the minimum element
    int a[n];
    scanf("%d", &a[0]);
    min = a[0];
    for (i = 1; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] < min) {
            min = a[i];
        }
    }
    
    // find the frequency of the minimum element
    for (i = 0; i < n; i++) {
        if (a[i] == min) {
            freq++;
        }
    }
    
    // determine if the array is lucky or not
    if (freq % 2 == 1) {
        printf("Lucky\n");
    } else {
        printf("Unlucky\n");
    }
    
    return 0;
}
