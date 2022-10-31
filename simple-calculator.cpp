#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;

  cout << "Operator Option : \n 1) Addition \n 2) Substraction \n 3) "
          "Multiplication \n 4) Division \n 5) Power \n";
  cout << "What do you want to do : ";
  cin >> x;

  float a, b, res = 0;

  if (x == 1) {
    cout << "\n=== ADDITION ===\n First number : ";
    cin >> a;
    cout << " Second number : ";
    cin >> b;

    res = a + b;

  } else if (x == 2) {
    cout << "\n=== SUBSTRACTION ===\n First number : ";
    cin >> a;
    cout << " Second number : ";
    cin >> b;

    res = a - b;

  } else if (x == 3) {
    cout << "\n=== MULTIPLICATION ===\n First number : ";
    cin >> a;
    cout << " Second number : ";
    cin >> b;

    res = a * b;

  } else if (x == 4) {
    cout << "\n=== DIVISION ===\n First number : ";
    cin >> a;
    cout << " Second number : ";
    cin >> b;

    res = a / b;

  } else if (x == 5) {
    cout << "\n=== POWER ===\n First number : ";
    cin >> a;
    cout << " Second number : ";
    cin >> b;

    res = pow(a,b);

  } else {
    cout << "\noops currently we didn't have that option :((\n ";
  }

  cout << "\n=== Result : " << res << " ===\n" << endl;

  return 0;
}
