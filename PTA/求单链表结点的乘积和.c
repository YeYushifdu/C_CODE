#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct Node* PtrToNode;
struct Node {
    int Data; /* 存储结点数据 */
    PtrToNode Next; /* 指向下一个结点的指针 */
};
typedef PtrToNode List; /* 定义单链表类型 */

int FactorialSum(List L);

int main()
{
    int N, i;
    List L, p;

    scanf("%d", &N);
    L = NULL;
    for (i = 0; i < N; i++) {
        p = (List)malloc(sizeof(struct Node));
        scanf("%d", &p->Data);
        p->Next = L;  L = p;
    }
    printf("%d\n", FactorialSum(L));

    return 0;
}

/* 你的代码将被嵌在这里 */
int FactorialSum(List L) {
    int j = 0, i, e, mul = 1;
    int FactorialSum = 0;
    List* p = L->Next;
    for (i = 0; i < sizeof(L); i++) {
        while (p && j <= i) {
            p = L->Next;
            j++;
            for (e = 1; e <= p; e++)
                mul = mul * e;
            FactorialSum += mul;
        }
        return FactorialSum;
    }
}



