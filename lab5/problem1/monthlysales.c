#include <stdio.h>

#define FILE_NAME "./input.txt"

int main() {
    FILE *inputFile = fopen(FILE_NAME, "r");

    if (inputFile == NULL) {
        fprintf(stderr, "Failed to open the input file.\n");
        return 1;
    }

    float monthlySales[12];
    float sales;
    int count = 0;

    while (fscanf(inputFile, "%f", &sales) == 1) {
        if (count >= 12) {
            fprintf(stderr, "Error: The input file should contain data for all 12 months.\n");
            fclose(inputFile);
            return 1;
        }
        monthlySales[count] = sales;
        count++;
    }

    fclose(inputFile);

    if (count != 12) {
        fprintf(stderr, "Error: The input file should contain data for all 12 months.\n");
        return 1;
    }

    // Print the monthly sales report
    printf("Monthly sales report for 2022:\n\n");
    printf("Month\t\tSales\n\n");

    const char* months[12] = {"January      ", "February    ", "March      ", "April     ", "May         ", "June     ", "July    ", "August    ", "September   ", "October    ", "November", "December"};
 
    for (int i = 0; i < 12; ++i) {
        printf("%s\t$%.2f\n", months[i], monthlySales[i]);
    }

    return 0;
}