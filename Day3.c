#include <stdio.h>

int main() {
    int n, i, k;
    int arr[100];
    int comparisons = 0;
    int found = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for(i = 0; i < n; i++) {
        comparisons++;
        if(arr[i] == k) {
            found = i;
            break;
        }
    }

    if(found != -1) {
        printf("Found at index %d\n", found);
    } else {
        printf("Not Found\n");
    }

    printf("Comparisons = %d", comparisons);

    return 0;
}

