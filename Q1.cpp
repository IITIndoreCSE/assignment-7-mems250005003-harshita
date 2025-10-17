/* Write a program that allows users to enter five words (in the form of c-type strings) and concatenates these words in an alphabetical order 
   with the first character of each word determining the order. For example, if there is a word “africa” and another word “europe”; africa would come before europe in the concatenated string.*/


#include <iostream>
#include <string>
#include<cctype>
#include<algorithm>
using namespace std;

int main(){
   cout<<"Enter 5 words:"<<endl;

   string str[5];

   for(int i = 0; i<5; i++){
      cout<<endl<<"Word "<<i+1<<": ";
      cin>>str[i];
   }


   char strNet[500];

   for(int i = 0; i<5-1;i++){
      for(int j = 0; j<5-i-1;j++){
         if(str[j]>str[j+1]){
            string temp = str[j];
            str[j] = str[j+1];
            str[j+1] = temp;
         }
      }
      

   }

   string newStr;

   for(int i = 0; i<5;i++){
      newStr = newStr + str[i] +" ";
   }

   cout<<newStr;




   return 0;
}










