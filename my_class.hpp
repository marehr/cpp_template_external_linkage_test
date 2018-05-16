
template <typename value_t>
class my_class
{
public:
    my_class(value_t value) : _value{value}
    {};

    value_t value()
    {
        return _value;
    }

private:
    value_t _value;
};

extern template class my_class<char>;
extern template class my_class<int>;
