#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int>li;
   li.push_back(10);
   li.push_back(20);
   li.push_back(30);
   li.push_back(40);
   li.push_back(50);
   li.push_back(60);
   li.push_front(5);
   li.push_back(4);

   for(auto it:li)
   {
       cout<<it<<" ";
   }
   cout<<endl;
}
