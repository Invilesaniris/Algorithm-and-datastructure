#include<bits/stdc++.h>
#include<time.h>
using namespace std;

void printVector(vector<int> A){
    for(int i=0; i<A.size(); ++i)
        cout<<A.at(i)<<" ";
    cout<<endl<<endl;
}
vector<int> InsertionSort(vector<int> A){
    int key;
    for(int j=1; j<A.size(); ++j){
        key=A.at(j);
        int i=j-1;
        while(i>=0 && A.at(i)>key){
            A.at(i+1)=A.at(i);
            --i;
        }
        A.at(i+1)=key;
    }
    return A;
}

vector<int> DecreasingInsertionSort(vector<int> A){
    int key;
    for(int j=2; j<A.size(); ++j){
        key=A.at(j);
        int i=j-1;
        while(i>=0 && A.at(i)<key){
            A.at(i+1)=A.at(i);
            --i;
        }
        A.at(i+1)=key;
    }
    return A;
}



int main(){
    srand(time(0));
    int length;
    do{
        length=rand()%10;
    }while(length==0 || length==1);

    int tmp;
    vector<int> A;

    for(int i=0; i<length; ++i){
        tmp=rand()%100;
        A.push_back(tmp);
    }
    cout<<"end 1"<<endl;

    cout<<length<<endl;
    printVector(A);

    vector<int> res=DecreasingInsertionSort(A);
    printVector(res);




}
