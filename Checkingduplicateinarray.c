#include <stdio.h>

int main() {
    int n, i, j, found = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (found)
        printf("Duplicate exists\n");
    else
        printf("All elements are distinct\n");

    return 0;
}
