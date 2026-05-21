#include <iostream>

int main()
{
        int x, y, z;
        int n[3];
        std::cin >> x >> y >> z;

        if(x >= z)
        {
                if(x > y)
                {
                        n[2] = x;
                        if(y >= z)
                        {
                                n[1] = y;
                                n[0] = z;
                        }
                        else
                        {
                                n[1] = z;
                                n[0] = y;
                        }
                }
                else if(y >= x)
                {
                        n[2] = y;
                        n[1] = x;
                        n[0] = z;

                }
        }
        else if(z >= x)
        {
                if(z >= y)
                {
                        n[2] = z;
                        if(y >= x)
                        {
                                n[1] = y;
                                n[0] = x;
                        }
                        else
                        {
                                n[1] = x;
                                n[0] = y;
                        }
                }
                else
                {
                        n[2] = y;
                        n[1] = z;
                        n[0] = x;
                }
        }

        else if(y >= x)
        {
                if(y >= z)
                {
                        n[2] = y;
                        if(x >= z)
                        {
                                n[1] = x;
                                n[0] = z;
                        }
                        else
                        {
                                n[1] = z;
                                n[0] = x;
                        }
                }
                else
                {
                        n[2] = z;
                        n[1] = y;
                        n[0] = x;
                }
        }

        for(int i = 0; i < 3; i++)
        {
                std::cout << n[i] << std::endl;
        }

        std::cout << std::endl;

        std::cout << x << std::endl << y << std::endl << z << std::endl;
}


