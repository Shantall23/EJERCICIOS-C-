#include <iostream>

class Date {
public:
    Date(int m, int d, int y) {
        if (m < 1 || m > 12) {
            month = 1;
        } else {
            month = m;
        }
        day = d;
        year = y;
    }

    int getMonth() { return month; }
    int getDay() { return day; }
    int getYear() { return year; }

    void setMonth(int m) {
        if (m < 1 || m > 12) {
            month = 1;
        } else {
            month = m;
        }
    }
    void setDay(int d) { day = d; }
    void setYear(int y) { year = y; }

    void displayDate() {
        std::cout << month << "/" << day << "/" << year << std::endl;
    }

private:
    int month;
    int day;
    int year;
};

int main() {
    Date date1(5, 12, 2022);
    std::cout << "Fecha 1: ";
    date1.displayDate();

    Date date2(15, 25, 2023);
    std::cout << "Fecha 2: ";
    date2.displayDate();

    return 0;
}