#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int num_buttons;

    vector<int> not_working{};

    for (int i = 0; i < num_buttons; ++i)
    {
        int button;
        cin >> button;
        not_working.push_back(button);
    }

    int channel_to_get;
    cin >> channel_to_get;

    vector<int> candidetes_distance;

    for (auto channel = 0; channel < 1000; ++channel)
    {
        auto channel_str = to_string(channel);
        bool is_posible = true;

        for (auto button : not_working)
        {
            for (char digit : channel_str)
            {
                if ((digit - '0') == button)
                {
                    is_posible = false;
                }
            }
        }

        if (is_posible)
        {
            auto distance = abs(channel - channel_to_get);
            candidetes_distance.push_back(distance);
        }
    }

    auto result = *min_element(
        begin(candidetes_distance),
        end(candidetes_distance));

    cout << result << endl;

    return 0;
}