//WAP to find Computer representation of the set also find union and intersection.

#include <stdio.h>
#define MAX 5  // Size of the sets

// Function to display the set in binary form (computer representation)
void disp(int set[], int size) {
    printf("{ ");
    for (int i = 0; i < size; ++i) {
        if (set[i] != 0) {
            printf("1 ");
        } else {
            printf("0 ");
        }
    }
    printf("} \n");
}


void find_u(int set1[], int set2[], int result[], int size) {
    for (int i = 0; i < size; ++i) {
        result[i] = set1[i] | set2[i];  // Bitwise OR for union
    }
}


void find_i(int set1[], int set2[], int result[], int size) {
    for (int i = 0; i < size; ++i) {
        result[i] = set1[i] & set2[i];  // Bitwise AND for intersection
    }
}

int main() {

    int set1[MAX]={1,2,3,4,0};  
    int set2[MAX]={1,2,0,4,5};  

    int un_res[MAX], is_res[MAX];

    // Find tunion of the sets
    find_u(set1, set2, un_res, MAX);

    // Find  intersection of the sets
    find_i(set1, set2, is_res, MAX);

    // Display the sets in their binary (computer) representation
    printf("Computer representation: \n");
    printf("Set 1: ");
    disp(set1, MAX);

    printf("Set 2: ");
    disp(set2, MAX);

    printf("\nUnion: ");
    disp(un_res, MAX);

    printf("Intersection: ");
    disp(is_res, MAX);

    return 0;
}
