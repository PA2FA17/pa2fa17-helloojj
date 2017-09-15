#include <iostream>
using namespace std;

void FillUp(int scores[], int size);
void Output(int scores[], int size);
int Highest(int scores[], int size);

int main() {
    const int kSize = 5;
    int scores[] = { 1, 2, 3, 4, 5};
    Output(scores, kSize);
    cout << "Highest Value: " << Highest(scores, kSize);
    FillUp(scores, kSize);
    Output(scores, kSize);
    cout << "Highest Value: " << Highest(scores, kSize);
    
    return 0;
}
void FillUp(int scores[], int size) {
  for (int i = 0; i < size; i++) {
      cout << "Enter Score #" << i + 1 << ": ";
      cin >> scores[i];
  }    
}

void Output(int scores[], int size) {
    for (int i = 0; i < size - 1; i++) {
        cout << scores[i] << ", ";
    }
    cout << scores[size - 1] << endl;

}

int Highest(int scores[], int size) {
    int highest = scores[0];
    for (int i = 1; i < size; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
        }
    }
    return highest;
}