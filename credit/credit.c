#include <stdio.h>

int main(void) {
    int a = 123;
    int arr[200];
    int j = 0;

    while (a > 0) {
        arr[j] = a % 10;
        a = a / 10;
        j++;
    }

    for (int i = j - 1; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }

    
}
