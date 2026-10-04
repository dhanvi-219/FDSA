#include <iostream>
using namespace std;

char stack[100];
int top = -1;

void push(char ch){
    top++;
    stack[top] = ch;
}

char pop(){
    char ch = stack[top];
    top--;
    return ch;
}

int priority(char ch){
    if (ch == '+' || ch == '-')
        return 1;

    if (ch == '*' || ch == '/')
        return 2;

    return 0;
}

int main(){
    string infix, postfix = "";

    cout << "Enter expression:";
    cin >> infix;

    for (int i = 0; i < infix.length(); i++){
        char ch = infix[i];

        if (ch >= 'a' && ch <= 'z'){
            postfix = postfix + ch;
        }

        else if (ch == '('){
            push(ch);
        }

        else if (ch == ')'){
            while (stack[top] != '('){
                postfix = postfix + pop();
            }
            pop();
        }

        else{
            while (top != -1 && priority(stack[top]) >= priority(ch)){
                postfix = postfix + pop();
            }

            push(ch);
        }
    }

    while (top != -1){
        postfix = postfix + pop();
    }

    cout << "Postfix:" << postfix;

    return 0;
}