#include <bits/stdc++.h>

using namespace std;

int main(){
    queue<int> q;

    q.push(1); //{1}
    q.push(2); //{1,2}
    q.push(3); //{1,2,3}
    q.emplace(4); //{1,2,3,4}

    queue<int>temp = q;

    while(!temp.empty()){
        cout<< temp.front() <<" ";
        temp.pop();
    }
    cout<<endl;
    
    return 0;
}