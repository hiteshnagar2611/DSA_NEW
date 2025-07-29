#include <bits/stdc++.h>

using namespace std;

int main(){
    list<int> ls;

    ls.push_back(1); //{1}
    ls.emplace_back(2); //{1,2}
    
    ls.push_front(3); //{3,1,2}
    ls.emplace_front(4); //{4,3,1,2}


    //acces element in list
    list<int>::iterator it=ls.begin();
    it++;
    cout<< *(it) <<endl;


    //traverse list
    for(auto i:ls){
        cout<<i<<" ";
    }

    //rest function same as vector
    //begin, end, size, insert, swap, clear
    

    return 0;
}