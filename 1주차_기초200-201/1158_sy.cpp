#include <iostream>
#include <list>
#include <vector>

using namespace std;
int main() {
    int n, k;
    cin >> n;
    cin >> k;

    list<int> l;
    list<int>::iterator it;
    vector<int> v;

    for (int i = 0; i < n; i++)
        l.push_back(i+1);

    it = l.begin();
    for (int t = 0; t < n; t++) {
        for (int p = 0; p < k-1; p++) {
            it++;
            if (it == l.end()) //순환
                it = l.begin();
        }
       
        v.push_back(*it);
        it=l.erase(it); // 삭제후 다음 원소를 가리키는 iter 반한
        if (it == l.end())
            it = l.begin();
    }
    cout << "<";
    for (int t = 0; t < n; t++) {
        if (t == n - 1)
            cout << v.at(t) << ">";
        else
           cout << v.at(t) << ", ";
    }

}
