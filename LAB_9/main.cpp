#include <iostream>
#include <cstdio>

template<typename K, typename V>

class Map {
private:
    struct Pair {
        K key;
        V value;
    };

    Pair* data;
    int capacity;
    int size;

public:
    Map() : capacity(10), size(0) {
        data = new Pair[capacity];
    }

    ~Map() {
        delete[] data;
    }

    V& operator[](const K& key) {
        for (int i = 0; i < size; ++i) {
            if (data[i].key == key) {
                return data[i].value;
            }
        }
        data[size].key = key;
        data[size].value = V();
        return data[size++].value;
    }

    void Set(const K& key, const V& value) {
        for (int i = 0; i < size; ++i) {
            if (data[i].key == key) {
                data[i].value = value;
                return;
            }
        }
        data[size].key = key;
        data[size].value = value;
        ++size;
    }

    bool Get(const K& key, V& value) const {
        for (int i = 0; i < size; ++i) {
            if (data[i].key == key) {
                value = data[i].value;
                return true;
            }
        }
        return false;
    }

    int Count() const {
        return size;
    }

    void Clear() {
        delete[] data;
        size = 0;
        capacity = 10;
        data = new Pair[capacity];
    }

    bool Delete(const K& key) {
        for (int i = 0; i < size; ++i) {
            if (data[i].key == key) {
                for (int j = i; j < size - 1; ++j) {
                    data[j] = data[j + 1];
                }
                --size;
                return true;
            }
        }
        return false;
    }

    bool Includes(const Map<K, V>& map) const {
        for (int i = 0; i < map.size; ++i) {
            bool found = false;
            for (int j = 0; j < size; ++j) {
                if (data[j].key == map.data[i].key) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                return false;
            }
        }
        return true;
    }

    class Iterator {
    private:
        const Map& map;
        int index;

    public:
        Iterator(const Map& m, int i) : map(m), index(i) {}

        bool operator!=(const Iterator& other) const {
            return index != other.index;
        }

        void operator++() {
            ++index;
        }

        auto operator*() const {
            return std::make_tuple(map.data[index].key, map.data[index].value, index);
        }
    };

    Iterator begin() const {
        return Iterator(*this, 0);
    }

    Iterator end() const {
        return Iterator(*this, size);
    }
};

int main() {
    Map<int, const char*> m;
    m[10] = "C++";
    m[20] = "test";
    m[30] = "Poo";

    for (auto [key, value, index] : m) {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }

    m[20] = "result";

    for (auto [key, value, index] : m) {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }

    return 0;
}
