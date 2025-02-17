/*
企业发放的奖金根据利润提成
#1.利润=porfit低于或等于10万元时，奖金=bonus提10%
#2.100k< porfit <200k ,低于100k部分按10%提成，高于100k部分按7.5%提成
#3.200k< porfit < 400k , 高于200k部分，提成5%
#4.400k < porfit < 600k , 高于400k部分, 提成3%
#5.600k < porfit < 1000k ,高于600k部分, 提成1.5%
#6.1000k < porfit ,高于1000k部分, 提成1%
输入月利润
， 求发放金额总数*/



# include <stdio.h>

void porfit1 (int a,int *b1){
    *b1 = a * 0.1;
}

void porfit2 (int b,int *b2){
    *b2 = (b - 100000) * 0.075;
}

void porfit3 (int c, int *b3){
    *b3 = (c - 200000) * 0.05;
}
void porfit4 (int d, int *b4){
    *b4 = (d - 400000) * 0.03;
}

void porfit5 (int e, int *b5){
    *b5 = (e - 600000) * 0.015;
}

void porfit6 (int f, int *b6){
    *b6 = (f -1000000) * 0.01;
}

int main(){
    int b = 0;
    int p = 0;
    int b1 = 0;

    printf("请输入利润:\n");
    scanf ("%d", &p);

    if (p <= 100000){ //所有if里都忘加 = 了
        porfit1(p, &b);
    }
    else if (p > 100000 && p < 200000){
        porfit2(p, &b);
        porfit1(100000, &b1);
        b =b + b1;
    }
    else if (p > 200000 && p < 400000){
        porfit3(p, &b);
    }
    else if (p > 400000 && p < 600000){
        porfit4(p, &b);
    }
    else if (p > 600000 && p <1000000){
        porfit5(p,&b);
    }
    else{
        porfit6(p, &b);
    }

printf ("奖金为%d\n", b);

    return 0;
}
//可以但不咋地。