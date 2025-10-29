#include <stdio.h>
int main() {
    char gender;
    float weight;
    printf("请输入性别（'m'表示男性，'f'表示女性）和体重：");
    scanf("%c %f", &gender, &weight);
    if (gender == 'm') {
        if (weight > 120) {
            printf("输血量为200毫升\n");
        } else {
            printf("输血量为180毫升\n");
        }
    } else if (gender == 'f') {
        if (weight > 100) {
            printf("输血量为150毫升\n");
        } else {
            printf("输血量为120毫升\n");
        }
    } else {
        printf("性别输入有误\n");
    }
    return 0;
}




#include <stdio.h>
int main() {
    int num, digit, count = 0, reversed = 0, temp;
    printf("请输入一个不多于5位的正整数：");
    scanf("%d", &num);
    temp = num;
    // 计算位数并拆分数字、逆序
    while (temp != 0) {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp = temp / 10;
        count++;
    }
    printf("它是%d位数\n", count);
    printf("各位数字：");
    temp = num;
    switch (count) {
        case 1:
            printf("%d\n", temp);
            break;
        case 2:
            printf("%d %d\n", temp / 10, temp % 10);
            break;
        case 3:
            printf("%d %d %d\n", temp / 100, (temp / 10) % 10, temp % 10);
            break;
        case 4:
            printf("%d %d %d %d\n", temp / 1000, (temp / 100) % 10, (temp / 10) % 10, temp % 10);
            break;
        case 5:
            printf("%d %d %d %d %d\n", temp / 10000, (temp / 1000) % 10, (temp / 100) % 10, (temp / 10) % 10, temp % 10);
            break;
        default:
            printf("输入超出范围\n");
    }
    printf("逆序：%d\n", reversed);
    return 0;
}






#include <stdio.h>
int main() {
    int num, a, b, c;
    printf("请输入一个三位数：");
    scanf("%d", &num);
    if (num < 100 || num > 999) {
        printf("输入不是三位数\n");
    } else {
        a = num / 100;
        b = (num / 10) % 10;
        c = num % 10;
        if (a*a*a + b*b*b + c*c*c == num) {
            printf("%d是水仙花数\n", num);
        } else {
            printf("%d不是水仙花数\n", num);
        }
    }
    return 0;
}





#include <stdio.h>
int main() {
    float p, salary = 500, commission = 0;
    printf("请输入工程利润p：");
    scanf("%f", &p);
    if (p <= 1000) {
        commission = 0;
    } else if (p <= 2000) {
        commission = (p - 1000) * 0.1;
    } else if (p <= 5000) {
        commission = 1000 * 0.1 + (p - 2000) * 0.15;
    } else if (p <= 10000) {
        commission = 1000 * 0.1 + 3000 * 0.15 + (p - 5000) * 0.2;
    } else {
        commission = 1000 * 0.1 + 3000 * 0.15 + 5000 * 0.2 + (p - 10000) * 0.25;
    }
    printf("总工资：%.2f元\n", salary + commission);
    return 0;
}
