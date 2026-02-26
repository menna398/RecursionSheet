#include <iostream>
using namespace std;

void EvenIndex(int arr[] , int i) { // 1 4 2 7 , 3 2 1 0
   
    if (i < 0)
        return;

    if (i % 2 == 0){
        if (i == 0) {
            cout << arr[i]; 
        }
        else {
            cout << arr[i] << " "; // 2 1
        }
    }
        

    EvenIndex(arr, i - 1); // 2 1 0

}

int main()
{
    int n;
    cin >> n; //4

    int arr[1000]; // i mean n but the error in compiler

    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // 1 4 2 7  ---> 2 1
    }

    EvenIndex(arr, n - 1); // 1 4 2 7 , 3

}


