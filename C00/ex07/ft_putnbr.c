#include <unistd.h>
/*
void ft_putnbr(int nb)
{
    int last_digit;

    last_digit = 0;
    while (nb > 0)
    {
        last_digit = nb % 10;
        last_digit = last_digit + '0';
        write(1, &last_digit, 1);
        nb = (nb/10);
    }
}
*/
void ft_putnbr(int nb)
{
    if (nb < 0 && nb > -10)
    {
        write (1, "-", 1);
        nb = -nb + '0';
        write(1, &nb, 1);
        
    }
    else if (nb >= 0 && nb < 10)
    {
        nb = nb + '0';
        write(1, &nb, 1);
    }
    else if (nb > 10)
    {
        ft_putnbr(nb / 10);
        char digit;

        digit = nb % 10 + '0';
        write(1, &digit , 1);
    }
    else
    {
        write (1, "-",1);
        nb = -nb;
        ft_putnbr(nb / 10);
        char digit;

        digit = nb % 10 + '0';
        write(1, &digit , 1);
    }

}
int main ()
{
    ft_putnbr(-22);
}