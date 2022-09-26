    for(auto& entry : map2) {
        cout << entry.first << endl;
        auto& uset = entry.second;
        for (auto iter = uset.begin(); iter != uset.end(); ++iter) {
            cout << *iter << endl;
        }
    }