/*
	PROGRAMMERS : AFIZUDIN, ARYAN, AINOL, RIFAT, AMIN
	GROUP : 4
	SUBJECT : FUNDAMENTALS OF PROGRAMMING (SWC1323)
	LECTURER : MDM SITI ROBAYA
	PROGRAM PURPOSE : Write a function named findSalesByCustomer() to search for sales records associated with a specific customer. 
	                  This function should take a customer name as input and display all transactions related to that customer.


*/

#include <iostream>
#include <string>
using namespace std;


// Define a structure to represent a sales record
struct SalesRecord {
    std::string customer;
    std::string date;
    double amount;
    std::string product;
};


// Function to find and display sales records by customer name
void findSalesByCustomer(const std::string& customer_name, const SalesRecord* sales_records, int num_records) {
    std::cout << "BEGIN" << std::endl;
    std::cout << "DECLARE int no, sum, count; double avg" << std::endl;
    std::cout << "INITIALIZE sum = 0, count = 0" << std::endl;
    
    double sum = 0;
    int count = 0;
    
    for (int i = 0; i < num_records; ++i) {
        if (sales_records[i].customer == customer_name) {
            double sale_amount = sales_records[i].amount;
            sum += sale_amount;
            count++;
            
            std::cout << "GET " << sale_amount << std::endl;
            double avg = (count > 0) ? sum / count : 0;
            
            std::cout << "CALCULATE sum = " << sum << std::endl;
            std::cout << "CALCULATE count++" << std::endl;
            std::cout << "COMPUTE avg = " << avg << std::endl;
        }
    }
    
    std::cout << "PRINT sum = " << sum << ", avg = " << (count > 0 ? sum / count : 0) << std::endl;
    std::cout << "END" << std::endl;
}

int main() {
    SalesRecord sales_records[] = {
        {"Rifat", "2024-04-20", 100, "Widget A"},
        {"Amin", "2024-04-21", 150, "Widget B"},
        {"Afi", "2024-04-22", 200, "Widget C"},
        {"Aryan", "2024-04-23", 120, "Widget D"}
    };
    int num_records = sizeof(sales_records) / sizeof(sales_records[0]);

// Search for sales records for a specific customer
    findSalesByCustomer("Rifat", sales_records, num_records);

    return 0;
}


