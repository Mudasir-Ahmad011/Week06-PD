#include<iostream>
using namespace std;
main() {
    char service_code;
    int number_of_minutes;
    char day_or_night;
    float regularpricefreetime = 10;
    float premiumpricefreetime = 25;
    float price = 0.0;
    cout << "Enter which type of customer you are(Residental or premium)select(r/p): ";
    cin >> service_code;
    if (service_code == 'p' || service_code == 'P') {
        cout << "Press 'D' for day time or Press 'N' for night time)call: ";
        cin >> day_or_night;
    }
    cout << "Enter number of minutes you used the service: ";
    cin >> number_of_minutes;
    if (service_code == 'r' || service_code == 'R') {
        if (number_of_minutes <= 50) {
            price = regularpricefreetime;
        }
        else if (number_of_minutes > 50) {
            price = regularpricefreetime + (number_of_minutes * 0.20);
        }

    }
    if (service_code == 'p' || service_code == 'P') {
        if (number_of_minutes <= 75) {
            if (day_or_night == 'D') {
                price = premiumpricefreetime;
            }
        }
        else if (number_of_minutes > 75) {
            if (day_or_night == 'D') {
                price = premiumpricefreetime + (number_of_minutes * 0.10);
            }
        }

        if (number_of_minutes <= 100) {
            if (day_or_night == 'N') {
                price = premiumpricefreetime;
            }
        }
        else if (number_of_minutes > 100) {
            if (day_or_night == 'N') {
                price = premiumpricefreetime + (number_of_minutes * 0.05);
            }
        }
    }
    cout << "The charges are: " << price;
}