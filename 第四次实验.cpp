#include <stdio.h>

// 计算最大公约数（辗转相除法）
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("请输入第一个正整数：");
    scanf("%d", &a);
    printf("请输入第二个正整数：");
    scanf("%d", &b);
    
    int gcd_val = gcd(a, b);
    int lcm_val = a * b / gcd_val;  
    
    printf("最大公约数：%d\n", gcd_val);
    printf("最小公倍数：%d\n", lcm_val);
    
    return 0;
}



#include <stdio.h>

int main() {
    int day = 10;
    int remaining = 1;
    for (int i = day - 1; i > 0; i--) {
        remaining = (remaining + 1) * 2;
    }
    printf("小明妈妈总共买了%d块巧克力\n", remaining);
    return 0;
}




#include <stdio.h>

int main() {
    int days = 30;
    long long stranger_give = 30LL * 100000;  
    double millionaire_give = 0.0;
    double money = 0.01;  
    for (int i = 0; i < 30; i++) {
        millionaire_give += money;
        money *= 2;
    }
    printf("陌生人给了百万富翁%lld元\n", stranger_give);
    printf("百万富翁给了陌生人%.2f元\n", millionaire_give);
    return 0;
}





#include <stdio.h>
#include <stdbool.h>


bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}


void verifyGoldbach(int even) {
    for (int i = 2; i <= even / 2; i++) {
        if (isPrime(i) && isPrime(even - i)) {
            printf("%d = %d + %d\n", even, i, even - i);
            break;  
        }
    }
}

int main() {
    int even;
    printf("请输入一个大于2的偶数：");
    scanf("%d", &even);
    if (even % 2 != 0 || even <= 2) {
        printf("输入不是有效的偶数！\n");
        return 1;
    }
    verifyGoldbach(even);
    return 0;
}
