#include <iostream>
using namespace std;
int main(){
    const int size = 20;
    //changing from stack to heap memory allocaton using new
    int* salArray = new int[size];

    //inputting the salaries
    for(int i=0; i < size; i++){
        cout << "Enter employer " << (i+1) << "'s salary: ";
        cin >> *(salArray+i);
        
    }

    // applying increment formula
    for (int i = 0; i < size; i++) {
        *(salArray+i) = *(salArray+i) +*(salArray+i) / (i + 1);
    }

    // Display updated salaries
    cout << "\nUpdated Salaries: ";
    for (int i = 0; i < size; i++) {
        cout << *(salArray+i) << " ";
    }
    cout << endl;
    delete[]  salArray;
    return 0;
}