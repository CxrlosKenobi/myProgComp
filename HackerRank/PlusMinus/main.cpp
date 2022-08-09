#include <bits/stdc++.h>
using namespace std;

void plusMinus(vector <int> arr) {
  float positive = 0., negative = 0., zero = 0.;

  for (int i=0; i < arr.size(); i++) {
    if (arr[i] == 0)
      zero++;
    else if (arr[i] < 0)
      negative++;
    else
      positive++;
  }

  cout << fixed << setprecision(6) << (positive/arr.size()) << endl;
  cout << fixed << setprecision(6) << (negative/arr.size()) << endl;
  cout << fixed << setprecision(6) << (zero/arr.size()) << endl;
}

int main () {
  vector <int> arr = { -4, 3, -9, 0, 4, 1 };
  plusMinus(arr);

  return 0;
}
