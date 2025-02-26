#include <iostream>
#include <string>
#include <stack>


using namespace std;
int main(){
    string str;
    cout << "Enter a text : ";
    cin >> str;

    stack<char> stack_memory;

    for(char c : str){
        stack_memory.push(c);
    }

    str = "";//making str as empty
    
    while(!stack_memory.empty()){
        str += stack_memory.top();
        stack_memory.pop();
    }

    cout << "Reversed string : " << str << endl;

}