#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#define FILE_NAME "./input1.txt"

int main() {
    std::ifstream inputFile("input.txt"); 

    if (!inputFile.is_open()) {
        std::cerr << "Failed to open the input file." << std::endl;
        return 1;
    }

    std::vector<float> monthlySales;
    float sales;
    std::string month;


    while (inputFile >> sales) {
        monthlySales.push_back(sales);
    }

    inputFile.close();

    if (monthlySales.size() != 12) {
        std::cerr << "Error: The input file should contain data for all 12 months." << std::endl;
        return 1;
    }

    // Print the monthly sales report
    std::cout << "Monthly sales report for 2022:\n" << std::endl;
    std::cout << "Month\t\tSales\n" << std::endl;

    std::string months[] = {
        "January  ", "February", "March     ", "April     ",
        "May     ", "June     ", "July     ", "August   ",
        "September", "October  ", "November", "December"
    };

    for (int i = 0; i < 12; ++i) {
        std::cout << months[i] << "\t$" << std::fixed << std::setprecision(2) << monthlySales[i] << std::endl;
    }

    return 0;
}
