#include <iostream>
using std::cout;
using std::endl;
using std::string;

class DayOfYear {
 public:
  void Output() const;
  void Input(int month, int day);
  // Accessors
  int month() const;
  int day() const;
  // Mutators
  void set_month(int month);
  void set_day(int day);
 private:
  int month_;
  int day_;
};


int main() {
  DayOfYear today, yesterday;
  today.Input(9, 19);
  
  yesterday.Input(90, 118);
  
  cout << "Today is: ";
  today.Output();
  cout << endl;
  
  yesterday.Output();
  cout << yesterday.month() << endl;
  return 0;
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








