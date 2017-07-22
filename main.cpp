//Chapter 4 Test Programming Project.
//Stephen Williamson
//This program takes a month and year and returns the number of days in said month.

#include <iostream>
using namespace std;

int main() {
    int month;
    int year;
    cout << "Please enter a month (1-12)" << endl;
    cin >> month;
    cout << "Please enter the year (xxxx)" << endl;
    cin >> year;

    if (month == 1) {
        cout << "January has 31 days every year.";
    }
    else if (month == 3){
        cout << "March has 31 days every year.";
    }
    else if (month == 4){
        cout << "April has 30 days every year.";
    }
    else if (month == 5){
        cout << "May has 31 days every year.";
    }
    else if (month == 6){
        cout << "June has 30 days every year.";
    }
    else if (month == 7){
        cout << "July has 31 days every year.";
    }
    else if (month == 8){
        cout << "August has 31 days every year.";
    }
    else if (month == 9){
        cout << "September has 30 days every year.";
    }
    else if (month == 10){
        cout << "October has 31 days every year.";
    }
    else if (month == 11){
        cout << "November has 30 days every year.";
    }
    else if (month == 12){
        cout << "December has 31 days every year.";
    }
    else if (month == 2 && year % 400 == 0){
        cout << year << " was/will be a leap year so February had/will have 29 days.";
    }
    else if (month == 2 && year % 100 == 0){
        cout << year << " was/will not be a leap year so February had/will have 28 days.";
    }
    else if (month == 2 && year % 4 == 0){
        cout << year << " was/will be a leap year so February had/will have 29 days.";
    }
    else if (month == 2){
        cout << year << " was/will not be a leap year so February had/will have 28 days.";
    }
    else
        cout << "The month you entered is not valid.";
    return 0;
}

