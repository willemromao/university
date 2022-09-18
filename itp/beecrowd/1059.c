#include <stdio.h>
 
int main() {
    
    int n, i;

    for (i = 1; i <= 100; i++) {
        n = i % 2;
        if (n % 2 == 0)
            printf("%d\n", i);
    }
 
    return 0;
}