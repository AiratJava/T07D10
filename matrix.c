#include <stdio.h>
#include <stdlib.h>
void static_matrix();
void dynamic_matrix_1();
void dynamic_matrix_2();
void dynamic_matrix_3();
int main() {
    int v = 0;
    scanf("%d", &v);
    switch (v) {
        case 1:
            static_matrix();
            break;
        case 2:
            dynamic_matrix_1();
            break;
        case 3:
            dynamic_matrix_2();
            break;
        case 4:
            dynamic_matrix_3();
            break;
        default:
            printf("n/a");
            break;
    }
}

void static_matrix() {
    int N = 0, M = 0;
    scanf("%d %d", &N, &M);
    int A[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        printf("\n");
        for (int j = 0; j < M; j++) {
            printf("%d ", A[i][j]);
        }
    }
}

void dynamic_matrix_1() {
    int N = 0, M = 0;
    scanf("%d %d", &N, &M);
    int **A;
    A = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < M; i++) {
        A[i] = malloc(M * sizeof(int));
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        printf("\n");
        for (int j = 0; j < M; j++) {
            printf("%d ", A[i][j]);
        }
    }
    for (int i = 0; i < M; i++) {
        free(A[i]);
    }
    free(A);
}

void dynamic_matrix_2() {
    int N = 0, M = 0;
    scanf("%d %d", &N, &M);
    int **A = (int **)malloc(N * M * (sizeof(int)) + M * (sizeof(int *)));
    int *start = (int *)(A + M);
    for (int i = 0; i < M; i++) {
        A[i] = start + N * i;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        printf("\n");
        for (int j = 0; j < M; j++) {
            printf("%d ", A[i][j]);
        }
    }
    free(A);
}

void dynamic_matrix_3() {
    int N = 0, M = 0;
    scanf("%d %d", &N, &M);
    int** A = malloc(M * sizeof(int*));
    int* B = malloc(M * N * sizeof(int));
    for (int i =0; i < M; i++){
        A[i] = B + N * i;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        printf("\n");
        for (int j = 0; j < M; j++) {
            printf("%d ", A[i][j]);
        }
    }
    free(A);
    free(B);

}