#include<iostream>
using namespace std;
int main(){
    int x, y;
    int proses;
    cout<<"Masukkan nilai X : ";cin>>x;
    cout<<"Masukkan nilai Y : ";cin>>y;
    cout<<"daftar operator dengan angkanya : "<<endl;
    cout<<"1 = penjumlahan"<<endl;
    cout<<"2 = pembagian"<<endl;
    cout<<"3 = perkalian"<<endl;
    cout<<"4 = pengurangan"<<endl;
    cout<<"Masukkan angka operator : ";cin>>proses;
    if (proses == 1){
        proses=x+y;
        cout<<"Hasil penjumlahan : "<<proses<<endl;
        cout<<"program ini adalah program kalkulator sederhana"<<endl;
    }
    else if (proses == 2){
        proses=x/y;
        cout<<"Hasil pembagian : "<<proses<<endl;
        cout<<"program ini adalah program kalkulator sederhana"<<endl;
    }
    else if (proses == 3){
        proses=x*y;
        cout<<"Hasil perkalian : "<<proses<<endl;
        cout<<"program ini adalah program kalkulator sederhana"<<endl;
    }
    else if (proses == 4){
        proses=x-y;
        cout<<"Hasil pengurangan : "<<proses<<endl;
        cout<<"program ini adalah program kalkulator sederhana"<<endl;
    }
    else {
        cout<<"Anda tidak memilih"<<endl;
    }

    return 0;
}
