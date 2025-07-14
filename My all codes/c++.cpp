#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>V;
    V.push_back(10);
    V.push_back(20);
    V.push_back(30);
    V.push_back(40);
    V.push_back(50);

  V.insert(V.begin()+3,3,5);

    for(int i=0;i<V.size();i++)
    {
        cout<<V.at(i)<<" ";
    }

}
