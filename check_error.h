int error_check(const char *strlen, int amount)
{
  int error_fl = 0;
  for (int i=0;i<amount;i++)
  {
    if ((strlen[i] != 45) && (strlen[i] != 46) && (strlen[i] !=32))
    {
      error_fl++;
      break;
    }
  }
    return error_fl;
}
