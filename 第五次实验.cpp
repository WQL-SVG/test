#include <stdio.h>

// 冒泡法排序（从大到小）
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) { // 前数 < 后数则交换（大的排前面）
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// 选择法排序（从大到小）
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int maxIndex = i; // 假设当前i是最大值下标
        for (int j = i+1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) { // 找到更大的数，更新maxIndex
                maxIndex = j;
            }
        }
        // 交换当前i和maxIndex的元素
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    // 测试冒泡法
    int bubbleArr[6];
    for (int i=0; i<n; i++) bubbleArr[i] = arr[i];
    bubbleSort(bubbleArr, n);
    printf("冒泡法排序结果：");
    for (int i=0; i<n; i++) printf("%d ", bubbleArr[i]);
    printf("\n");

    // 测试选择法
    int selectArr[6];
    for (int i=0; i<n; i++) selectArr[i] = arr[i];
    selectionSort(selectArr, n);
    printf("选择法排序结果：");
    for (int i=0; i<n; i++) printf("%d ", selectArr[i]);
    printf("\n");

    return 0;
}



#include <stdio.h>
#include <ctype.h> // 包含isalpha、isdigit等函数

int main() {
    char ch;
    int letters = 0, spaces = 0, digits = 0, others = 0;

    printf("请输入一行字符：\n");
    while ((ch = getchar()) != '\n') { // 读取到换行符结束
        if (isalpha(ch)) { // 判断是否是英文字母
            letters++;
        } else if (ch == ' ') { // 判断是否是空格
            spaces++;
        } else if (isdigit(ch)) { // 判断是否是数字
            digits++;
        } else { // 其他字符
            others++;
        }
    }

    printf("英文字母：%d个\n", letters);
    printf("空格：%d个\n", spaces);
    printf("数字：%d个\n", digits);
    printf("其他字符：%d个\n", others);

    return 0;
}



#include <stdio.h>

int main() {
    int matrix[5][5];
    int sum1 = 0, sum2 = 0; // sum1：主对角线（左上到右下）；sum2：副对角线（右上到左下）

    printf("请输入5×5矩阵的元素：\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) { // 主对角线：行号=列号
                sum1 += matrix[i][j];
            }
            if (i + j == 4) { // 副对角线：行号+列号=4（5×5矩阵的副对角线条件）
                sum2 += matrix[i][j];
            }
        }
    }

    printf("主对角线元素之和：%d\n", sum1);
    printf("副对角线元素之和：%d\n", sum2);

    return 0;
}



#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len/2; i++) {
        // 交换str[i]和str[len-1-i]
        char temp = str[i];
        str[i] = str[len-1 - i];
        str[len-1 - i] = temp;
    }
}

int main() {
    char a[] = "apple";
    printf("原字符串：%s\n", a);
    
    reverseString(a);
    printf("反转后字符串：%s\n", a); // 输出：elppa

    return 0;
}



#include <stdio.h>

// 生成n阶魔方矩阵（n为奇数）
void magicSquare(int n) {
    int matrix[n][n] = {0}; // 初始化矩阵为0
    int row = 0, col = n/2; // 起始位置：第一行中间列

    for (int num = 1; num <= n*n; num++) {
        matrix[row][col] = num;
        // 下一个位置：左上（行-1，列+1）
        int nextRow = (row - 1 + n) % n; // 越界则循环到最后一行
        int nextCol = (col + 1) % n;     // 越界则循环到第一列

        if (matrix[nextRow][nextCol] != 0) { // 若左上位置已被占用
            nextRow = (row + 1) % n; // 则移动到当前位置的正下方
            nextCol = col;
        }

        row = nextRow;
        col = nextCol;
    }

    // 打印魔方矩阵
    printf("%d阶魔方矩阵：\n", n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    magicSquare(5); // 生成并打印5阶魔方矩阵
    return 0;
}



#include <stdio.h>

int main() {
    double total = 100; // 初始下落100米
    double height = 100; // 初始高度

    for (int i = 1; i < 10; i++) { // 第1次到第9次反弹+下落
        height /= 2; // 反弹高度是原高度的一半
        total += 2 * height; // 反弹后下落，所以加2倍高度
    }
    height /= 2; // 第10次落地后的反弹高度

    printf("第10次落地时，共经过：%.2f米\n", total);
    printf("第10次反弹高度：%.2f米\n", height);

    return 0;
}
