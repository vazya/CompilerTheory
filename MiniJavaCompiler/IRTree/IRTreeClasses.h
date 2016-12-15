﻿#pragma once

namespace IRTree {

    class IRTreeVisitor;

    class IRTExpList;

    // Expressions
    class IRTExpression;
    class IRTEConst;
    class IRTEName;
    class IRTETemp;
    class IRTEBinop;
    class IRTEMem;
    class IRTECall;
    class IRTEEseq;

    // Statements
    class IRTStatement;
    class IRTSMove;
    class IRTSExp;
    class IRTSJump;
    class IRTSCjump;
    class IRTSSeq;
    class IRTSLabel;

    // Что такое Temp ??? (См. презентацию.)
    class Temp;
    class Label;
}

#include "IRTreeVisitor.h"

#include "IRTConstants.h"

#include "IRTExpList.h"
#include "IRTExpression.h"
#include "IRTStatement.h"

#include "IRTLabel.h"
#include "IRTTemp.h"
