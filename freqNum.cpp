/* this program is trying to find the most freq element in an array
*   created on August 1, 2019
*   by Wendy Xiao
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//the function to find the frequency
int mostFreq(int arr[], int arraySize){

  sort(arr, arr + arraySize); //Sort the array

  int maxCount = 0;
  int res = arr[0];
  int currCount = 1;
  for(int i = 1; i < arraySize; i++){
    if(arr[i] == arr[i-1])
      currCount++;
    else{
      if(currCount > maxCount){
        maxCount = currCount;
        res = arr[i-1];
      }
      currCount = 1;
    }
  }

  //if last elemnt is most freq
  if(currCount > maxCount){
    maxCount = currCount;
    res = arr[arraySize-1];
  }

  return res;
}

//int mostFreqUnsorted();

int main(){
  //first create a random array list from 0 to 24
  srand(time(NULL));

  int rNum[10]; //= rand() % 100;
  int arraySize = 30;
  for(int i = 0; i < arraySize; i++)
    rNum[i] = rand() % 25;

  //then find frequency
  cout << mostFreq(rNum, arraySize) << endl;

  return 0;
}
