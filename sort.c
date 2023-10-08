#include <stdio.h>
#include <stdlib.h>
int input(int *data, int n);
int output(int *data, int n);
int sort(int *data, int n);
int main() {
    int n = 0;
    scanf("%d", &n);
    int *data = (int *)malloc(n * sizeof(int));
    input(data, n);
    sort(data, n);
    output(data, n);
    return 0;
}

int input(int *data, int n) {
    for (int i = 0; i < n; i++) {
        if (scanf("%d", data + i) != 1) {
            printf("n/a");
            return 0;
        }
    }
}

int output(int *data, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    return 0;
}

int sort(int *data, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                int tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
            }
        }
    }
}