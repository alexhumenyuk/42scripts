#include <unistd.h>

void ft_print_numbers(void)
{
    char    curr_int;

    curr_int = '0';
    while (curr_int <= '9')
    {
        write(1, &curr_int, 1);
        curr_int = curr_int + 1;
    }
}

/*int main ()
{
    ft_print_numbers();
    return(0);
}