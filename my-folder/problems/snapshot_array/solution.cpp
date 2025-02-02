class SnapshotArray {
    vector<map<int,int>> vector;
    int snap_id;
public:
    SnapshotArray(int length) {
        vector.resize(length);
        for(auto& it:vector){
            it[0]=0;
        }
        snap_id=0;
    }
    
    void set(int index, int val) {
        vector[index][snap_id]=val;
    }
    
    int snap() {
        return snap_id++;
    }
    
    int get(int index, int snap_id) {
        map<int,int>& m=vector[index];
        auto i=m.upper_bound(snap_id);
        return (--i)->second;
    }
};
/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */