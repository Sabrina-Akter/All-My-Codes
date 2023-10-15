#include <bits/stdc++.h>
using namespace std;

class RandomizedSet {
public:
    unordered_map <long long, long long> un_map;
    vector <long long> r_set;
    RandomizedSet() {
        r_set.clear();
    }
    
    bool insert(int val) {
        if(un_map.count(val))
        {
            return false;
        }
        else
        {
            un_map[val] = r_set.size();
            r_set.push_back(val);
            return true;
        }
    }
    
    bool remove(int val) {
        if(un_map.count(val)==0)
        {
            return false;
        }
        else
        {
            long long val_index = un_map[val];
            long long last_index = r_set.size()-1;
            swap(r_set[val_index], r_set[last_index]);
            r_set.pop_back();

            un_map[r_set[val_index]] = val_index;
            un_map.erase(val);
            return true;
        }
    }
    
    int getRandom() {
        long long rand_ind = rand() % r_set.size();
        return r_set[rand_ind];
    }
};

int main()
{
    

    return 0;
}