#include<iostream>
#include<algorithm>
using namespace std;

int binarySearch(int arr[], int key, int low, int high){
  while(low < high){
    int mid = low + (high - low)/2;
    if(arr[mid] < key){
      low = mid + 1;
    }
    else{
      high = mid;
    }
    return high;
  }
}
// Binary Insertion Sort
void binaryInsertionSort(int arr[], int n){
  for(int i = 1 ; i < n ; i++){
      int key = arr[i];
      int insertPosition = binarySearch(arr, key, 0, i);
      for(int j = i ; j > insertPosition; j--){
        arr[j] = arr[j-1];
      }
      arr[insertPosition] = key;
    }
}
int main()
{

  return 0;
}