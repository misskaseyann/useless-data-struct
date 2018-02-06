//
// Created by Kasey Stowell on 2/1/18.
//

#ifndef AUDS_AUDS_H
#define AUDS_AUDS_H

#include <iostream>

template <typename T>

class AUDS{
    public:
        /**
         * Constructor initializes a data array of 100 type T items.
         */
        AUDS() {
            data = new T[init];
        }
        
        /**
         * Destructor to release any used data.
         */
        ~AUDS() {
            delete[] data;
        }
        
        /**
         * Push item to structure. If the item pushes over the
         * structures capacity, it will increase the size and then
         * push that item to the structure.
         *
         * @param item
         */
        void push(T item) {
            if (currsize >= init) {
                auto newInit = (int)(currsize + (currsize * 0.5));
                T* biggerdata = new T[newInit];
                for (int i = 0; i < currsize; i++) {
                    biggerdata[i] = data[i];
                }
                data = biggerdata;
                init = newInit;
                data[currsize] = item;
                std::cout << currsize << std::endl;
                std::cout << item << std::endl;
                currsize++;
            } else {
                data[currsize] = item;
                std::cout << currsize << std::endl;
                std::cout << item << std::endl;
                currsize++;
            }
        }
        
        /**
         * Pops out a random item.
         *
         * @return random item in structure.
         */
        T pop(){
            int i = rand() % currsize;
            std::cout << "taking from index # " << i << std::endl;
            T item = data[i];
            std::cout << "popping element: " << item << std::endl;
            std::cout << "replacing element with the last element: " << std::endl;
            data[i] = data[currsize - 1];
            currsize--;
            std::cout << "current size: " << currsize << std::endl;
            return item;
        }
        
        /**
         * Deep copy constructor.
         *
         * @param other data structure being copied.
         */
        AUDS(const AUDS &other) {
            currsize = other.currsize;
            data = new T[currsize];
            for (int i = 0; i < currsize; i++) {
                data[i] = other.data[i];
            }
        }
        
        /**
         * Copy operator.
         * @param other data structure to copy.
         */
        AUDS&operator=(AUDS other) {
            std::swap(data, other.data);
            std::swap(currsize, other.currsize);
            return *this;
        }
        
        /**
         * @return size of structure.
         */
        int size() {
            std::cout << "Current size: " << currsize << std::endl;
            return currsize;
        }
        
        /**
         * Print the structure.
         */
        void printAUDS() {
            std::cout << "Your data structure: " << std::endl;
            for (int i = 0; i < currsize; i++) {
                T item = data[i];
                std::cout << i << ": " << item << std::endl;
            }
        }
        
    private:
        T* data;
        int init = 10;
        int currsize = 0;
};

#endif //AUDS_AUDS_H