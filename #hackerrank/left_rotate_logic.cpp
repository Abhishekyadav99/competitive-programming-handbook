vector<int> rotLeft(vector<int> a, int d) {

    vector<int> result;
        
    for (int i = d; i < a.size(); ++i) {
        result.push_back(a[i]);
    }

    for (int i = 0; i < d; ++i) {
        result.push_back(a[i]);
    }

    return result;
}
