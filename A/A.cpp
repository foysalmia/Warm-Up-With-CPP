#include<bits/stdc++.h>
using namespace std;

int main() {
  long long int arr[3];

  for (int i = 0; i < 3; i++) {
    cin >> arr[i];
  }

  sort(arr, arr + 3);

  if (arr[2] - arr[1] <= arr[0]) {
    cout << arr[2] << endl;
  } else {
    cout << -1 << endl;
  }

  return 0;
}
