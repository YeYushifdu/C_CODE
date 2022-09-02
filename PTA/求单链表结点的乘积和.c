#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//���룺3
//���룺5 3 6
//�����846=5!+3!+6!

typedef struct Node* PtrToNode;     //Node*������ΪPtrToNode
struct Node {
    int Data; /* �洢������� */
    PtrToNode Next; /* ָ����һ������ָ�� */
};
typedef PtrToNode List; /* ���嵥�������� */       //PtrToNode������ΪList

int FactorialSum(List L);

int main()
{
    int N, i;
    List L, p;

    scanf("%d", &N);        //�������
    L = NULL;
    for (i = 0; i < N; i++) {
        p = (List)malloc(sizeof(struct Node));      //pͨ��malloc�����´���һ���ڵ�
        scanf("%d", &p->Data);      //����p.Data
        p->Next = L;        //ͨ��Lָ������ҵ�ԭ�ȵĽڵ㣬��Nextֵ��ΪLָ��Ľڵ�
        L = p;              //Lָ��Ҳָ���½��Ľڵ�
    }
    printf("%d\n", FactorialSum(L));

    return 0;
}


/* ��Ĵ��뽫��Ƕ������ */
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



