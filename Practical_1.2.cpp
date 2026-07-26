//Practical 1.2

#include<iostream>
using namespace std;

int main(){
    int arr[50];
    int n;

    cout<<"Enter the number of borrow records:";
    cin>>n;

    cout<<"Enter the book ID:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Book IDs borrowed more than once:";

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }
    return 0;
}

/* if the number of borrow records is very large
Solution: Reduce the number of comparisons.
The current program compares every book ID with the remaining book IDs.
*/
