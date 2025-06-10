class Solution {
public:
    int MAX_WIDTH;
    string findLine(int i, int j, int eachgaddha,int extragaddha, vector<string>&words){
        string line;
        for(int k=i;k<j;k++){
            line+=words[k];
            if(k==j-1){//last word of line
            continue;
            }
            for(int z=1;z<=eachgaddha;z++){
                line+=" ";
            }
            if(extragaddha>0){
                line+=" ";
                extragaddha--;
            }
        }
        while(line.length() <MAX_WIDTH){
            line+=" ";
        }
        return line;
    }
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>result;
         MAX_WIDTH = maxWidth;
        int i=0;
        int n=words.size();
        while(i<n){
        int j=i+1;
       int lettercount=words[i].length();
       int gaddha=0;
       while(j<n && words[j].length()+1+lettercount+gaddha<=MAX_WIDTH){
        lettercount+=words[j].length();
        gaddha+=1;
        j++;
       }
       int remaining_slots=MAX_WIDTH-lettercount;
       int eachgaddha=gaddha==0? 0:remaining_slots/gaddha;
       int extragaddha=gaddha==0? 0:remaining_slots%gaddha;
       if(j==n){
        eachgaddha=1;
        extragaddha=0;
       }
       result.push_back(findLine(i,j,eachgaddha,extragaddha,words));
       i=j;
        }
    return result;
    }
};