#include<iostream>
#include<algorithm>
using namespace std;

void insertionSort(int arr[], int n){
  for(int i = 1 ; i < n ; i++){
    // int key = arr[i];
    // int j = i - 1;
    // while(j >= 0 && arr[j] > key){
    //   arr[j+1] = arr[j];
    //   j--;
    // }
    // arr[j+1] = key;
    for(int j = i ; j > 0 ; j--){
      if(arr[j - 1] > arr[j]){
        swap(arr[j-1],arr[j]);
      }
      else{
        break;
      }
    }
  }
}
int main()
{
  int array[] = {5,-1,3,-5,-6};
  int n = sizeof(array)/sizeof(array[0]);
  insertionSort(array,n);
  for(int i = 0 ; i < n ; i++){
    cout<<array[i]<<' ';
  }
  return 0;
}