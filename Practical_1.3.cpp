//Practical 1.3

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, word = "", longest = "";

    cout<<"Enter a sentence:";
    getline(cin, str);

    str = str + " ";

    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            word = word+str[i];
        }
        else{
            if(word.length()>longest.length()){
                longest=word;
            }
            word = "";
        }
    }

    cout<<"Longest word:"<<longest<<endl;

    word = "";
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            word = word+str[i];
        }
        else{
            if(word.length()==longest.length()){
            cout<<word<<" ";
            }
            word = "";
        }
    }
    cout<<endl;
    cout<<"Number of characters:"<<longest.length();

    return 0;
}

/* if two or more words have the same maximum length
Solution: print all longest word
adding an extra loop
*/

