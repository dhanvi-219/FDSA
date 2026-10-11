
#include<iostream>
using namespace std;

int main(){
    int table[10];

    for(int i=0; i<10; i++){
        table[i] = -1;
    }

    int n, id;
    cout<<"Enter number of vehicles: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Enter registration no: ";
        cin>>id;

        int index = id % 10;
        int count = 0;

        while(table[index] != -1 && count < 10){
            index = (index + 1) % 10;
            count++;
        }

        if(count == 10){
            cout<<"Parking lot is full. Vehicle "<<id<<" can't park."<<endl;
        }
        else{
            table[index] = id;
        }
    }

    cout<<"\nParking Slots:\n";

    for(int i=0; i<10; i++){
        cout<<"Slot "<<i<<": "<<table[i]<<endl;
    }

    return 0;
}
