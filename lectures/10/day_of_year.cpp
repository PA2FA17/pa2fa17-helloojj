#include "day_of_year.h"

DayOfYear::DayOfYear(int month, int day) {
  set_month(month);
  set_day(day);
}

void DayOfYear::Output() const {
  // Work with day_ and month_
  string months[] = {
    "Jan",
    "Feb",
    "Mar",
    "Apr",
    "May",
    "Jun",
    "Jul",
    "Aug",
    "Sep",
    "Oct",
    "Nov",
    "Dec"
  };
  cout << months[month_ - 1] << " " << day_ << endl;
}

void DayOfYear::Input(int month, int day) {
  set_month(month);
  set_day(day);
}
int DayOfYear::month() const {
  int month = 100;
  month++;
  cout << month << endl;
  return month_;  
}
int DayOfYear::day() const {
  return day_;
}
// Mutators
void DayOfYear::set_month(int month) {
  if (month < 1 || month > 12) {
    cout << "Invalid Month!\n";
    month = 1;
  }
  month_ = month;
}
void DayOfYear::set_day(int day) {
  if (day < 1 || day > 31) {
    cout << "Invalid Day!\n";
    day = 1;
  }
  day_ = day;
}
