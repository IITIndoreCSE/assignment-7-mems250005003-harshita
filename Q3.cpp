/* Write a function that takes an array an a parameter and modifies every element by multiplying it with the current values of elements before and after it. The element before the first element is considered to be a 1; 
  similarly the element after the last element is also considered a 1. The first is first multiplied, the second element is subsequently multiplied by the new value of the first element and the third element, and so on. */
#include <iostream>
using namespace std;

int main(){
  int size;
  cout<<"Enter the number of elements: ";
  cin>>size;

  cout<<endl<<endl<<"Enter "<<size<<" elements: "<<endl;
  int arr[size];

  for(int i = 0; i<size; i++){
    cin>>arr[i];
  }

  for(int i = 0; i<size; i++){
    if(i==0){
      arr[i] = arr[i]*arr[i+1];
    }
    else if(i==size-1){
      arr[i] = arr[i]*arr[i-1];
    }
    else{
      arr[i] = arr[i-1]*arr[i]*arr[i+1];

    }
  }

  cout<<"Modified array:"<<endl;

  for(int i = 0; i<size; i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}
