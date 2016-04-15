#include <iostream>
using namespace std;

/*
Problem to solve:
http://pl.spoj.com/problems/PRIME_T/
*/

int f( int l )
{
    int i, r = 0, s = 0;
    for( i = 1; i < l; i++ )
    {
        if( i != 1 &&( l % i ) == 0 )
        {
            r = 1;
            s = s + r;
        }
        else
        {
            r = 0;
            s = s + r;
        }
    }
    if( l != 1 && s == 0 ) cout << "TAK" << endl;
    else cout << "NIE" << endl;

}
int main()
{
    int i, tablica[ 10000 ], l, n;
    //liczba wprowadzanych danych
    cin >> n;
    for( i = 0; i < n; i++ )
    {
        cin >> l;
        tablica[ i ] = f( l );
    }
}
