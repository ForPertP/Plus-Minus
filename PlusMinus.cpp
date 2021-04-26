void plusMinus(vector<int> arr)
{
    int positive = 0;
    int negative = 0;
    int zero = 0;
    
    for (auto n : arr)
    {
        if (n > 0)
        {
            positive++;
        }
        else if (n < 0)
        {
            negative++;
        }
        else
        {
            zero++;    
        }
    }
    
    std::setprecision(6);
    std::cout << float(positive)/arr.size() << endl;
    std::cout << float(negative)/arr.size() << endl;
    std::cout << float(zero)/arr.size() << endl;
}
