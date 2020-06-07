int error_check(const char *strlen, int amount)
{
  int error_fl = 0;
  for (int i=0;i<amount;i++)
  {
    if ((strlen[i] != 45) && (strlen[i] != 46) && (strlen[i] !=32) && (strlen[i+1]!=32) && (strlen[i+2]!=32) && (strlen[i+3]!=32) && (strlen[i+4]!=32) && (strlen[i+5]!=32) && (strlen[i+6]!=32))
    {
      printf("%s","Strlen == ");
      printf("%c\n",strlen[i]);
      error_fl++;
      break;
    }
  }
    return error_fl;
}
