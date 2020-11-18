#include "SearchandTraverse.h"

Status BTraverse(BiTree& T) {

    if (T) {

        cout << T->data.name << endl;

        if (T->lchild ) {
            BTraverse(T->lchild);
        }

        if (T->rchild) {
            BTraverse(T->rchild);
        }
    }
    else return ERROR;


    return OK;
}

Status MTraverse(BiTree& T) {

    if (T) {

        if (T->lchild) {
            MTraverse(T->lchild);
        }

        cout << T->data.name << endl;
        
        if (T->rchild) {
            MTraverse(T->rchild);
        }
    }
    else return ERROR;


    return OK;

}

Status ATraverse(BiTree& T) {

    if (T) {
        
        if (T->lchild) {
            ATraverse(T->lchild);
        }

        if (T->rchild) {
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



    if (T->data.name == e) {
        cout << e + "µÄ¸¸Ç×ÊÇ" + T->lchild->data.name + "Ä¸Ç×ÊÇ" + T->rchild->data.name;
        p = *T;
        return OK;
    }

    if (T->lchild) {
            SearchBody(T->lchild,e,p);
    }

    if (T->rchild) {
            SearchBody(T->rchild,e,p);
    }

    return ERROR;

}
    


  