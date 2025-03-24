class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>vec;
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i]>0) vec.push_back(asteroids[i]);
            else{
                while(!vec.empty() && abs(asteroids[i])>vec.back() && vec.back()>0)
                    vec.pop_back();
                 if(!vec.empty() && abs(asteroids[i])==vec.back())
                    vec.pop_back();
                else if(vec.empty() || vec.back()<0)
                    vec.push_back(asteroids[i]);
            }
        }
    return vec;
    }
};