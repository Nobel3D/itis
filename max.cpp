/* Data una serie di N numeri determinare il valore più grande
 e quello immediatamente inferiore (il secondo). */

#include <iostream>

#define N 10

template<class Type>
inline Type Max(Type& X, Type& Y) { return X < Y ? Y : X; }

int main(int argc, char** argv)
{
    int iNumber[N] = {10,4,39,23,32,65,32,11,34,45};
    int tmp1 = 0;
    int tmp2 = 0;

    for(int i = 0; i < N; i++)
        if(iNumber[i] > tmp1)
            tmp1 = iNumber[i];

    for(int i = 0; i < N; i++)
        if(iNumber[i] > tmp2 && iNumber[i] != tmp1)
            tmp2 = iNumber[i];

    std::cout << tmp1 << " " << tmp2;
    while(getchar()!='q');
    return 0;
}
