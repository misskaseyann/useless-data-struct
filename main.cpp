#include <iostream>
#include "include/AUDS.h"

int main() {
    AUDS<char> st;
    st.push('%');
    st.push('*');
    st.push('^');
    st.push('&');
    st.push('#');
    st.push('@');
    st.size();
    std::cout << "testing popping out data..." << std::endl;
    char a = st.pop();
    std::cout << "popped out: " << a << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << "testing popping out data..." << std::endl;
    a = st.pop();
    std::cout << "popped out: " << a << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << "testing popping out data..." << std::endl;
    a = st.pop();
    std::cout << "popped out: " << a << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << "testing popping out data..." << std::endl;
    a = st.pop();
    std::cout << "popped out: " << a << std::endl;
    std::cout << "----------------" << std::endl;
    st.size();
    AUDS<char> nt;
    nt.push('%');
    nt.push('*');
    nt.push('^');
    nt.push('&');
    nt.push('#');
    nt.push('@');
    nt.size();
    nt.push('^');
    nt.push('&');
    nt.push('#');
    nt.push('@');
    nt.size();
    nt.push('0');
    nt.push('@');
    nt.size();
    nt.printAUDS();
}