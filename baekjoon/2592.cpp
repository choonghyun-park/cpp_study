#include <iostream>
#include <map>

using namespace std;

int main(){
    int inputs[10] = {};
    map<int,int> cntMap;
    map<int,int>::iterator p;

    for (int &input : inputs){
        cin >> input;
        if (cntMap.find(input)==cntMap.end()){
            cntMap[input]=1;
        }
        else{
            cntMap[input]++;
        }
    }
    double avg = 0;
    for (int input : inputs){
        avg += input;
    }
    avg /= 10.0;
    int fre = 0;
    int fre_value = 0;
    for (auto it=cntMap.begin(); it!=cntMap.end(); it++){
        int cur_fre = it->second;
        if (cur_fre>fre){
            fre = cur_fre;
            fre_value = it->first;
        }
    }

    cout << avg << endl;
    cout << fre_value << endl;
        

}