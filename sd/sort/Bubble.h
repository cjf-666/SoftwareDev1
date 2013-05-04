#ifndef _BUBBLE_H_
#define _BUBBLE_H_

#include <vector>

using std::vector;

class Bubble
{
public:
    Bubble() {};
    ~Bubble() {};

    void operator () (vector<int>& array)
        {
            int k;
            for (int i = 0; i < array.size() - 1; ++i)
                for (int j = array.size() - 1; j > i; --j)
                {
                    if (array[j] < array[j-1])
                    {
                        k = array[j];
                        array[j] = array[j-1];
                        array[j-1] = k;
                    }
                }
        }
};

#endif /* _BUBBLE_H_ */
