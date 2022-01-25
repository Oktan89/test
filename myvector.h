#pragma once


namespace otus
{
    template<typename T>
    class vector
    {
        T* _data;
        std::size_t _size;

        public:

        vector() : _data(nullptr), _size(0) {}
        
        vector(std::initializer_list<T> l)
        {
            _data = new T[l.size()]();
           
            std::size_t index = 0;
            for(auto i = l.begin(); i != l.end(); ++i, ++index)
            {
                _data[index] = *i;
            }
            _size = l.size();
        }

        vector(const otus::vector<T>& other)
        {
            _data = new T[other._szie]();
            _size = other._size;
            for(std::size_t i = 0; i < _size; ++i)
            {
                _data[i] = other._data[i];
            }
        }

        otus::vector<T>& operator=(const otus::vector<T>& other)
        {
            if(this == &other)
                return *this;
            
            T* temp = _data;

            delete[] _data;
            _data = new T[other._size]();
            _size = other._size;
            for(std::size_t i = 0; i < _size; ++i)
            {
                _data[i] = other._data[i];
            }
            delete[] temp;
            return *this;
        }

        explicit vector(std::size_t size)
        {
            _data = new T[size]();
            _size = size;
        }

        vector(std::size_t size, const T& value)
        {
            _data = new T[size];
            for(std::size_t i = 0; i < size; ++i)
            {
                _data[i] = value;
            }
            _size = size;
        }

        T& operator[] (std::size_t index)
        {
            return _data[index];
        }

        T& at(std::size_t index)
        {
            if(index > _size)
                throw std::out_of_range("out of range: " + std::to_string(index) + " > " + "size vector " + std::to_string(_size));
            return _data[index];
        }
        std::size_t size() const noexcept
        {
            return _size;
        }

        bool empty() const noexcept
        {
            return (_size == 0)? true : false;
        }

        ~vector(){
            delete[] _data;    
        }

    };
}