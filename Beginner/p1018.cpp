#include <iostream>

int main()
{
        int N, count;
        int notes[7] = {100, 50, 20, 10, 5, 2, 1};

        std::cin >> N;
        std::cout << N << std::endl;

        for(int i : notes)  
        {
                count = 0;

                while(N >= i && N > 0)
                {
                        N -= i;
                        count++;
                }
                std::cout << count << " nota(s) de R$ " << i << ",00" << std::endl;
        }

}

