#include <unistd.h>

void rush04(int x, int y);
void put_char(char c);
void assessment(int *count_x, int *count_y, int *x, int *y);

int main()
{
    rush04(10, 10);
    return 0;
}

void put_char(char c)
{
    write(1, &c, 1);
}

void assessment(int *count_x, int *count_y, int *x, int *y)
{
    if(*count_x == 1 && *count_y == 1 || *count_x == *x && *count_y == *y)
    {
        put_char('A');
    }
    else if(*count_x == *x && *count_y == 1 || *count_x == 1 && *count_y == *y)
    {
        put_char('C');
    }
    else if(*count_x > 1 && *count_y == 1 || *count_x > 1 && *count_y == *y ||
            *count_x == 1 && *count_y > 1 || *count_x == *x && *count_y > 1)
    {
        put_char('B');
    }
    else
    {
        put_char('.');
    }
}

void rush04(int x, int y)
{
    int count_x, count_y;
    count_x = 1, count_y = 1;
    
    if (x == 0 || y == 0)
    {
        put_char('E');
        put_char('\n');
    }
    else
    {
        while(count_x <= x && count_x <= y)
        {
            while(count_y <= y)
            {
                while(count_x <= x)
                {
                    assessment(&count_x, &count_y, &x, &y);
                    count_x++;
                }
                put_char('\n');
                count_x = 1;
                count_y++;
            }
        }
    }
}
