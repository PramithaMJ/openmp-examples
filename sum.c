#include <stdio.h>

int main()
{
    const int N = 100;
    int A[N], B[N];
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        A[i] = i;
        B[i] = i;
    }

    for (int i = 0; i < N; i++)
    {
        sum += (A[i] + B[i]);
    }

    printf("Total sum: %d\n", sum);
    return 0;
}