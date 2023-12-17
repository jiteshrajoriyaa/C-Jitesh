#include<iostream>
#include<vector>
using namespace std;

class Ract{
    public:
    int l ;
    int r ;

    Ract(int i,int j){
        l = i;
        r = j;
    }

    ~Ract(){
        cout<<"Destructor";
    };
    Ract(Ract &i){
        l = i.l;
        r = i.r;
    }

};
int main(){
    Ract r1(3,4);
    Ract r2 = r1;
    cout<<r2.l<<r2.r;
    cout<<r1.l<<r1.r;
}