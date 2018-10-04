#include<iostream>

using namespace std;

int main(){
  int x, y;
  cout<<"Enter x: "<<endl;
  cin>>x;
  cout<<"Enter y: "<<endl;
  cin>>y;
  
  cout<<" ";
  for (int i = 0; i < 10; i++){
    cout<<i<<" "; 
  }
  cout<<"\n";
  for (int _y = 0; _y < 10; _y++){
    cout<<_y;
    for (int _x = 0; _x < 10; _x++){
      if((_y == y)&&(_x == x || _x == x+1 || _x == x-1)){
          cout<<"+ ";
      }
      else if ((_y == y+1 || _y == y-1)&&(_x == x)){
          cout<<"+ ";
      }
      else{
        cout<<"- ";
      }
    }
    cout<<"\n";
  }
}
