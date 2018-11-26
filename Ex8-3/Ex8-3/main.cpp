#include<iostream>
#include<string>
#include<vector>
using namespace std;


void print(string s, vector<int>v){
    cout<<s;
    
    //run through the vector and display them one by one.
    for(int i=0;i<=9; i++){
        cout<<v[i];
        cout<<", ";
    }
}

int fibonacci(int x,int y,vector<int>vf,int n){    //x x and y are the starrting number. v is a vector. n is number of elements to be put into
    vf.push_back(x);   //assignment in vector assignment operation.
    vf.push_back(y);
    //v[2]=y;        //wrong assignment in vector assignment operation.
    
    for(int i=0; i<n; i++){
        int b= 0;
        b = b+vf[i]+vf[i+1];
        vf.push_back(b);
    }
    
    for(int i=0; i<n; i++)
        cout<<vf[i]<<endl;
    return 0;
}


int main(){
    vector<int>vv;
    fibonacci(1,2,vv,5);
    //cout<<"v[1]: "<<vv[1]<<endl;
    //cout<<"end.";
    return 0;
}
