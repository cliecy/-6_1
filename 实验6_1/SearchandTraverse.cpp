#include "SearchandTraverse.h"

Status BTraverse(BiTree& T) {

    if (*T->data.name != " ") {

        cout << T->data.name << endl;

        if (*T->lchild->data.name != " " ) {
            BTraverse(T->lchild);
        }

        if (*T->lchild->data.name != " ") {
            BTraverse(T->rchild);
        }
    }
    else return ERROR;


    return OK;
}

Status MTraverse(BiTree& T) {

    if (*T->data.name != " ") {

        if (*T->lchild->data.name != " ") {
            MTraverse(T->lchild);
        }

        cout << T->data.name << endl;
        
        if (*T->lchild->data.name != " ") {
            MTraverse(T->rchild);
        }
    }
    else return ERROR;


    return OK;

}

Status ATraverse(BiTree& T) {

    if (*T->data.name != " ") {
        
        if (*T->lchild->data.name != " ") {
            ATraverse(T->lchild);
        }

        if (*T->lchild->data.name != " ") {
            ATraverse(T->rchild);
        }

        cout << T->data.name << endl;
    }
    else return ERROR;


    return OK;


}


BiTNode Search(BiTree& T, string e) {
    BiTNode pre;
    SearchBody(T, e, pre);
    return pre;
}

Status SearchBody(BiTree &T,string e,BiTNode &p) {



    if (*T->data.name == e) {
        cout << e + "µÄ¸¸Ç×ÊÇ" + *T->lchild->data.name + "Ä¸Ç×ÊÇ" + *T->rchild->data.name;
        p = *T;
        return OK;
    }

    if (*T->lchild->data.name != " ") {
            SearchBody(T->lchild,e,p);
    }

    if (*T->lchild->data.name != " ") {
            SearchBody(T->rchild,e,p);
    }

    return ERROR;

}
    


  