#include <iostream>
using namespace std;

int main() {
    int numProducts;
    double pricePerProduct;
    int age;
    double discount = 0.0;

    // Asking for number of products bought
    cout << "Enter the number of products bought: ";
    cin >> numProducts;

    // Asking for price per product
    cout << "Enter the price per product: ";
    cin >> pricePerProduct;

    // Checking if the customer qualifies for discount based on the number of products bought
    if (numProducts > 5) {
        // Asking for age if more than 5 products bought
        cout << "Enter your age: ";
        cin >> age;

        // Calculating discount based on age
        if (age >= 1 && age <= 18)
            discount = 0.3; // 30% discount for age between 1 and 18
        else if (age > 18 && age <= 30)
            discount = 0.1; // 10% discount for age between 18 and 30
        else
            discount = 0.05; // 5% discount for age above 30
    }

    // Calculating total cost after discount
    double totalCost = numProducts * pricePerProduct * (1 - discount);

    // Printing the amount to be paid after discount
    cout << "Amount to be paid after discount: $" << totalCost << endl;

    return 0;
}
