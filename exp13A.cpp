//subham
//entc B2
//23070123132
//experiment 13
#include <iostream>
using namespace std;

class fetch {
    int num;
public:
   
    fetch() {
        num = 45;
        cout << num << " 1st" << endl;
    }

   
    fetch(int x) {
        num = x;
        cout << num << " 2nd" << endl;
    }

   
    fetch(const fetch &b) {
        num = b.num;
        cout << num << " copy" << endl;
    }

    
    void disp() const {
        cout << num << endl;
    }
};

int main() {
    fetch f1;     
    fetch f2(25); 
    fetch f3(f1); 

   
    f1.disp();
    f2.disp();
    f3.disp();

    return 0;
}