#include<bits/stdc++.h>
using namespace std;


int main(){

// First way of creation
pair<int,int>p = { 1,2};

cout<<p.first<<" "<<p.second<<endl;



// Second way of creation

pair<int,pair<int,int>> pp = {1,{2,3}};

cout<<pp.first<<" "<<pp.second.first<<" "<<pp.second.second<<endl;



// Third way of creation

pair<int,int>arr[] = {{2,3},{4,5},{6,7}};

cout<<arr[2].second;



}