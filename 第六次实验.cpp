#include <stdio.h>


void findNumbers() {
    printf("符合条件的两位数：");
    for (int num = 10; num <= 99; num++) {
        int tens = num / 10;  
        int units = num % 10; 
        
        if (num % 3 == 0 && (tens == 5 || units == 5)) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main() {
    findNumbers();
    return 0;
}


#include <stdio.h>
#include <math.h>


int isPrime(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0; 
    }
    return 1;
}

int main() {
    int n;
    printf("请输入一个整数：");
    scanf("%d", &n);
    
    if (isPrime(n)) {
        printf("%d是素数\n", n);
    } else {
        printf("%d不是素数\n", n);
    }
    return 0;
}


#include <stdio.h>


void transpose(int m, int n, int src[][10], int dest[][10]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            dest[j][i] = src[i][j];
        }
    }
}

int main() {
    int arr[3][10] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int trans[10][10]; 
    
    transpose(3, 3, arr, trans);
    
    
    printf("原数组：\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) printf("%d ", arr[i][j]);
        printf("\n");
    }
    printf("转置后的数组：\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) printf("%d ", trans[i][j]);
        printf("\n");
    }
    return 0;
}



#include <stdio.h>


int check(int x, int y, int n) {
    if (x >= 0 && x <= n-1 && y >= 0 && y <= n-1) {
        return 1;
    }
    return 0;
}

int main() {
    int x, y, n;
    printf("请输入x、y、n：");
    scanf("%d %d %d", &x, &y, &n);
    
    if (check(x, y, n)) {
        printf("x和y都在0到%d的区间内\n", n-1);
    } else {
        printf("x或y不在0到%d的区间内\n", n-1);
    }
    return 0;
}


#include <stdio.h>


int digit(int n, int k) {
   
    for (int i = 1; i < k; i++) {
        n /= 10;
    }
    return n % 10;
}

int main() {
    printf("digit(829,1) = %d\n", digit(829, 1));
    printf("digit(829,3) = %d\n", digit(829, 3)); 
    return 0;
}



#include <stdio.h>
#include <string.h>
#include <ctype.h>


void countDuplicates(char str[]) {
    int count[256] = {0}; 
    int len = strlen(str);
    
   
    for (int i = 0; i < len; i++) {
        count[(unsigned char)str[i]]++;
    }
    
    
    printf("重复的字符及次数：\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] >= 2) {
            printf("'%c'：%d次\n", i, count[i]);
        }
    }
}

int main() {
    char str[100];
    printf("请输入字符串：");
    gets(str); 
    countDuplicates(str);
    return 0;
}



#include <stdio.h>


int *find_middle(int a[], int n) {
    int midIndex = n / 2; 
    return &a[midIndex];
}

int main() {
    int arr1[] = {1,2,3,4,5}; 
    int arr2[] = {10,20,30,40}; 
    
    int *mid1 = find_middle(arr1, 5);
    int *mid2 = find_middle(arr2, 4);
    
    printf("arr1的中间元素：%d\n", *mid1); 
    printf("arr2的中间元素：%d\n", *mid2); 
    return 0;
}
