#include <iostream>
using namespace std;

string reverse_func(string& user_str){
    string revved;
    int size = user_str.size();
    for(int i=0; i < size; i++){
        revved.push_back(user_str[(size-1)-i]);
    }
    cout << revved;
    return revved;
}

int main(){
    string user;
    cout << "Enter a string to be reversed: ";
    getline(cin,user);
    string reversed_user = reverse_func(user);
    cout << "reversed is: " << reversed_user;
    return 0;
}