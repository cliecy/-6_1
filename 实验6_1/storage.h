#pragma once
#ifndef  STORAGE_H
#define STORAGE_H

#include "head.h"

Status CreateBiTree(BiTree& T);
TElemType CreatTElem();
Status InsertBitree(BiTree& T, TElemType father, TElemType mother, string b);
Status DeleteNode(BiTree& T, BiTNode k);
#endif // ! STORAGE_H
