// Practical 1.1

#include<iostream>
using namespace std;

int main()
{
    int arr[50];
    int n,h;

    cout<<"Enter the number of bakery items:";
    cin>>n;

    cout<<"Enter the bakery items:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the number of hours:";
    cin>>h;

    h = h % n;

    for(int j=0;j<h;j++){
        int first = arr[0];

        for(int i=0;i<n-1;i++){
            arr[i] = arr[i+1];
        }
        arr[n-1] = first;
    }

    cout<<"Final display order:";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}

/* if hours is in very large number what to do? (elements < hours)
Solution: h=h%n
It removes unnecessary full rotation
*/
