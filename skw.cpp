#include<bits/stdc++.h>
using namespace std;  


int main(){

    int s;
    cin >> s;
    int arr[s];
    for(int i = 0; i<s ; i++ ){
        cin>>arr[i];
    }

    map<int, int>mpp;
    for(int i=0; i<s; i++){
        mpp[arr[i]]++;
    }   

    for(auto it : mpp){
        cout<<it.first<<"->"<<it.second<<endl;
        
    }

    

    int q;
    cin >> q;
    cout<< "number of queries: " << endl;
    while (q--){
        int c;
        cin >> c;
        cout << mpp[c]<< "Repetitions" << endl;
    }



    return 0;
}