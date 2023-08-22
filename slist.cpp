#include <iostream>
#include "snode.cpp"

class SList {
    public:
        SNode *head_p = NULL;

        void prepend(int value) {
            SNode *node_p = new SNode();
            node_p->value = value;
            node_p->next_p = this->head_p;
            this->head_p = node_p;
        };

        int size() {
            int num = 0;
            SNode *node_p = this->head_p;
            while(node_p){
                num++;
                node_p = node_p->next_p;
            }
            return num;
        }

        std::string show() {
            std::string ret = "SList: [";
            SNode *node_p = this->head_p;
            while(node_p) {
                ret.append(std::to_string(node_p->value) + (node_p->next_p ? ", " : ""));
                node_p = node_p->next_p;
            }
            ret.append("], Size: " + std::to_string(size()) + "\n");
            return ret;
        }
};