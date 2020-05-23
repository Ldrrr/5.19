int titleToNumber(char * s)
{
	int n,i,a=0,t;
	n=strlen(s);
	for(i=n-1;i>=0;i--)
	{
		t=s[i]-'A'+1;
		a+=t*pow(26,n-i-1);
	}
	return a;
	
}
