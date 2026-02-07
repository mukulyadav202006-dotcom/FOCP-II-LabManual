#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int freq[1001]={0}; // freq of each singer
    int  x;

    // read songs and count freq at the same time
    for(int i=0;i<n;i++){
        cin>>x;
        freq[x]++;
    }

    int maxCount =0, answer =0;

    // find max freq
    for(int i=0;i<=1000;i++){
        if(freq[i]>maxCount){
            maxCount = freq[i];
            cout<<"maximum count is "<<maxCount;
        }
    }

    // count how many singers have max freq
    for(int i=0;i<=1000;i++){
        if(freq[i]==maxCount){
            answer++;
            cout<<answer;
        }
    }
    cout<<"\nNumber of singers with maximum frequency: "<<answer;
    return 0;
}