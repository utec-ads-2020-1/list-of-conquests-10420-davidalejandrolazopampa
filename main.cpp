//David Lazo 201810010
//UVA 10420
#include<iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[]) {
    int num;
    cin >> num;
    map<string, int> count;
    string pais;
    while (num--)
    {
        cin >> pais;
        string temp;
        getline(cin, temp);
        count[pais] += 1;
    }
    map<string, int>::const_iterator inicio;
    for (inicio = count.begin(); inicio != count.end(); ++inicio){
        cout << inicio->first << " " << inicio->second << '\n';
    }
    return 0;
}