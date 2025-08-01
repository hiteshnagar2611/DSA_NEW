#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> st;
    st.insert(1); //{1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}

    st.erase(4); //{1,2,3}

    auto it = st.find(3);
    st.erase(it); //{1,2}

    int cnt = st.count(2);
    cout << cnt << endl;

    for(auto i:st){
        cout<<i<<" ";
    }
    cout<<endl;

    set<int> st1;
    st1.insert(1); //{1}
    st1.emplace(3); //{1,3}
    st1.insert(2); //{1,2,3}
    st1.insert(4); //{1,2,3,4}
    st1.insert(5); //{1,2,3,4,5}

    auto it1 = st1.find(2);
    auto it2 = st1.find(3);
    st1.erase(it1, it2);

    for(auto i : st1){
        cout<<i<<" ";
    }

    return 0;
}