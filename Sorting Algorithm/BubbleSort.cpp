#include<iostream>
#include<algorithm>
using namespace std;
void bubbleSortAsc(int arr[],int n){
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n - i ; j++){
      if(arr[j] > arr[j + 1]){
        swap(arr[j], arr[j + 1]);
      }
    }
  }

  for(int i = 0 ; i < n ; i++){
    cout<<arr[i]<<' ';
  }
}
int main()
{
  int array[] = {5,3,3,2,1};
  bubbleSortAsc(array,5);
  return 0;
}