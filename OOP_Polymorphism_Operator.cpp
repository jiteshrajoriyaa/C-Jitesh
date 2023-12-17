#include<iostream>
using namespace std;

class Complex{

    public:
    int i,j;

    Complex(int x, int y){
        i = x;
        j = y;
    }

    Complex operator+ (Complex &c){
        Complex ans(0,0);
        ans.i = i + c.i;
        ans.j = j + c.j;

        return ans;
    }
};
int main()
{
    Complex c1(3,4),c2(4,5);
    Complex c3 = c1 + c2;

    cout<<c3.i<<" i"<<c3.j<<endl;
}