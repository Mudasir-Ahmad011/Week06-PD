#include<iostream>
using namespace std;
float totalprice(string weekday, string fruit, float quantity);
main() {
    string fruit, weekday;
    float quantity;
    float price = 0.0;
    cout << "Enter a fruit name: ";
    cin >> fruit;
    cout << "Enter any weekday: ";
    cin >> weekday;
    cout << "Enter the quantity: ";
    cin >> quantity;
    price = totalprice(weekday, fruit, quantity);
    cout << "Your total price is " << price;
}
float totalprice(string weekday, string fruit, float quantity) {
    float price = 0.0;
    if (weekday == "monday" || weekday == "tuesday" || weekday == "wednesday" || weekday == "thursday" || weekday == "friday") {
        if (fruit == "banana") {
            price = 2.50 * quantity;
        }
        else if (fruit == "apple") {
            price = 1.20 * quantity;
        }
        else if (fruit == "orange") {
            price = 0.85 * quantity;
        }
        else if (fruit == "grapefruit") {
            price = 1.45 * quantity;
        }
        else if (fruit == "kiwi") {
            price = 2.7 * quantity;
        }
        else if (fruit == "pineapple") {
            price = 5.50 * quantity;
        }
        else if (fruit == "grapes") {
            price = 3.85 * quantity;
        }
    }
    if (weekday == "saturday" || weekday == "sunday") {
        if (fruit == "banana") {
            price = 2.70 * quantity;
        }
        else if (fruit == "apple") {
            price = 1.25 * quantity;
        }
        else if (fruit == "orange") {
            price = 0.90 * quantity;
        }
        else if (fruit == "grapefruit") {
            price = 1.60 * quantity;
        }
        else if (fruit == "kiwi") {
            price = 3.00 * quantity;
        }
        else if (fruit == "pineapple") {
            price = 5.60 * quantity;
        }
        else if (fruit == "grapes") {
            price = 4.20 * quantity;
        }
    }
    return price;
}