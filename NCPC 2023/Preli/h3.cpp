#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function to determine if a year is a leap year
bool isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

// Function to get the number of days in a month
int daysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

// Function to print the calendar of a given date
void printCalendar(int day, int month, int year, string dayOfWeek) {
    // Printing the header
    cout << "|---------------------------|" << endl;
    cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|" << endl;
    cout << "|---------------------------|" << endl;

    // Finding the day of the week for the 1st of the given month
    int firstDayOfMonth = (day - (dayOfWeek == "Sun" ? 0 : (dayOfWeek == "Mon" ? 1 : (dayOfWeek == "Tue" ? 2 : (dayOfWeek == "Wed" ? 3 : (dayOfWeek == "Thu" ? 4 : (dayOfWeek == "Fri" ? 5 : 6)))))));

    // Printing the calendar
    int currentDay = 1;
    for (int i = 0; i < 6; ++i) {
        cout << "|";
        for (int j = 0; j < 7; ++j) {
            if ((i == 0 && j < firstDayOfMonth) || currentDay > daysInMonth(month, year)) {
                cout << setw(3) << " - ";
            } else {
                cout << setw(3) << currentDay++;
            }
            cout << "|";
        }
        cout << endl << "|---------------------------|" << endl;
    }
}

int main() {
    int day, month, year;
    string dayOfWeek;

    // Input
    cout << "Enter the date (dd/mm/yyyy): ";
    cin >> day;
    getchar(); // Consume the '/'
    cin >> month;
    getchar(); // Consume the '/'
    cin >> year;
    getchar(); // Consume the newline character
    cout << "Enter the day of the week (e.g., Sun, Mon, Tue, etc.): ";
    getline(cin, dayOfWeek);

    // Print the calendar
    printCalendar(day, month, year, dayOfWeek);

    return 0;
}
