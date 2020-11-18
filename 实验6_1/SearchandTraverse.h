#pragma once
#ifndef TS_H
#define TS_H

#include"head.h"

Status BTraverse(BiTree& T);

Status MTraverse(BiTree& T);

Status ATraverse(BiTree& T);

BiTNode* Search(BiTree& T, string e);

Status SearchBody(BiTree& T,string e,BiTNode *p);



#endif// TS_H