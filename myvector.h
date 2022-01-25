#pragma once


namespace OTUS
{
    template<typename T>
    class vector
    {
        T* _data;
        std::size_t _size;

        public:

        vector() : _data(nullptr), _size(0) {}

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