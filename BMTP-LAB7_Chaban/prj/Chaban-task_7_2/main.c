#include <stdio.h>

int count_elements(float arr[], int size) {
    if (size < 3) {
        return 0;
    }

    float first = arr[0];
    float last = arr[size - 1];

    int count = 0;

    for (int i = 1; i < size - 1; i++) {
        if (arr[i] > first && arr[i] < last) {
            count++;
        }
    }

    return count;
}

int main(){
    float arr[15];
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%c%c%c%c%c%c%c 15 %c%c%c%c%c%c%c %c%c%c%c%c:\n", -126, -94, -91, -92, 105, -30, -20, -92, 105, -87, -31, -83, -88, -27, -25, -88, -31, -91, -85);

   for (int i = 0; i < size; i++) {
        scanf("%f", &arr[i]);
    }

    int result = count_elements(arr, size);

    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c, %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c: %d\n", -118, 105, -85, -20, -86 , 105, -31, -30, -20, -91, -85, -91, -84, -91, -83, -30, 105, -94, -95, 105, -85, -20, -24, -88, -27, -81, -91, -32, -24, -82, -93, -82, 105, -84, -91, -83, -24, -88, -27, -82, -31, -30, -96, -83, -83, -20, -82, -93, -82, result);

    return 0;
    }
