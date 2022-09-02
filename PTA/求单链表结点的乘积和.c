#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//输入：3
//输入：5 3 6
//输出：846=5!+3!+6!

typedef struct Node* PtrToNode;     //Node*定义名为PtrToNode
struct Node {
    int Data; /* 存储结点数据 */
    PtrToNode Next; /* 指向下一个结点的指针 */
};
typedef PtrToNode List; /* 定义单链表类型 */       //PtrToNode定义名为List

int FactorialSum(List L);

int main()
{
    int N, i;
    List L, p;

    scanf("%d", &N);        //输入个数
    L = NULL;
    for (i = 0; i < N; i++) {
        p = (List)malloc(sizeof(struct Node));      //p通过malloc函数新创建一个节点
        scanf("%d", &p->Data);      //输入p.Data
        p->Next = L;        //通过L指针可以找到原先的节点，把Next值赋为L指向的节点
        L = p;              //L指针也指向新建的节点
    }
    printf("%d\n", FactorialSum(L));

    return 0;
}


/* 你的代码将被嵌在这里 */
int FactorialSum(List L) {
    int Sum = 0;
    List p = L;
    while (p != NULL) {
        int num = p->Data;
        int i, mul = 1;
        for (i = num; i > 1; i--) {
            mul *= i;
        }
        Sum += mul;
        p = p->Next;
    }
    return Sum;
}

//int FactorialSum(List L) {
//    int sum = 0;
//    List p = L;
//    while (1) {
//        printf("%d\n", p->Data);
//        if (p->Next == NULL)	break;
//        p = (p->Next);
//    }
//    return sum;
//}



