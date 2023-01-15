#include<iostream>
using namespace std;
string gradeChecker(float percentage);
main() {
    int English, Math, Chemistry, Social_science, Biology;
    int total_marks;
    float percentage;
    string grade;
    cout << "Enter English marks obtained: ";
    cin >> English;
    cout << "Enter Math marks obtained: ";
    cin >> Math;
    cout << "Enter Chemistry marks obtained: ";
    cin >> Chemistry;
    cout << "Enter Social science marks obtained: ";
    cin >> Social_science;
    cout << "Enter Biology marks obtained: ";
    cin >> Biology;

    total_marks = English + Math + Chemistry + Social_science + Biology;
    percentage = (total_marks * 100) / 500.0;
    grade = gradeChecker(percentage);
    cout << grade;

}
string gradeChecker(float percentage) {
    string grade;
    if (percentage >= 90 && percentage <= 100) {
        grade = "A+";
    }
    else if (percentage >= 80 && percentage <= 90) {
        grade = "A";
    }
    else if (percentage >= 70 && percentage <= 80) {
        grade = "B+";
    }
    else if (percentage >= 60 && percentage <= 70) {
        grade = "B";
    }
    else if (percentage >= 50 && percentage <= 60) {
        grade = "C";
    }
    else if (percentage >= 40 && percentage <= 50) {
        grade = "D";
    }
    else {
        grade = "F";
    }
    return grade;
}
