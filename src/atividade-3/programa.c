#include <stdio.h>
#include <malloc.h>

float* vsum(float *v, float *u, int size) {
    float* out = (float*) malloc(size * sizeof(float));

    for (int i = 0; i < size; i++)
        out[i] = v[i] + u[i];

    return out;
}

float* vsub(float *v, float *u, int size) {
    float* out = (float*) malloc(size * sizeof(float));

    for (int i = 0; i < size; i++)
        out[i] = v[i] - u[i];

    return out;
}

void vprint(float *vec, int size)
{
    printf("[");
    for (int i = 0; i < size; i++) {
        if (i == size - 1)
            printf("%.2f", vec[i]);
        else
            printf("%.2f, ", vec[i]);
    }
    printf("]");
}

int main()
{
    float v[3] = {4, 8, 3};
    float u[3] = {5, 7, -2};

    printf("v = ");
    vprint(v, 3);
    printf("\n");

    printf("u = ");
    vprint(u, 3);
    printf("\n");

    float* sum = vsum(v, u, 3);
    printf("soma = ");
    vprint(sum, 3);
    printf("\n");
    free(sum);

    float* sub = vsub(v, u, 3);
    printf("diferença = ");
    vprint(sub, 3);
    printf("\n");
    free(sub);
}