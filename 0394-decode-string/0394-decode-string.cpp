class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;
        stack<std::string> strStack;
        string currentString;
        int currentNumber = 0;

    for (char c : s) {
        if (isdigit(c)) {
            currentNumber = currentNumber * 10 + (c - '0');
        } else if (c == '[') {
            numStack.push(currentNumber);
            strStack.push(currentString);
            currentNumber = 0;
            currentString.clear();
        } else if (c == ']') {
            int num = numStack.top(); numStack.pop();
            string prevStr = strStack.top(); strStack.pop();
            for (int i = 0; i < num; ++i) {
                prevStr += currentString;
            }
            currentString = prevStr;
        } else {  // c is a letter
            currentString += c;
        }
    }
    return currentString;
    }
};