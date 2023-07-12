#include <iostream>
using namespace std;



class Data{
    public:
        string nama;
        int age;
};

class Table{
    public:
        void longLine(int pjg, string tipeLine){
            for(int i = 0; i < pjg; i++){
                cout << tipeLine;
            }
        }

        void getMargin(int pjg){
            for(int i = 0; i < pjg; i++){
                cout << " ";
            }
        }

        int maxText(Data rec[100], int idx){
            int max;
            if(idx <= 1){
                return rec[0].nama.length();
            }
            for(int i = 0; i < idx-1; i++){
                if(rec[i].nama.length() < rec[i+1].nama.length()){
                    max = rec[i+1].nama.length();
                } else {
                    max = rec[i].nama.length();
                }
            }
            return max;
        }
};

int main(){

    Table table;
    int jml = 2;
    Data mhs[jml];
    for(int i = 0; i < jml; i++){
        cout << "nama: ";
        cin >> mhs[i].nama;
        cout << "Age: ";
        cin >> mhs[i].age;
    }
    int max = table.maxText(mhs, jml);
    
    for(int i = 0; i < jml; i++){

    // kolom header
    if(i == 0){
        table.longLine(15 + max, "="); cout << endl;
        cout << "| No | Nama "; table.getMargin(max - 4); cout << "| Age |" << endl;
        table.longLine(15 + max, "="); cout << endl;
    }

    cout << "| " << i+1 << "  | " << mhs[i].nama; table.getMargin(max - mhs[i].nama.length()); cout << " | " << mhs[i].age << "   |" << endl;
    }
        table.longLine(15 + max, "="); cout << endl;
    // for(int i = 0; i < jml; i++){
    //     cout << mhs[i].nama << endl;
    //     cout << mhs[i].age << endl;
    // }

    return 0;
}