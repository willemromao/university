// ORDENAÇÃO (BUBBLE SORT)

#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int t[n];

    for (int i=0; i<n; i++) scanf("%d", &t[i]);

    for (int j=0; j<n; j++) printf(" %d", t[j]);

    
    

    return 0;
}