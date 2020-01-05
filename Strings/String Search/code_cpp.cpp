// S and T - input strings
// You need to check if string T is present in S or not

int* getLPS(char pattern[])
{
        int pat_length =0;
    int k=0;
    for (k=0; pattern[k]!='\0'; k++) 
    { 
    }
    pat_length=k;
        int* arr = new int[pat_length];
        int i=1;
        int j=0;
        arr[0]=0;
        while(i<pat_length)
        {
                if(pattern[i]==pattern[j])
                {                                                                                                                                                                               arr[i]=j+1;                                                                                                                                                             j++;
                        i++;
                }
                else                                                                                                                                                                    {                                                                                                                                                        if(j!=0)
                        {
                                j= arr[j-1];
                        }else
                        {
                                arr[i]=0;
                                i++;
                        }
                }
        }
}

int findString(char s[], char t[]) {
    // Write your code here
   // String s = S;
  //  String t =T;
   int s_len =0;
   int t_len = 0;
    int k=0;
    for (k=0; s[k]!='\0'; k++) 
    { 
    } 
    s_len=k;
for (k=0; s[k]!='\0'; k++) 
    { 
    }
    t_len=k;
   int i=0;
   int j=0;
   int* lsp = getLPS(t);
     while(i<s_len && j<t_len)
   {
        if(s[i]==t[j])
        {
                i++;
                j++;
        }
        else
        {
                if(i!=0)
                {
                j=lsp[j-1];
                }
                else
                {
                        i++;
                }

        }
   }
   if(j==t_len)
           return 1;
   return -1;
}
