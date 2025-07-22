// Abir Seth
// PRN-24070123003
// EnTc A1
// EXP 2 1A
#include <iostream>
#include <string>
using namespace std;

int main () {
    int a;
    cout<<"enter an integer: ";
    cin>>a;
    cout<<"integer = "<<a<<" and size is "<<sizeof(a)<<"bytes"<<endl;
   
    float b;
    cout<<"enter any number with decimal: ";
    cin>>b;
    cout<<"float = "<<b<<"and size is"<<sizeof(b)<<"bytes"<<endl;
   
    string c;
    cout<<"enter any word: ";
    cin>>c;
    cout<<"string="<<c<<"and size is "<<sizeof(c)<<"bytes"<<endl;
   
    double d;
    cout<<"enter any number with bigger decimal; ";
    cin>>d;
    cout<<"double="<<d<<"and size is "<<sizeof(d)<<"bytes"<<endl;
    
    char e;
    cout << "Enter any character : ";
    cin >> e;
    cout << "Char="<<e<<"And the size is:"<< sizeof(e)<<"bytes"<<endl;
    
    bool f;
    cout <<"Enter boolean:";
    cin >> f;
    cout<<"Bolean="<<f<<"And the size is:"<< sizeof(f)<<"bytes"<<endl;
    
    return 0;
    
    
}

enter an integer: 7
integer = 7 and size is 4bytes
enter any number with decimal: 4.9
float = 4.9and size is4bytes
enter any word: king
string=kingand size is 32bytes
enter any number with bigger decimal; 6.876543
double=6.87654and size is 8bytes
Enter any character : S
Char=SAnd the size is:1bytes
Enter boolean:0
Bolean=0And the size is:1bytes


=== Code Execution Successful ===
