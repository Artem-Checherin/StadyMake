#include <iostream>
using namespace std;

int main(int rt, char** tom)
{
    if (rt == 1 ) {
        cout<<"Hello! I can output my command line parameters. Try this\n";
    } else {
        for (int i=0; i<rt; i++) {
            cout<<i<<'\t'<<tom[i]<<endl;
        }
    }
    return 0;
}