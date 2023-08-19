#include <iostream>
#include "snode.cpp"

class SList {
    public:
        SNode *head = NULL;

        void prepend(int value) {
            SNode *node = new SNode();
            node->value = value;
            node->next = this->head;
            this->head = node;
        };

        std::string show() {
            std::string ret = "Slist: [";
            
            ret.append("");
            ret.append("]\n");
            return ret;
        }
};