/*
Suppose If we have num 1543, k = 2
Traverse through each digit in num, 
if you found, previous digit is greater than the current digit, delete it.

-> From this, we can understand if last digit of 
result greater than the current_digit, then we need to delete it
to get smallest number.
-> By using this point, let's develop 
	an algorithm to solve this problem.

Suppose given num = 14329 and k = 2
Do the following steps to get least number:-
1. Traverse through each digit in num
2. Now, pop stack 
	while k > 0 top of the stack is greater than current digit.
	this is beacuse if stack has 1 4
	then, current digit is 3, then 4 > 3 so, pop 4. 
	because, the number starting with 13 is smaller than 14.
	That's why we need to pop stack while top is 
	greater than current digit.
3. After traversing through all the digits,
    then stack looks like this = 1 2 9
    if k > 0
	pop k times
	because we need to delete k digits from the number.
4. Now, create a string variable,
    then insert every digit in stack at the beginning.
	This is because,
	while popping stack 9 will first come out, then 2, and then 1.
	So, add digits in reverse.
	Here, I am adding digits at starting position.
	So, 
	when 9 is popped, str = 9
	when 2 is popped str = 29
	when 1 is popped str = 129.
	that's how we will get number in reverse order.
5. Now, Del any leading zeros are in string.
6. return smallest string.
*/

class Solution {
public:
    string removeKdigits(string num, int k) {
      vector<char>st;
        if(k==num.size()){
            return "0";
        }
        int index =0;
        while(index<num.size()){
            int n=st.size();
             while(k && n && st[n - 1] > num.at(index)){
                k--;
                st.pop_back();
                n = st.size();
            }
            st.push_back(num.at(index++));
            
        }
        while(k-->0){
            st.pop_back();
        }
        int n=st.size();
        string ans="";
        while(!st.empty()){
            ans=st[n-1]+ans;
            n--;
            st.pop_back();
        }
        //remove leading zero
        while(ans.size()>1 && ans[0]=='0'){
            ans=ans.substr(1);
        }
        
        return ans;
    }
};
