# include "./libft/libft.h"
float absolute(float num)
{
    if(num < 0){
        num = -num;
    }
    return num;
}

float ft_sqrt(float x)
{
    const float difference = 0.00001;
    float guess = 1.0;
    while(absolute(guess * guess - x) >= difference){
        guess = (x/guess + guess)/2.0;
    }
    return guess;
}

int main (){
    ft_printf("%f\n", ft_sqrt(6.25));
    return 1;
}