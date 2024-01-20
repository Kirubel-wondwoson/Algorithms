#include<iostream>
using namespace std;

int binarySearch(int arr[], int n,  int key){
  int found = 0, index = 0;
  int bottom = 0,  top = n - 1, mid;
  do{
    mid = (bottom + top)/2;
    if(arr[mid] == key){
      found = 1;
    }
    else{
      if(arr[mid] > key){
        top = mid - 1;
      }
      else {
        bottom = mid + 1;
      }
    }
  }while(found == 0 && top >= bottom);

  if(found == 0){
    index = -1;
  }
  else{
    index = mid;
  }
  return index;
}

int main()
{
  int arr[] = {3,5,7,8,12,15,54};
  int n = sizeof(arr)/sizeof(arr[0]);
  int index = binarySearch(arr,n,12);
  cout<<index;
  return 0;
}