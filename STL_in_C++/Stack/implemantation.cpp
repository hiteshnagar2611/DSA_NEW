// last in first out ( LIFO )

#include <bits/stdc++.h>

using namespace std;

int main(){
    stack<int> st;

    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.emplace(4); //{4,3,2,1}

    cout<< st.top()<<endl; //print 4

    st.pop(); //{3,2,1}

    st.size(); // size = 3

    st.empty(); // F or 0

    return 0;
}