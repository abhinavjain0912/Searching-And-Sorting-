#include <iostream>
using namespace std;

void bubbleSort(int input[], int n){
  for(int j = 0; j< n-1 ; j++){
  for(int i =0 ; i < n-1-j ; i++){ // (n-1-j) To avoid comparison as largest element is placed
  if(input[i] > input[i+1]){
    // Swapping 
    int temp= input[i];
    input[i] = input[i+1];
    input[i+1]= temp;
  }

}
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
    
    bubbleSort(input,n);
    for(int i = 0 ; i < n; i++){
      cout<< input[i]<<" ";
    }
    
}