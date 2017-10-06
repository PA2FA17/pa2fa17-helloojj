#include <iostream>
using std::ostream;
using std::cout;
using std::endl;

class Cents {
 public:
  Cents(int cents);
  int cents() { return cents_; }
  friend const Cents operator +(const Cents &c1, const Cents &c2);
  friend bool operator ==(const Cents &c1, const Cents &c2);
  friend ostream& operator <<(ostream &out, const Cents &c);
 private:
  int cents_;
};

int main() {
    Cents one(1), two(2);
    Cents three = one + 2;
    cout << three << 5657 << "  " << endl;
    
    return 0;
}

Cents::Cents(int cents) {
  cents_ = cents;
}

const Cents operator +(const Cents &c1, const Cents &c2) {
    return c1.cents_ + c2.cents_;
}

bool operator ==(const Cents &c1, const Cents &c2) {
  return c1.cents_ == c2.cents_;
}

ostream& operator <<(ostream &out, const Cents &c) {
    
    out << "I have " << c.cents_ << " cents!" << endl;
    return out;
}


