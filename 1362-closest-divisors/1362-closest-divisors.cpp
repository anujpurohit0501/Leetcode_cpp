class Solution {
public:
int a=1e9;
int one=0,two=0;
    vector<int>f(int x){
        
        for(int i=1;i*i<=x;i++){
            if(x%i==0 ){
                int y=abs(i-x/i);
                if(y<a){
                    one=i;
                    two=x/i;
                    a=y;
                }
            }
        }return {};
        
    }
    vector<int> closestDivisors(int num) {
        f(num+1);
        f(num+2);
        return {one,two};

    }
};