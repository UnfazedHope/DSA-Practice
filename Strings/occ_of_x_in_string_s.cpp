//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
    
    int n1 = s.size();
    int n2= x.size();
    
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(s[i+j] != x[j])
                break;
            
            if(j==(n2-1))
                return i;
        }
    }
    return -1;
}
