#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct _res{
    int max;
    int min;
    int gap;
}res;

int main() {
    int K;
    cin >> K;
    vector<res> results;
    for (int i=0;i<K;i++){
        int N;
        cin >> N;
        vector<int> scores;
        int score;
        for (int j=0;j<N;j++){
            cin >> score;
            scores.push_back(score);
        }
        sort(scores.begin(),scores.end());
        int max,min,gap,temp_gap;
        max = scores.back();
        min = scores.front();
        gap = 0;
        
        for (auto it=scores.begin();it!=scores.end()-1;it++){
            temp_gap = *(it+1)-*it;
            if (temp_gap > gap){
                gap = temp_gap;
            }
        }
        res r = {max,min,gap};
        results.push_back(r);
    }
    for (int i=0;i<K;i++){
        res r = results[i];
        cout << "Class " << (i+1) << endl;
        cout << "Max " << r.max << ", " << "Min " << r.min << ", " << "Largest gap " << r.gap << endl;
    }
}