//You have been given a random integer array/list(ARR) of size N.
//You have been required to push all the zeros that are present in the array/list to the end of it.
//Also, make sure to maintain the relative order of the non-zero elements


#include <iostream>
using namespace std;

void pushZerosToEnd(int input[],int n){
  for(int j=0 ; j < n-1 ; j++){
  for(int i =0 ; i < n-1 -j ; i++){
    if(input[i]== 0){
      int temp = input[i];
      input[i] = input[i+1];
      input[i+1] = temp;
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
    
    pushZerosToEnd(input,n);
    for(int i = 0 ; i < n; i++){
      cout<< input[i]<<" ";
    }
    
}