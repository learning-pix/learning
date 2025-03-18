#include <stdio.h>

double calculateBonus(int profit) {
    double bonus = 0.0;

    if (profit <= 100000) {    //if语句只有6，7剩下的都是else
        bonus += profit * 0.1;
    } else {
        bonus += 100000 * 0.1;
        if (profit <= 200000) {
            bonus += (profit - 100000) * 0.075;
        } else {
            bonus += 100000 * 0.075;
            if (profit <= 400000) {
                bonus += (profit - 200000) * 0.05;
            } else {
                bonus += 200000 * 0.05;
                if (profit <= 600000) {
                    bonus += (profit - 400000) * 0.03;
                } else {
                    bonus += 200000 * 0.03;
                    if (profit <= 1000000) {
                        bonus += (profit - 600000) * 0.015;
                    } else {
                        bonus += 400000 * 0.015;
                        bonus += (profit - 1000000) * 0.01;
                    }
                }
            }
        }
    }

    return bonus;
}

int main() {
    int profit = 0;

    printf("请输入利润:\n");
    scanf("%d", &profit);

    double bonus = calculateBonus(profit);

    printf("奖金为%.2f\n", bonus);

    return 0;
}
//这比常规的版本多了一个根据不同的利润区间正确计算并累加奖金。