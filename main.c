#include <stdio.h>
/*
 * 8.2 结构体指针和typedef的使用
 *  Ⅰ、结构体指针
 *      > 一个结构体变量的指针就是该结构体变量所占据的内存段的起始地址。
 *      可以设置一个指针变量，用于指向一个结构体变量，此时该指针变量的值就是结构体变量的起始地址。
 *      > 指针变量也可以用来指向结构体数组中的元素，从而能够通过结构体指针快速访问结构体内的每个成员。
 *      > 通过“结构体指针->结构体成员变量”访问结构体中的每个成员。
 *  Ⅱ、typedef的使用
 *      > 使用typedef声明新的类型名，typedef用于起别名
 * */

////结构体指针
//struct student{
//    int num;
//    char name[20];
//    char sex;
//};
//
////结构体指针的使用
//int main() {
//    struct student s={1001,"wangle",'M'};
//    struct student sarr[3]={1001,"lilei",'M',1005,"zhangsan",'M',1007,"lili",'F'};
//    struct student *p;//定义了结构体指针变量
//    p=&s;
//    //使用(*p).num访问成员为什么要加括号呢？原因是"."成员选择的优先级高于“*”(即取值)运算符，所以必须加括号。
//    printf("%d %s %c\n",(*p).num,(*p).name,(*p).sex);//方式1访问通过结构体指针去访问成员
//    //通过"结构体指针变量->成员变量名"来访问结构体中的每个成员
//    printf("%d %s %c\n",p->num,p->name,p->sex);//方式2访问通过结构体指针去访问成员
//    p=sarr;//等价于&sarr[0]
//    printf("%d %s %c\n",(*p).num,(*p).name,(*p).sex);//方式1访问通过结构体指针去访问成员
//    printf("%d %s %c\n",p->num,p->name,p->sex);//方式2访问通过结构体指针去访问成员
//    printf("-----------------------------\n");
//    p=p+1;
//    printf("%d %s %c\n",p->num,p->name,p->sex);
//    return 0;
//}

//结构体指针
typedef struct student{
    int num;
    char name[20];
    char sex;
}stu,*pstu;//stu等价于struct student,pstu等价于struct student*

typedef int INTEGER;//特殊场合使用

//typedef的使用，typedef起别名
int main(){
    stu s={1001,"wangle",'M'};
    stu *p=&s;//定义了一个结构体指针变量
    pstu p1=&s;//定义了一个结构体指针变量
    INTEGER num=10;
    printf("num=%d,p->num=%d\n",num,p->num);
    return 0;
}
