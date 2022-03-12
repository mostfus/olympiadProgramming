//
//  main.cpp
//  Weird Algorithm
//
//  Created by Maksim Vaselkov on 11.03.2022.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    long long n;
    cin >> n;
    while (true) {
        cout << n << " ";
        if (n == 1) break;
        if (n%2 == 0) n /= 2;
        else n = n*3 + 1;
    }
    cout << "\n";
    return 0;
}
