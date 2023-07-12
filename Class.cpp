#include <iostream>
using namespace std;

class Data{
    private:
    string nama;
    int age;
    public:
    Data(string n, int a){
        cout << this->age << endl;
        // a = this->age;
        cout << a;
    }

};

int main(){

    Data data("as", 12);

    return 0;
}