#include<bits/stdc++.h>
using namespace std;

void DecimalToBinary(int n) {
   int binaryNumber[100], num=n;
   int i = 0;
   while (n > 0) {
      binaryNumber[i] = n % 2;
      n = n / 2;
      i++;
   }

   for (int j = i - 1; j >= 0; j--)
      cout << binaryNumber[j];

}


int main()
{
    long long int n;
    while(cin>>n)
    {
        if(n>0)
        {
             //DecimalToBinary(n);



            //cout<<t<<endl;
            long long int k=__builtin_popcount(n);
            cout<<"The parity of ";
            DecimalToBinary(n);
            cout<<' '<<"is"<<' '<<k<<' '<<"(mod 2)"<<'.'<<endl;
        }
        else
        {
            break;
        }
    }
}
