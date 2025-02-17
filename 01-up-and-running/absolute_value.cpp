#include <cstdio>

int absolute_value(int x) {
    int result = 0;
    if (x < 0) {
        result = x * -1;
    } else if (x > 0) {
        result = x;
    }
    return result;
}

int main() {
    int my_num1 = -10;
    printf("The absolute value of %d is %d.\n", my_num1, absolute_value(my_num1));
    int my_num2 = 10;
    printf("The absolute value of %d is %d.\n", my_num2, absolute_value(my_num2));
    int my_num3 = 0;
    printf("The absolute value of %d is %d.\n", my_num3, absolute_value(my_num3));
}