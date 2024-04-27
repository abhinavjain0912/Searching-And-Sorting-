#include <iostream>
using namespace std;

void selectionSort(int input[], int n){
  for(int i = 0 ; i < n-1 ; i++){ // loop for (n-1) rounds
  // Finding The Minimum element
  int min = input[i] , minIndex = i;
  for(int j = i +1 ; j<n ;j++){
    if(input[j]< min){
      min = input[j];
      minIndex = j ; // To figure out index of minimum element for swapping
    }
  }
  //swpping the Minimum Index
  int temp = input[i];
  input[i] = input[minIndex];
  input[minIndex] = temp;
}
}


int main() 
{
    int n;
    cin>> n;
    
    int input[100];
    for(int i=0; i< n ; i++){
      cin>>input[i];
    }
    
    selectionSort(input,n);
    for(int i = 0 ; i < n; i++){
      cout<< input[i]<<" ";
    }
    
}