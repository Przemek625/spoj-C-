#include <iostream>

using namespace std;

/*Problem to solve:
http://pl.spoj.com/problems/TRN/
*/

int main()
{
   int w,k,l,i,p,t[200][200];

cin>>w;
cin>>k;

for(i=1;i<=w;i++)
{
    for(p=1;p<=k;p++)
    {
        cin>>l;
        t[i][p]=l;
    }
}


 for(p=1;p<=k;p++)
{
    for(i=1;i<=w;i++)
    {
        cout<<t[i][p]<<' ';
    }

    cout<<"\n";
}


}
