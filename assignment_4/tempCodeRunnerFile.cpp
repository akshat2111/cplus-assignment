 // Overload the assignment operator
    Integer& operator=(const Index& index) {
        value = index;
        return *this;
    }