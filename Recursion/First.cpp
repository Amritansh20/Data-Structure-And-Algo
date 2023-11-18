#include<iostream>
using namespace std;

// void print(int count){
//     if(count==3)
//     return;
//     else{
//         count++;
//         print(count);
//         cout << count << endl;
//     }
// }

void print(int count){
    if(count==3)
    return;
    else{
        count++;
        cout << count << endl;
        print(count);
    }
}

int main(){
    print(0);
}

// Note the difference between two functions.