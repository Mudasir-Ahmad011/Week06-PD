#include<iostream>
#include<cmath>
using namespace std;
main() {
    int exam_time_hour, exam_time_minutes, examhour_in_minutes, arrivalhour_in_minutes, totalMinutesExam, totalMinutesArrival, arrival_hour, arrival_minutes;
    int student_arrival_hour, student_arrival_minutes, remaining_minutes;
    string time;
    cout << "Enter the exam starting time(hour): ";
    cin >> exam_time_hour;
    cout << "Enter the exam starting time(minutes): ";
    cin >> exam_time_minutes;
    cout << "Student hour of arrival: ";
    cin >> arrival_hour;
    cout << "Student minutes of arrival: ";
    cin >> arrival_minutes;
    examhour_in_minutes = exam_time_hour * 60;
    totalMinutesExam = examhour_in_minutes + exam_time_minutes;
    arrivalhour_in_minutes = arrival_hour * 60;
    totalMinutesArrival = arrivalhour_in_minutes + arrival_minutes;
    remaining_minutes = totalMinutesExam - totalMinutesArrival;
    int remain_hour = remaining_minutes / 60;
    int remain_minutes = remaining_minutes % 60;
    if (remaining_minutes < 0) {
        time = "late";
        if (arrival_hour > exam_time_hour) {
            if (arrival_minutes >= 30) {
                cout << time << endl << abs(remain_hour) << ":" << abs(remain_minutes) << " hours after the start" << endl;
            }
            else if (arrival_minutes < 30) {
                cout << time << endl << abs(remaining_minutes) << " minutes after the start" << endl;
            }
        }
        else {
            cout << time << endl << abs(remaining_minutes) << " minutes after the start" << endl;
        }
    }
    if (remaining_minutes >= 0 && remaining_minutes <= 30) {
        time = "on time";
        if (arrival_hour > exam_time_hour) {
            cout << time << endl << remain_hour << ":" << remain_minutes << " hours before the start";
        }
        else if (arrival_hour < exam_time_hour) {
            cout << time << endl << remaining_minutes << " minutes before the start" << endl;
        }
        else {
            cout << time;
        }
    }
    if (remaining_minutes > 30) {
        time = "Early";
        if (arrival_hour <= exam_time_hour) {
            if (arrival_minutes <= 30) {
                cout << time << endl << abs(remain_hour) << ":" << abs(remain_minutes) << " hours before the start" << endl;
            }
            else if (arrival_minutes > 30) {
                cout << time << endl << abs(remaining_minutes) << " minutes before the start" << endl;
            }
        }
        else {
            cout << time << endl << remaining_minutes << " minutes before the start" << endl;
        }
    }
}