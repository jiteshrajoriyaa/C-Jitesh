#include<iostream>
using namespace std;

bool f(int num,int *temp){
    if(num>=0 and num<=9){
        int lastDigitOfTemp = (*temp)%10;
        (*temp)/=10;
        return (num == lastDigitOfTemp);
    }

    bool result= (f(num/10,temp) and (num%10)==((*temp)%10));
    (*temp) /= 10;

    return result;
}
int main(){

    int num = 11311;
    int *temp = &num;

    cout<<f(num,temp)<<endl;
    return 0;
}