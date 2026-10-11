#include<iostream>
using namespace std;

int main(){
    int table[10];
    for(int i=0;i<10;i++)
    table[i]=-1;

    int n,id;
    cout<<"Enter no of students:";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter student ID:";
        cin>>id;

        int h1=id%10;
        int h2=7-(id%7);
        int index;
        int count=0;

        while(count<10){
            index=(h1+count*h2)%10;
            if(table[index]==-1){
                table[index]=id;
                break;
            }
            count++;
        }
        if(count==10)
            cout<<"Hash table is full or no slot is reachable for ID: "<<id<<endl;
        else
        table[index]=id;
    }
    cout<<"\nHash table:\n";
    for(int i=0;i<10;i++)
    cout<<"Slot "<<i<<": "<<table[i]<<endl;

    return 0;
}