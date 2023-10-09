#include <stdio.h>
#include <stdlib.h>
void input(int *data, int n);
void output(int *data, int n);
void sort(int *data, int n);
int main() {
    int n = 0;
    scanf("%d", &n);
    int *data = (int *)malloc(n * sizeof(int));
    input(data, n);
    sort(data, n);
    output(data, n);
    free(data);
    return 0;
}

void input(int *data, int n) {
    for (int i = 0; i < n; i++) {
        if (scanf("%d", data + i) != 1) {
            printf("n/a");
            return;
        }
    }
}

void output(int *data, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    return;
}

void sort(int *data, int n) {
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