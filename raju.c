#include <stdio.h>

void fun(int n, int ar[]) {
    //  int sorted[n];
    // for (int i = 0; i < n; i++) {
    //     sorted[i] = ar[i];
    // }
   
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (ar[i] > ar[j]) {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    // for (int i = 0; i < n; i++) {
    //     printf("%d\n", ar[i]);
    // }
}

void send(int n, int ar[]) {
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");
}

int main() {
    int n = 3;
    int ar[n];
    printf("Array %d list:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    fun(n, ar);
    send(n, ar);

    return 0;
}
