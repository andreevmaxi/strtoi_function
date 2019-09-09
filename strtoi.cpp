/*!
* @mainpage
* this is function of converting array of chars into integer
*/

/*!
* \file strtoi.cpp
*/

#include <cstdio>
#include <cassert>
#include <cstdlib>

/**
    \brief strtoi
    \author andreevmaxi
	\version 1.0
	\date september 2019 year
	\copyright korobcom
    \details This is function that converts your char* into integer
    \return your number
    \param[in] str your char array
*/

int strtoi(char* str);

int main()
{
    char test_str[128] = "";

    scanf("%s", &test_str);
    int number = strtoi(test_str);

    printf("%d", number);
    return 0;
}

int strtoi(char* str)
{
    assert(str != NULL);

    int tmp = 0;
    int NowChar = 0;

    while (str[NowChar] != '\n' && str[NowChar] != '\0')
    {
        tmp = tmp * 10 + (int)( (str[NowChar]) - 48 );
        ++NowChar;
    }
    return tmp;
}
