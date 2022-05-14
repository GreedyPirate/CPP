#include <iostream>
#include <vector>


using namespace std;


template <
        typename T,
        typename A,
        template <typename , typename > class C
>
C<C<T,A>, allocator<C<T,A>>>
chunker(C<T,A>& c, const typename C<T,A>::size_type& k)
{

    if (k <= 0)
        throw domain_error("chunker() requires k > 0");


    using INPUT_CONTAINER_TYPE = C<T,A>;
    using INPUT_CONTAINER_VALUE_TYPE = typename INPUT_CONTAINER_TYPE::value_type;
    using OUTPUT_CONTAINER_TYPE = C<INPUT_CONTAINER_TYPE,
                                    allocator<INPUT_CONTAINER_TYPE>
                                   >;

    OUTPUT_CONTAINER_TYPE out_c;

    auto chunkBeg = begin(c);

    for (auto left=c.size(); left != 0; )
    {
        auto const skip = min(left,k);

        INPUT_CONTAINER_TYPE sub_container;

        back_insert_iterator<INPUT_CONTAINER_TYPE> back_v(sub_container);

        copy_n(chunkBeg, skip, back_v);

        out_c.push_back(sub_container);

        left -= skip;
        advance(chunkBeg, skip);

    }

    return out_c;
}

template <typename C>
void print_nested_container(const C& container)
{
    for (auto& sub_container: container)
    {
        size_t no_elem = sub_container.size();
        size_t i {0};
        for (auto& val: sub_container)
        {
            cout << val;
            if (++i < no_elem)
                cout << ", ";
        }
        cout << " | ";
    }
}

struct Cat
{
    string name;
    size_t age;
};

std::ostream& operator<< (std::ostream& stream, const Cat& cat) {
    std::cout << cat.name << "-" << cat.age;
    return stream;
}

int main() {

    int chunk_size = 5;

    vector<int> ints;
    for (size_t i = 0; i < 98; i++)
    {
        ints.push_back(i);
    }
    
    vector<vector<int>> chunks1 = chunker(ints, chunk_size);
    print_nested_container(chunks1);
    return 0;
}