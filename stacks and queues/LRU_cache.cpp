#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class LRUCache {
public:
    //this will store the key ,(value,pointer to the key in list)
    map<int,pair<int,list<int>::iterator>>m;
	//store the key
	//when ever we found a key already there we erase that key from the list and add it to the front .
    list<int> l;
    int size=0;
    LRUCache(int capacity) {
        size=capacity;
         
    }
    
    int get(int key) {
        if(m.find(key)!=m.end()){
            int val=m[key].first;
            l.erase(m[key].second);
            l.push_front(key);
            m[key]={val,l.begin()};
            return val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(l.size()<size){
            if(m.find(key)!=m.end()){
                int val=m[key].first;
                l.erase(m[key].second);
                l.push_front(key);
                m[key]={value,l.begin()};
            }else{
                l.push_front(key);
                m[key]={value,l.begin()} ;
            }
        }
        else{
            if(m.find(key)!=m.end()){
                
                l.erase(m[key].second);
                l.push_front(key);
                m[key]={value,l.begin()} ;
            }else{
                m.erase(l.back());
                l.pop_back();
                l.push_front(key);
                m[key]={value,l.begin()};
            }
        }
    }
};
