bool pangram(const char s[], char m[])
{
  bool isit = false;
  char l_alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}; 
  char u_alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L' ,'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

  for (int j = 0; s[j] != '\0'; j++  )
  {
    for(int i=0; i<26 ; i++)
    {
      if (l_alpha[i] == s[j] || u_alpha[i] == s[j] )
      {
        l_alpha[i] = '0';
      }
    }
  }
  
  int coppied = 0;
  
  for (int i=0; i<26 ; i++)
  {
    if (l_alpha[i] != '0')
    {
      m[coppied] = l_alpha[i];
      coppied++;
    }
  }
  
  m[coppied] = '\0';
  
  if(m[0]=='\0')
  {
    isit = true;
  }

  return isit;
}