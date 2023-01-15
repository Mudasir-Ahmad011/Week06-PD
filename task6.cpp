#include<iostream>
using namespace std;
main() {
    string month;
    float number_of_stays;
    float discountstudio, discountapartment;
    float payablestudio;
    float payableapartment;
    float apartment = 0.0;
    float studio = 0.0;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> number_of_stays;

    if (month == "May" || month == "October") {
        studio = 50;
        apartment = 65;
        payablestudio = studio * number_of_stays;
        payableapartment = apartment * number_of_stays;
        if (number_of_stays > 7 && number_of_stays <= 14) {
            discountstudio = payablestudio * (5 / 100.0);
            payablestudio = payablestudio - discountstudio;
        }
        if (number_of_stays > 14) {
            discountstudio = payablestudio * (30 / 100.0);
            payablestudio = payablestudio - discountstudio;
        }
    }
    if (month == "June" || month == "September") {
        studio = 75.20;
        apartment = 68.70;
        payablestudio = studio * number_of_stays;
        payableapartment = apartment * number_of_stays;
        if (number_of_stays > 14) {
            discountstudio = payablestudio * (20 / 100.0);
            payablestudio = payablestudio - discountstudio;
        }
    }
    if (month == "July" || month == "August") {
        studio = 76;
        apartment = 77;
        payablestudio = studio * number_of_stays;
        payableapartment = apartment * number_of_stays;
    }
    if (number_of_stays > 14) {
        apartment = 65;
        discountapartment = payableapartment * (10 / 100.0);
        payableapartment = payableapartment - discountapartment;
    }
    cout << "Apartment: " << payableapartment << endl;
    cout << "Studio: " << payablestudio;
}