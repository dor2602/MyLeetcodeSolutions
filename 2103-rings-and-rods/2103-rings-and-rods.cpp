class Solution {
public:
    int countPoints(string rings) 
    {
        set<int>red;
        set<int>green;
        set<int>blue;
        for(int i=0;i<rings.size();i+=2)
        {
            if(rings[i] == 'R')
                red.insert(rings[i+1]-'0');
            else if(rings[i] == 'G')
                green.insert(rings[i+1]-'0');
            else blue.insert(rings[i+1]-'0');
        }
        int count = 0;
        for(int i=0;i<10;i++)
            if(red.count(i) && green.count(i) && blue.count(i))
                count++;
        return count;
    }
};