#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> n;
    for(int i=0; i<5; i++){
		n.push_back(i+1);
	}

    vector<int> ind;
	int k = 3;

	for(int i=0; i<n.size()-k; i++){
		ind.push_back(0);
	}
	for(int i=0; i<k; i++){
		ind.push_back(1);
	}

    do{
		// 출력
		for(int i=0; i<n.size(); i++){
			if(ind[i] == 1){
				printf("%d ", n[i]);
			}
		}

		printf("\n");

	}while(next_permutation(ind.begin(), ind.end()));
}