#include <iostream>
#include <algorithm>
using namespace std;
int fact(int n)
{
    if(n==1) return 1;
    else if(n==2) return 2;
    else
        return n*fact(n-1);

}
int main() {
        int tests, t, i, n, k;
        cin >> t;
        for(int a=1;a<=t;a++){
                cin >> n >> k;
                if(n<=4) k=min(fact(n),k);
                //cout<<fact(k)<<endl;
                cout << "Case " << a << ":" << endl;
                char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                for(int i=0;i<n;i++)
                {
                    cout<<alp[i];
                }
                cout<<endl;
                for(int x=1;x<k;x++)
                {

                    next_permutation(alp,alp+n);
                     for(int i=0;i<n;i++)
                {
                    cout<<alp[i];
                }
                cout<<endl;
                }
        }
        return 0;
}

