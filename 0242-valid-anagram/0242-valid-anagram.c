bool isAnagram(char* s, char* t) {
    if(strlen(s)!=strlen(t))
    {
        return false;
    }
    int len=strlen(s);
    int* scount=(int*)calloc(26,sizeof(int));
    int* tcount=(int*)calloc(26,sizeof(int));
    for(int i=0;i<len;i++)
    {
        scount[s[i]-'a']++;
    }
    for(int i=0;i<len;i++)
    {
        tcount[t[i]-'a']++;
    }
    int flag=0;
    for(int i=0;i<26;i++)
    {
        if(scount[i]!=tcount[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        return false;
    }
    else
    {
        return true;
    }
}