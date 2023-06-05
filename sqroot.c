#include <stdio.h>
#include <math.h>

double compute_square_root(double n) {
    double guess = 1.0;
    
    while (1) {
        double diff = n - guess * guess;
        
        if (fabs(diff) < 0.000001) {
            return guess;
        }
        
        guess = (guess + n / guess) / 2.0;
    }
}

int main() {
    int start, end;
    
    while (1) {
        printf("Enter the starting value of the table: ");
        scanf("%d", &start);
        
        printf("Enter the ending value of the table: ");
        scanf("%d", &end);
        
        if (start < 0 || end < 0 || start > end) {
            printf("Invalid input. Please reenter the values.\n\n");
        } else {
            break;
        }
    }
    
    printf("Number\tSquare Root\n");
    
    for (int i = start; i <= end; i++) {
        double square_root = compute_square_root((double)i);
        printf("%d\t%.6lf\n", i, square_root);
    }
    
    return 0;
}
