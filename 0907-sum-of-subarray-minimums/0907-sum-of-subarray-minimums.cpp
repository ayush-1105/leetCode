class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        const unsigned int M = 1000000007;
        stack<int> st;
        int ans=0;
        int n=arr.size();
        vector<int> nse(n),pse(n);
        st.push(0);
        for(int i=1;i<n;i++)
        {
            while(!st.empty() && arr[st.top()]>arr[i])
            {
                nse[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty())
        {
            nse[st.top()]=n;
            st.pop();
        }
        st.push(n-1);
        for(int i=n-2;i>=0;i--)
        {
            while(!st.empty() && arr[st.top()]>=arr[i])
            {
                pse[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty())
        {
            pse[st.top()]=-1;
            st.pop();
        }
        for(int i=0;i<n;i++)
        {
            ans=ans%M+((arr[i]%M)*(nse[i]-i)*(i-pse[i]))%M;
            
        }
        return ans%M;
    }
};