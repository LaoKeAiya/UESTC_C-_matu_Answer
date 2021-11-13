template<typename DataType>
class node
{
private:
    DataType data;
    node* next;
public:
    node() {};
    void set_value(DataType d)
    {
        data = d;
    }
    DataType get_value()
    {
        return data;
    }
    node* get_next()
    {
        return next;
    }
    void append(node* n)
    {
        next = n;
    }


};
   

