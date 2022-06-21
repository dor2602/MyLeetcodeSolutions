class Solution {
public:
    string toHex(int num) 
    {
        if(num == 0)
            return "0";
		string Hex = "";
		unsigned int Unum = num;
		while(Unum != 0){
			int d = Unum % 16;
			if(d > 9) Hex.push_back('a' + d % 10);
			else Hex += to_string(d);
			Unum /= 16;
		}
		reverse(Hex.begin(),Hex.end());
		return Hex;
        
    }
};