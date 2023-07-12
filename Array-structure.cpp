#include <iostream>
using namespace std;

typedef struct Data{
    string name;
    int age;
};

struct Data2{
    string name;
    int age;
};

int main(){

    Data* data = new Data[10];
    // Data data[10];
    cout << data << endl;
    cout << &data;

    return 0;
}