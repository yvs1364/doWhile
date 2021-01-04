#include <iostream>

using namespace std;

int main(){
    int numOfChild(0);
    
    do {
        cout << "--------Hey!--------" << endl;
        cout << "how many children do you have?" << endl;
        cin >> numOfChild;
        if(numOfChild < 0) {
            cout << "Wrong number!" << endl;
        }
    }while(numOfChild < 0);

    cout << "Thank you for entering the correct number of children! You have : " << numOfChild << endl;
}