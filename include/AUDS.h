//
// Created by Kasey Stowell on 2/1/18.
//

#ifndef AUDS_AUDS_H
#define AUDS_AUDS_H

#include <iostream>

template <typename T>

class AUDS{
    public:
        /*
         * Constructor initializes a data array of 100 type T items.
         */
        AUDS() {
            data = new T[init];
        }
        
        /*
         * Destructor to release any used data.
         */
        ~AUDS() {
            delete[] data;
        }
        
        /*
         * Push item to structure.
         */
        void push(T item) {
            if (currsize >= init) {
            
            } else {
                data[currsize] = item;
                std::cout << currsize << std::endl;
                std::cout << item << std::endl;
                currsize++;
            }
            // TODO
        }
        
        /*
         * Pop out random item.
         */
        T pop(){
            currsize--;
            std::cout << "current size: " << currsize << std::endl;
            std::cout << "data in current size: " << data[currsize] << std::endl;
            return data[currsize];
        }
        
        /*
         * Deep copy constructor.
         */
        AUDS(const AUDS &other) {
            // TODO
        }
        
        /*
         * Copy operator.
         */
        AUDS&operator=(AUDS other) {
            // TODO
        }
        
        /*
         * Size of our data structure.
         */
        int size() {
            return currsize;
        }
    private:
        T* data;
        int init = 100;
        int currsize = 0;
};

#endif //AUDS_AUDS_H
