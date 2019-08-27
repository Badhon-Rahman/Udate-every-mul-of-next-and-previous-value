#include <iostream>

using namespace std;

void UpdateElement(int arr[], int arrSize){
         int UpdatedArr[arrSize];

         UpdatedArr[0] = arr[0] * arr[1];
         UpdatedArr[arrSize - 1] = arr[arrSize - 1] * arr[arrSize - 2];

         for(int i = 1; i < arrSize - 1; i++){
            UpdatedArr[i] = arr[i - 1] * arr[i + 1];
         }
         cout << "Updated array: ";
         for(int i = 0; i < arrSize; i++){
            cout << UpdatedArr[i] << " ";
         }
}

int main()
{
    int arr[] = { 0, 1, 3, 4, 5, 6, 7, 8, 10};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    UpdateElement(arr, arrSize);
    return 0;
}
