#include<iostream>
#include<algorithm>
using namespace std;

void selectionSort(int arr[], int n){
  int minIndex;
  for(int i = 0 ; i < n - 1 ; i++){
    minIndex = i;
    for(int j = i + 1 ; j < n ; j++){
      if(arr[j] < arr[minIndex]){
        minIndex = j;
      }
      if(minIndex != i){
        swap(arr[i],arr[minIndex]);
      }
    }
  }
  for(int i = 0 ; i < n ; i++){
    cout<<arr[i]<<' ';
  }
}
int main()
{
  int array[] = {5,3,2,4,1};
  selectionSort(array,5);
  return 0;
}