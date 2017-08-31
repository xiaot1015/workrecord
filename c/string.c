/*************************************************************************
	> File Name: string.c
	> Author: 
	> Mail: 
	> Created Time: 2017年08月31日 星期四 13时39分59秒
 ************************************************************************/
#include<stdio.h>
int aa = 10 ,bb =20;
int main(){
    int a = 90;
    printf("max num:%d\n bb=%d\n",max(a, &bb),bb);
    //cal1();
    //output();
}

int max(int a, int *b){
    if (a > *b){
        *b = a;
        return a;
    }else{
        return *b;
    }
}
int cal1(){
    int a=2,b=4,c=6,x,y;
    y=(x=a+b,b+c);
    printf("y=%d, x=%d \n",y,x);
    return 0;
}
int cal(){
    int i=5,j=5,p,q,p1;
    p=i++;
    printf("i= %d,p=%d\n",i,p);
    p1=(i++)+(i++)+(i++);
    q=(++j)+(++j)+(++j);
    printf("p=%d,p1=%d,q=%d,i=%d,j=%d\n",p,p1,q,i,j);
    return 0;
}
/**
 * test input and output 
 */
int output(){
    int a,b;
    printf("please input numbers:\n");
    scanf("%d| %d",&a,&b);
    printf("a is %d, b is %d\n",a,b);
    if (a > b){
        printf("a is : %d\n",a);
    }
    printf("b is : %d\n",b);
    return 0;
}
