//Q60: Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int arr[10];
    int i, positive = 0, negative = 0, zero = 0;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++) {
        if(arr[i] > 0) {
            positive++;
        } else if(arr[i] < 0) {
            negative++;
        } else {
            zero++;
    }
}
    printf("positive numbers = %d\n", positive);
    printf("negative numbers = %d\n", negative);
    printf("number of zero in the array = %d", zero);
    return 0;
}
