#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> table[10];

    int n, id;
    cout<<"Enter no of books:";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter book code:";
        cin>>id;

        int index = id%10;
        table[index].push_back(id);
    }

    cout<<"\nShelf contents:\n";
    for(int i=0;i<10;i++){
        cout<<"Shelf "<<i<<": ";
        for(int j=0;j<table[i].size();j++){
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}