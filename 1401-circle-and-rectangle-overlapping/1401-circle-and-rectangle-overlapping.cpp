class Solution {
public:
int r,h,k;
bool f(int a,int b){
    long long dis=(a-h)*(a-h)+(b-k)*(b-k);
    return dis<=r*r;
}
    bool checkOverlap(int r, int h, int k, int x1, int y1, int x2, int y2) {
        this->r=r;this->h=h;this->k=k;
        if(h>=x1 && k>=y1&&h<=x2 && k<=y2)return true;
        for(int i=y1;i<=y2;i++){
            if(f(x1,i))return true;
        }
        for(int i=x1;i<x2;i++){if(f(i,y2))return true;}
        for(int i=y2;i>=y1;i--){if(f(x2,i))return true;}
        for(int i=x2;i>=x1;i--){if(f(i,y1))return true;}
        return false;
    }
};