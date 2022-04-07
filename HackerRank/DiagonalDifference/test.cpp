#include <bits/stdc++.h>

using namespace std;

int main() {
  vector <vector<int>> arr = { 
    {11, 2, 4}, 
    {4, 5, 6}, 
    {10, 8, -12} 
  };

  int left_sum = 0;
  for (int i=0; i < arr.size(); i++) {
      for (int j=0; j < arr.size(); j++) {
          if (i == j) {
              left_sum += arr[i][j];
          }
      }
  }
  
  int right_sum = 0;
  int aux = arr.size();
  for (int k=0; k < arr.size(); k++) {
    aux -= 1;
    right_sum += arr[k][aux];
    printf("Adding arr[%d][%d] = %d\n", k, aux, arr[k][aux]);
  }

  cout << left_sum << " - " << right_sum << endl;

  cout << abs(left_sum - right_sum) << endl;

  return 0;
}