#include <bits/stdc++.h>

using namespace std;

int main(){
    priority_queue<int> pq;

    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout<< pq.top()<<endl; // print 10

    pq.pop(); // {8,5,2}

    // size swap empty function same as queue

    priority_queue<int> temp = pq;
    while(!temp.empty()){
        cout<< temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;

    return 0;
}