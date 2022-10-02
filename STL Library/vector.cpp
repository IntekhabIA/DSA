#include <iostream>
#include <vector>

//Vector is dynamic

using namespace std;


int main(){
  vector<int> v;
  //capacity means for how many elements memory is allocated 
  cout<<"Capacity ->"  <<v.capacity()<<endl;
  v.push_back(1);
  cout<<"Capacity ->"  <<v.capacity()<<endl;

  
  v.push_back(2);
  cout<<"Capacity ->"  <<v.capacity()<<endl;

  v.push_back(3);
  cout<<"Capacity ->"  <<v.capacity()<<endl;
  
  cout<<"Size ->"<<v.size()<<endl;

  cout<<"Element at 2nd Index"<<v.at(2)<<endl;

  cout<<"front "<<v.front()<<endl;
  cout<<"back "<<v.back()<<endl;

  cout<<"before pop"<<endl;
  for(int i:v){
    cout<<i<<" ";
  } cout<<endl;

  v.pop_back();

  cout<<"after pop"<<endl;
  for(int i:v){
    cout<<i<<" ";
  }cout<<endl;

  //When we clear a vector its size become zero but its capacit(i.e.) memory allocation remain same

  cout<<"before clear size "<<v.size()<<endl;
  v.clear();
  cout<<"after clear size "<<v.size()<<endl;

  vector<int> a(5,1);
  vector<int> last(a);
  for(int i:a){
    cout<<i<<" ";
  }
  cout<<endl;
  
  for(int i: last){
    cout << i <<" ";
  }
  
  cout<<endl;
}

