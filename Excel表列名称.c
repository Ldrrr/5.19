char * convertToTitle(int n)
{
	int i,k=29;
	static char s[30];
	s[k]='\0';
	while(n)
	{
		s[--k]='A'+(n-1)%26;
		n=(n-1)/26; 
	}
	return &s[k];
 }
