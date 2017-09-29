#include "temperature.h"

// CLASS FUNCTION DEFINITIONS GO HERE
Temperature::Temperature() {
  kelvin_ = 0;
}
Temperature::Temperature(double kelvin) {
  kelvin_ = kelvin;
}
Temperature::Temperature(double temp, char unit) {
  kelvin_ = temp;
  if ( toupper(unit) == 'F' ) {
      SetTempFromFahrenheit(temp);
  } else if (toupper(unit) == 'C') {
      SetTempFromCelsius(temp);
  } else {
      SetTempFromKelvin(temp);
    }
  }
void Temperature::SetTempFromKelvin(double kelvin) {
  kelvin_ = kelvin;
}
void Temperature::SetTempFromCelsius(double celsius) {
  kelvin_ = celsius + 273.15;
}
void Temperature::SetTempFromFahrenheit(double fahrenheit) {
  kelvin_ = (5 * (fahrenheit - 32) / 9) + 273.15;
}
double Temperature::GetTempAsKelvin() const {
  return kelvin_;
}
double Temperature::GetTempAsCelsius() const {
  return kelvin_ - 273.15;
}
double Temperature::GetTempAsFahrenheit() const {
  // kelvin_ = ((kelvin_ * 9.0) / 5) + 32;
  return (9 * (kelvin_ - 273.15) / 5) + 32;
}
string Temperature::ToString(char unit) const {
  string s;
  stringstream ss;
  ss << std::setprecision(2) << std::fixed;
  if (toupper(unit == 'K')) {
    ss  << GetTempAsKelvin() << " Kelvin";
  } else if (toupper(unit) == 'C') {
      ss << GetTempAsCelsius() << " Celsius";
  } else if (toupper(unit) == 'F')  {
     ss << GetTempAsFahrenheit() << " Fahrenheit";
  } else {
      ss << "Invalid Unit";
  }
  s = ss.str();
  return s;
}
