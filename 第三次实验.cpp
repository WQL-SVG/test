#include <stdio.h>
int main() {
    char gender;
    float weight;
    printf("�������Ա�'m'��ʾ���ԣ�'f'��ʾŮ�ԣ������أ�");
    scanf("%c %f", &gender, &weight);
    if (gender == 'm') {
        if (weight > 120) {
            printf("��Ѫ��Ϊ200����\n");
        } else {
            printf("��Ѫ��Ϊ180����\n");
        }
    } else if (gender == 'f') {
        if (weight > 100) {
            printf("��Ѫ��Ϊ150����\n");
        } else {
            printf("��Ѫ��Ϊ120����\n");
        }
    } else {
        printf("�Ա���������\n");
    }
    return 0;
}




#include <stdio.h>
int main() {
    int num, digit, count = 0, reversed = 0, temp;
    printf("������һ��������5λ����������");
    scanf("%d", &num);
    temp = num;
    // ����λ����������֡�����
    while (temp != 0) {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp = temp / 10;
        count++;
    }
    printf("����%dλ��\n", count);
    printf("��λ���֣�");
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
            printf("���볬����Χ\n");
    }
    printf("����%d\n", reversed);
    return 0;
}






#include <stdio.h>
int main() {
    int num, a, b, c;
    printf("������һ����λ����");
    scanf("%d", &num);
    if (num < 100 || num > 999) {
        printf("���벻����λ��\n");
    } else {
        a = num / 100;
        b = (num / 10) % 10;
        c = num % 10;
        if (a*a*a + b*b*b + c*c*c == num) {
            printf("%d��ˮ�ɻ���\n", num);
        } else {
            printf("%d����ˮ�ɻ���\n", num);
        }
    }
    return 0;
}





#include <stdio.h>
int main() {
    float p, salary = 500, commission = 0;
    printf("�����빤������p��");
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
    printf("�ܹ��ʣ�%.2fԪ\n", salary + commission);
    return 0;
}
