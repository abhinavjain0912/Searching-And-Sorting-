#include <iostream>
using namespace std;

int binarySearch(int a[], int n,int val){
  int start = 0;
  int end = n-1;
  while(start<=end){
    int mid = (start + end) / 2 ;
    if(a[mid] == val){
      return mid;
    }
    else if(val > a[mid]){
      start = mid + 1;
    }
    else{
      end = mid - 1;
    }
  }
  return -1 ;
}

int main() 
{
    int n;
    cin>> n;
    
    int input[100];
    for(int i=0; i< n ; i++){
      cin>>input[i];
    }
    
    int x ;
    cin>>x;
    
    cout<<binarySearch(input,n,x)<<endl;
}