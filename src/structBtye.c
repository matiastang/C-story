#include<stdio.h>

struct structOne {
    char a;
    char c;
    int b;
    // char c;
};

struct structTwo {
    long long a;
    char b;
};

struct structThree {
    char a[5];
    int b;
    struct structTwo c;
};

int main() {

    struct structOne one;
    printf("sizeof=%lu\n",sizeof(one));

    struct structTwo two;
    struct structThree three;
    printf("two sizeof=%lu\n three sizeof=%lu\n",sizeof(two),sizeof(three));

    return 0;
}