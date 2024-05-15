#include <iostream>
#include <vector>

using namespace std;

int main () {
  //input
  int N; // 1 <= N <= 100
  cin >> N; 
  vector<int> A(N);
  for(int i=0; i<N; i++) {
    cin >> A[i];
  }
  //sorting and output
  for(int i=1; i<N; i++) {
      //output
    for(int index=0; index<N-1; index++){
      cout << A[index] << " ";
      if(index==N){
        cout << A[index] << endl;
      }
    }
    int pivot = A[i];
    int j=i-1;
    while(A[j] > pivot && j >= 0){
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = pivot;
  }
  for(int index=0; index<N; index++){
      cout << A[index] << " ";
      if(index==N){
        cout << A[index] << endl;
      }
  }
}