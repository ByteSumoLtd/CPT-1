#ifndef CPT_BITSET_HPP
#define CPT_BITSET_HPP

#include <cstdint>
#include <vector>

class Bitset
{
public:
    Bitset();
    Bitset(std::size_t size);
    Bitset(const Bitset&);

    std::size_t size() const;

    bool operator[](std::size_t index) const;
    void add(std::size_t index);

    float compute_frequency() const;

    Bitset& inter(const Bitset& other);

    void clear();

private:
    std::vector<std::uint8_t> m_data;
    std::size_t m_size;
};

#endif
