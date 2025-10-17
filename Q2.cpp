/* Write a program that searches for the largest three numbers in an array randomly populated by a user. */
#include <iostream>
using namespace std;

int main(){

int size;
  cout<<"Enter the number of elements in the array: ";
  cin>>size;

  cout<<endl<<"Enter "<<size<<" numbers: "<<endl;
  int arr[size];

  for(int i = 0; i<size; i++){
    cout<<endl<<"Element 1: ";
    cin>>arr[i];
  }

  for(int i = 0; i<size-1;i++){
      for(int j = 0; j<size-i-1;j++){
         if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }
      }
      

   }

   cout<<endl<<"The three largest numbers are:"<<endl;
   cout<<endl<<"1st: "<<arr[size-1]<<endl;
   cout<<endl<<"2nd: "<<arr[size-2]<<endl;
   cout<<endl<<"3rd: "<<arr[size-3]<<endl;
    return 0;
}
