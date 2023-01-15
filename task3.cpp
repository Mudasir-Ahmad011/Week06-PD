#include<iostream>
using namespace std;
string zodiacsignChecker(int day, string month);
main() {
    int day;
    string month, zodiac_sign;
    cout << "Day = ";
    cin >> day;
    cout << "Month = ";
    cin >> month;
    zodiac_sign = zodiacsignChecker(day, month);
    cout << zodiac_sign;
}
string zodiacsignChecker(int day, string month) {
    string zodiac_sign;
    if (month == "march") {
        if (day >= 1 && day <= 20) {
            zodiac_sign = "Pisces";
        }
        else if (day >= 21 && day <= 31) {
            zodiac_sign = "Aries";
        }
    }
    else if (month == "april") {
        if (day >= 1 && day <= 19) {
            zodiac_sign = "Aries";
        }
        else if (day >= 20 && day <= 30) {
            zodiac_sign = "Taurus";
        }
    }
    else if (month == "may") {
        if (day >= 1 && day <= 20) {
            zodiac_sign = "Taurus";
        }
        else if (day >= 21 && day <= 31) {
            zodiac_sign = "Gemini";
        }
    }
    else if (month == "june") {
        if (day >= 1 && day <= 20) {
            zodiac_sign = "Gemini";
        }
        else if (day >= 21 && day <= 30) {
            zodiac_sign = "Cancer";
        }
    }
    else if (month == "july") {
        if (day >= 1 && day <= 22) {
            zodiac_sign = "Cancer";
        }
        else if (day >= 23 && day <= 31) {
            zodiac_sign = "Leo";
        }
    }
    else if (month == "august") {
        if (day >= 1 && day <= 22) {
            zodiac_sign = "vigro";
        }
        else if (day >= 23 && day <= 22) {
            zodiac_sign = "Vigro";
        }
    }
    else if (month == "september") {
        if (day >= 1 && day <= 22) {
            zodiac_sign = "Vigro";
        }
        else if (day >= 23 && day <= 30) {
            zodiac_sign = "Libra";
        }
    }
    else if (month == "october") {
        if (day >= 1 && day <= 22) {
            zodiac_sign = "Libra";
        }
        else if (day >= 23 && day <= 31) {
            zodiac_sign = "Scorpio";
        }
    }
    else if (month == "november") {
        if (day >= 1 && day <= 21) {
            zodiac_sign = "scorpio";
        }
        else if (day >= 22 && day <= 30) {
            zodiac_sign = "Sagittarius";
        }
    }
    else if (month == "december") {
        if (day >= 1 && day <= 21) {
            zodiac_sign = "Sagittarius";
        }
        else if (day >= 22 && day <= 31) {
            zodiac_sign = "Capricon";
        }
    }
    else if (month == "january") {
        if (day >= 1 && day <= 19) {
            zodiac_sign = "Capriocon";
        }
        else if (day >= 20 && day <= 28) {
            zodiac_sign = "Aquarius";
        }
    }
    else if (month == "february") {
        if (day >= 1 && day <= 18) {
            zodiac_sign = "Aquarius";
        }
        else if (day >= 19 && day <= 28) {
            zodiac_sign = "Pisces";
        }
    }
    return zodiac_sign;
}