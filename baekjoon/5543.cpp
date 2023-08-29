#include <iostream>

using namespace std;

int main() {
    int burgers[3];
    int drinks[2];
    for (int i=0;i<3;i++){
        cin >> burgers[i];
    }
    for (int i=0;i<2;i++){
        cin >> drinks[i];
    }
    int min_price=4001;
    int price;
    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
            price = burgers[i]+drinks[j]-50;
            if (price<min_price){
                min_price = price;
            }   
        }
    }
    cout << min_price << endl;
}