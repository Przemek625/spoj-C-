#include <iostream>
#include <list>

using namespace std;

/*
Problem to solve:
http://pl.spoj.com/problems/AL_13_01/
*/

int main()
{
    int test;
    cin>>test;
 for(int i=0;i<test;i++)
{
std::list < int > lista;
int n;
cin>>n;
for( int i = 1; i <= n; i++ )
     lista.push_back( i );

   auto it = lista.end();

for( int i = lista.size() - 1; i > 0; --i )
{
    lista.insert( --it, lista.back() );
    --it;
    lista.pop_back();
}

 for( list < int >::iterator it = lista.begin(); it != lista.end(); ++it )
    {
        cout <<* it << ' ';
    }

}
}
