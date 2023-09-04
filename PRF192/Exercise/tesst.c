#include <stdio.h>

void performOperation(int value, void (*callback)(int*, int*)) {
    printf("Performing operation with value: %d\n", value);

    callback(&value, &value);
}

void callbackFunction(int* value, int* value1) {
    printf("Callback function called with value: %d\n", *value + *value1);
}

int main() {
    int num = 5;
    performOperation(num, callbackFunction);
    return 0;
}
