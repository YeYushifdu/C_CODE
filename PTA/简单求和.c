#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAXN 10

int Sum(int List[], int N);

int main()
{
    int List[MAXN], N, i;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%d", &List[i]);
    printf("%d\n", Sum(List, N));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int Sum(int list[], int N) {
    int Sum = 0;
    for (int i = 0; i < N; i++) {
        Sum = Sum + list[i];
    }
    return Sum;
}