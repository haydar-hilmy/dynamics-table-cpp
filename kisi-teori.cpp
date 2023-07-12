#include <iostream>
using namespace std;

void no18(){
    struct Mahasiswa{
        string nama;
        int nim;
        float ipk;
    };
    Mahasiswa mhs;
    Mahasiswa* ptrMhs;

    ptrMhs = &mhs;
    ptrMhs->nama = "John Doe"; // jika pointer pakai ->
    mhs.nama = "John Doe"; // jika bukan pointer pakai .

    ptrMhs->ipk = 1234;
    cout << "Alamat pointer ipk: " << &ptrMhs->ipk << endl;
    
}

void no16(){
    struct Person{
        private:
            string name;
            int age;

        public:
            void setName(string n){
                name = n;
            }
            void setAge(int a){
                age = a;
            }
            void displayInfo(){
                cout << "Name: " << name << endl;
                cout << "Age: " << age << endl;
            }
    };
    Person p;
    
}

void no9(){
    int a = 5, b = 10;

    int* ptr = &a;

    cout << "Nilai a: " << a << endl;
    cout << "NIlai yang dirujuk ptr : " << ptr << endl;

    *ptr = 7;

    cout << "NIlai Setelah diubah : " << a << endl;

    ptr = &b;

    cout << "NIlai yang dirujuk stlh diubah : " << *ptr << endl;
    
}

int main(){

    no9();

    // no16();

    // no18();

    return 0;
}