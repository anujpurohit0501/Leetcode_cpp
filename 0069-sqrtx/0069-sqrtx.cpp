class Solution {
public:
    int mySqrt(int x) {
        if(x<=1)return x;
        double i=0;

        for(double k=1;k*k<=x;k++)
        {
            i=k;
        }if(i==(int)i)return i;
        else if(ceil(i)>i)return ceil(i);
        return (int)i;
    }
};