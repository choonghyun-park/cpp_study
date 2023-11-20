#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // nCr
    int n,r;
    n = 5;
    r = 3;

    vector<int> vec;
    for(int i=0; i<n; i++){
		vec.push_back(i+1);
	}

    vector<int> idx;
	for(int i=0; i<n-r; i++){
		idx.push_back(0);
	}
	for(int i=0; i<r; i++){
		idx.push_back(1);
	}

    int no_of_case = 0;

    do{
		// 출력
		for(int i=0; i<n; i++){
			if(idx[i] == 1){
				cout << vec[i] << ' ';
			}
		}
        cout << endl;
        no_of_case++;
	}while(next_permutation(idx.begin(), idx.end()));

    cout << "no of case : " << no_of_case << endl;
}