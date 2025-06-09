#include <iostream>
using namespace std;

int main(){
    try {
        cout << "selamat belajar di Ti umy" << endl;
        throw 0,5; //melempar sebuah interger maka
       
    }
    catch (int a){
        //blok ini akan di eksekusi
        
    }
    catch (...) {
        /*jika selain integer maka blok ini akan di eksekusi*/
       
    }
    return 0;
}  