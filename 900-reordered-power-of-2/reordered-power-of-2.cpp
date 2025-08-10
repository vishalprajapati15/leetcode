class Solution {
public:
    unordered_set<string> set;
    void buildStringSet(){
        for(int i=0;i<30;i++){
            string st = to_string(1 << i);
            sort(st.begin(), st.end());
            set.insert(st);
        }
    }
    bool reorderedPowerOf2(int n) {
        if(set.empty()){
            buildStringSet();
        }
        string st = to_string(n);
        sort(st.begin(), st.end());
        return set.count(st);
    }
};