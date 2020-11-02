#include <iostream>
using namespace std;

int char_count (char *ptr, char c);

int main(){
    int times(0);
    char mystring[] = "Test String";
    char_count(&mystring[0],'s');
    return 0;
}

int char_count (char *ptr, char c){

    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    ptr++;
}