// //WAP to find the Computer represetation of matrix , union and intersection also.

#include <stdio.h>
#define s 2  // Size of the matrix (2x2)

// Function to display a matrix
void disp(int matrix[s][s]) {
    printf("{\n");
    for (int i = 0; i < s; i++) {
        printf(" { ");
        for (int j = 0; j < s; j++) {
            if (matrix[i][j] != 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("}\n");
    }
    printf("}\n");
}

// Function to find the union of two matrices
void find_un(int m1[s][s], int m2[s][s], int res[s][s]) {
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            res[i][j] = m1[i][j] | m2[i][j];  // Bitwise OR for union
        }
    }
}

// Function to find the intersection of two matrices
void find_in(int m1[s][s], int m2[s][s], int res[s][s]) {
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            res[i][j] = m1[i][j] & m2[i][j];  // Bitwise AND for intersection
        }
    }
}

int main() {
    int m1[s][s], m2[s][s];
    int res_un[s][s], res_in[s][s];

    // Input for Matrix 1
    printf("Enter values for Matrix 1:\n");
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    // Input for Matrix 2
    printf("\nEnter values for Matrix 2:\n");
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    // Find the union and intersection of the matrices
    find_un(m1, m2, res_un);
    find_in(m1, m2, res_in);

    // Display the matrices in their binary (computer) representation
    printf("\nMatrix 1 in binary:\n");
    disp(m1);

    printf("\nMatrix 2 in binary:\n");
    disp(m2);

    // Display the union and intersection in binary (computer) representation
    printf("\nUnion in binary:\n");
    disp(res_un);

    printf("\nIntersection in binary:\n");
    disp(res_in);

    return 0;
}