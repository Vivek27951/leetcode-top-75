class Solution {
public:
    int compress(vector<char>& chars) {
        int read = 0;
        int write = 0;
        int n = chars.size();
        while(read<n){
            char compress_char = chars[read];
            int count = 0;
            
            while(read<n && chars[read]==compress_char){
                read++;
                count++;
            }
            chars[write] = compress_char;
            write++;

            if(count>1){
                string temp = to_string(count);
                for(char ch : temp){
                    chars[write] = ch;
                    write++;
                }
            } 
        }
        return write;
    }
};