#include<iostream>
using namespace std;
string checker(string temperature, string humidity);
main() {
    string temperature, humidity, activity;
    cout << "Enter the temperature: ";
    cin >> temperature;
    cout << "Enter the humidity: ";
    cin >> humidity;
    activity = checker(temperature, humidity);
    cout << activity;
}
string checker(string temperature, string humidity) {
    string activity = "";
    if (temperature == "warm") {
        if (humidity == "dry") {
            activity = "Play tennis";
        }
        if (humidity == "humid") {
            activity = "swim";
        }
    }
    if (temperature == "cold") {
        if (humidity == "dry") {
            activity = "Play basketball";
        }if (humidity == "humid") {
            activity = "Watch TV";
        }
    }
    return activity;
}