#include <bits/stdc++.h>

using namespace std;

int main(){
    queue<int> q;

    q.push(1); //{1}
    q.push(2); //{1,2}
    q.push(3); //{1,2,3}
    q.emplace(4); //{1,2,3,4}

    q.back() += 5 ; // q.back()->4  4+5 = 9
    cout <<q.back()<<endl; //queue {1,2,3,9}

    q.pop(); //{2,9}

    cout<< q.front() <<endl;

    //Size swap empty same as stack
    return 0;
}