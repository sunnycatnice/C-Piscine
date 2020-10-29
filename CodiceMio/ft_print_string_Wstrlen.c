#include <unistd.h>

int        ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int main()
{
  char tab [] = "AHAHAHAH";
  ft_strlen(tab);
  write (1, &ft_strlen(tab), ft_strlen(tab));
  return (0);
}