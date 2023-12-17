#include <iostream>
using namespace std;

int main()
{

    int hcf = 1;
    int n1, n2;
    cin >> n1 >> n2;

    for (int i = 2;i<=n1 && i<=n2; i++)
    {
        if ((n1 % i == 0) && (n2 % i == 0))
        {
            hcf *= i;
        /*  if(n1 % i == 0)*/n1 /= i;
        /* if(n2 % i == 0)*/n2 /= i;
        i--;
        }
    }
    /*for(int i=2;(i<=n1 && i<=n2);i++)
    {
        if((n1%i)==0 && (n2%i)==0)
        {
            hcf=i;
        }
    }*/
    cout << hcf << endl;

    return 0;
}