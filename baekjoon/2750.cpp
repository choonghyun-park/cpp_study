#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    int N,value;
    std::cin >> N;
    std::vector<int> v;
    for (int i=0;i<N;i++){
        std::cin >> value;
        v.push_back(value);
    }
    sort(std::begin(v),std::end(v));

    for (int i=0;i<N;i++){
        std::cout << v[i] << std::endl;
    }
}