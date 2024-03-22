//1.membandingkan indeks sebelum dan setelahnya secara berurutan,jika didapati indeks yg sebelum lebih besar maka ditukar dengan indeks setelahnya
//2.membagi array menjadi beberapa grup,kemudian diletakan sesuai tempatnya digrup tersebut, lalu disatukan kembali ke dalam 1 array
//3.insertion sort, karena memisahkan antara list yang sudah disortir dengan yg belum sehingga list yang belum disortir dapat langsung diletakan di tempat yang benar 

#include <iostream>
using namespace std;

int i,n,j,min_idx;
int faqih[29];

void input()
{
    
    while (true)
    {
        cout <<"masukan banyaknya elemen array : ";
        cin >> n;
        if (n <= 29)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 29 eleman.\n";
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukan elemen array" << endl;
    cout << "====================" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + 1 ) << ": ";
        cin >> faqih[i];
    }
}

void ucp()
{   
    min_idx = 0;
    for ( j = 0; j <= n - 2; j++)
      if (faqih[j] < faqih[min_idx] )
       min_idx=j;
    
    swap (faqih[j],faqih[min_idx]) ;
}
 void display ()
 {  
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    for( int j = 0; j < n; j++)
    {
        cout << faqih[j] << endl; //output setiap element array pada garis baru
    }
    cout << "jumlah pass = " << n-1  << endl;
    cout << endl;  
}


int main()
{
    input();
    ucp();
    display();
    system("pause");
}