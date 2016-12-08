int ft_wordlen(char *s, char c)
{
    int ct;
    
    ct = 0;
    while (*s != c && *s)
    {
        s++;
        ct++;
    }
}
