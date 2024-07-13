#include <stdio.h>

int main() {
    int set1[] = {1, 2, 3, 4, 5};
    int set2[] = {4, 5, 6, 7, 8};
    int unionResult[10], intersectResult[10], differenceResult[10];
    int unionSize = 0, intersectSize = 0, differenceSize = 0;
    int i, j;

    // Union of set1 and set2
    // Add all elements of set1 to unionResult
    for (i = 0; i < 5; i++) {
        unionResult[unionSize++] = set1[i];
    }
    // Add elements of set2 to unionResult if they are not already present
    for (i = 0; i < 5; i++) {
        int found = 0;
        for (j = 0; j < 5; j++) {
            if (set2[i] == set1[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            unionResult[unionSize++] = set2[i];
        }
    }

    // Intersection of set1 and set2
    // Add elements to intersectResult if they are present in both sets
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (set1[i] == set2[j]) {
                intersectResult[intersectSize++] = set1[i];
                break;
            }
        }
    }

    // Difference of set1 and set2 (set1 - set2)
    // Add elements to differenceResult if they are in set1 but not in set2
    for (i = 0; i < 5; i++) {
        int found = 0;
        for (j = 0; j < 5; j++) {
            if (set1[i] == set2[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            differenceResult[differenceSize++] = set1[i];
        }
    }

    // Print Set 1
    printf("Set 1: { ");
    for (i = 0; i < 5; i++) {
        printf("%d ", set1[i]);
    }
    printf("}\n");

    // Print Set 2
    printf("Set 2: { ");
    for (i = 0; i < 5; i++) {
        printf("%d ", set2[i]);
    }
    printf("}\n");

    // Print Union
    printf("Union: { ");
    for (i = 0; i < unionSize; i++) {
        printf("%d ", unionResult[i]);
    }
    printf("}\n");

    // Print Intersection
    printf("Intersection: { ");
    for (i = 0; i < intersectSize; i++) {
        printf("%d ", intersectResult[i]);
    }
    printf("}\n");

    // Print Difference (set1 - set2)
    printf("Difference (Set 1 - Set 2): { ");
    for (i = 0; i < differenceSize; i++) {
        printf("%d ", differenceResult[i]);
    }
    printf("}\n");

    return 0;
}
