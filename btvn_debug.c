#include <stdio.h>

int sum(int n) {
    int total = 0;
    int i;

    for (i = 1; i <= n; i++) {
        total += i;
    }

    return total;
}

int main() {
    int n = 5;
    int ans = 0;
    int a = 1;

    ans = sum(n);
    printf("Total sum is: %d\n", ans);
    int bug_ans = ans / a;
    printf("Bug ans: %d\n", bug_ans);
    printf(".");
    return 0;
}