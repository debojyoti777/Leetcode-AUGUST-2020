/* Given a word, you need to judge whether the usage of capitals in it is right or not.

We define the usage of capitals in a word to be right when one of the following cases holds:

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".
Otherwise, we define that this word doesn't use capitals in a right way.

Example 1:

Input: "USA"
Output: True
 

Example 2:

Input: "FlaG"
Output: False
*/


bool detectCapitalUse(char * word)
{
    int i = 0,n,k=0,l=0,m=0;
    n = strlen(word);
    if(word[i]>='A'&& word[i]<='Z')
    {
        for(i=1;i<=n;i++)
        {
            if(word[i]>='A'&& word[i]<='Z')
                k++;
            else if(word[i]>='a'&& word[i]<='z')
                l++;
        }
    }
    else if(word[i]>='a'&& word[i]<='z')
    {
        for(i=1;i<=n;i++)
        {
            if(word[i]>='a'&& word[i]<='z')
                m++;
        }
    }
    if(k==n-1||l==n-1||m==n-1)
        return true;
    else
        return false;
}
