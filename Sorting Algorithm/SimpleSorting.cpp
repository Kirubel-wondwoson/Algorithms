#include<iostream>
#include<algorithm>
using namespace std;

void simpleSort(int arr[], int n){
  for(int i = 0 ; i < n-1 ; i++){
    for(int j = i + 1; j < n ; j++){
      if(arr[i] > arr[j]){     // n(n-1)/2  number of coditions performed
        swap(arr[i],arr[j]);   // n(n-1)/2 number of swaping performed in the worest case
      }   
    }                          // Total O(n2) number of operations performed
  }
  //sort
  for(int i = 0 ; i < n ; i++){
    cout<<arr[i]<<' ';
  }
}
int main()
{
  int array[] = {5,3,1,-2,-7};
  simpleSort(array, 5);
  return 0;
}