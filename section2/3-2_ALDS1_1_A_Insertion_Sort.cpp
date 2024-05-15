#include <iostream>
#include <vector>

using namespace std;

int main () {
  //input
  unsigned int N; // 1 <= N <= 100
  cin >> N; 
  vector<int> A(N);
  for(int i=0; i<N; i++) {
    cin >> A[i];
  }
  //sorting and output
  for(int i=1; i<N; i++) {
      //output
    for(int index=0; index<N; index++){
      cout << A[index];
    }
    cout << endl;
    unsigned int pivot;
    unsigned int j=i-1;
    while(A[j] > pivot && j >= 0){
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = pivot;
  }
  for(int index=0; index<N; index++){
      cout << A[index];
  }
  cout << endl;
}