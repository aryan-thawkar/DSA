#include<bits/stdc++.h>
using namespace std;


void demoPairs(){
    pair<int , int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int , pair<int , int>> p1 = {1,{3,4}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
    pair<int , int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[1].second<<endl;
}

void demoVectors(){
    vector<int> v(5,100);
    v.push_back(1);
    v.emplace_back(2);
    cout<<v[0]<<endl;
    vector<int> :: iterator it = v.begin();
    cout<<*(it)<<endl;
    it++;
    cout<<*(it)<<endl;
    
    for(vector<int> :: iterator it = v.begin() ; it != v.end() ; it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+1);

    for(auto it = v.begin() ; it != v.end() ; it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    for(auto value : v){
        cout<<value<<" ";
    }
    cout<<endl;
}

void demoList(){
    list<int> l;
    l.push_back(1);
    l.emplace_back(2);
    l.push_front(3);
    l.emplace_front(4);

    for(auto it = l.begin() ; it != l.end() ; it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    l.erase(l.begin());
    l.remove(2);

    for(auto value : l){
        cout<<value<<" ";
    }
    cout<<endl;
}

void demoDeque(){
    deque<int> d;
    d.push_back(1);
    d.emplace_back(2);
    d.push_front(3);
    d.emplace_front(4);

    for(auto it = d.begin() ; it != d.end() ; it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    d.pop_back();
    d.pop_front();

    for(auto value : d){
        cout<<value<<" ";
    }
    cout<<endl;
}

void demoStack(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout<<"Top element: "<<s.top()<<endl;
    s.pop();
    cout<<"Top element after pop: "<<s.top()<<endl;
}

void demoQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout<<"Front element: "<<q.front()<<endl;
    q.pop();
    cout<<"Front element after pop: "<<q.front()<<endl;
}

int main(){
    cout<<"hello world"<<endl;
    demoPairs();
    demoVectors();
    demoList();
    demoDeque();
    demoStack();
    demoQueue();

    return 0;

}
