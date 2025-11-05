#include <stdio.h>

int main() {
    float hours, wage, gross_pay, tax, net_pay;
    
    // prompt the user for number of hours 
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    
    printf("Enter hourly wage: ");
    scanf("%f", &wage);
    
    // Calculate gross pay
    if (hours > 40) {
        gross_pay = (40 * wage) + ((hours - 40) * wage * 1.5); // Overtime (time and a half)
    } else {
        gross_pay = hours * wage;
    }
    
    // find tax
    if (gross_pay <= 600) {
        tax = gross_pay * 0.15;   // 15% for first $600
    } else {
        tax = (600 * 0.15) + ((gross_pay - 600) * 0.20); // 15% on first $600, 20% on the rest
    }
    
    // Net pay
    net_pay = gross_pay - tax;
    
    // Output 
    printf("Gross Pay: %.2f\n", gross_pay);
    printf("Taxes: %.2f\n", tax);
    printf("Net Pay: %.2f\n", net_pay);

    return 0;
}
