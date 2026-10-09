#include <stdio.h>

// Helper function to return the greater of two values
int max(int x, int y) {
    return (x > y) ? x : y;
}

// Function that reads four arguments and returns the greatest of them
int max_of_four(int a, int b, int c, int d) {
    int left_max = max(a, b);
    int right_max = max(c, d);
    return max(left_max, right_max);
}

int main() {
    int a, b, c, d;
    
    // Reads four integers (handles both space-separated or one on each line)
    if (scanf("%d %d %d %d", &a, &b, &c, &d) == 4) {
        int ans = max_of_four(a, b, c, d);
        printf("%d\n", ans);
    }
    
    return 0;
}
