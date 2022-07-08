#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Average(ElementType S[], int N);

int main()
{
    ElementType S[MAXN];
    int N, i;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%f", &S[i]);
    printf("%.2f\n", Average(S, N));

    return 0;
}

/* 你的代码将被嵌在这里 */
ElementType Average(ElementType s[], int N) {
    int i = 0;
    ElementType Average = 0;
    for (i = 0; i < N; i++)
        Average = Average + s[i];
    Average = Average / N;
    return Average;
}