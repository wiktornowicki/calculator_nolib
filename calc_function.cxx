double calc(char operand, double x, double y)
{
    switch(operand)
    {
        /*
        using the switch instre rather than if/else just because it's more comfortable
        */
        case '+':
            return (x + y);
            break;
        case '-':
            return (x - y);
            break;
        case '*':
            return (x * y);
            break;
        case '/':
            if (y != 0)
            {
                return (x / y);
            }
            else
            {
                return 0;
            }
            break;
        case '^':
            double result = 1;

            for (int i = 0; i < y; i++)
            {
                result *= x;
            }
            
            return result;
            break;
    }
}
