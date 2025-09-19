#include <iostream>
using namespace std;
void analyze__pointer(int* ptr){
    //displays the address that gets stored in the pointer
    cout << "Address pointing to by ptr is: " << ptr << endl;
    cout << "Value stored at this address: " << *ptr << endl;
}

int main(){
    // //task 1
    // int v_to_pass = 100;

    // analyze__pointer(&v_to_pass);
    
    
    //task 2
    // int* dynam_value = new int(120);

    // analyze__pointer(dynam_value);
    // delete dynam_value;
    return 0;
}