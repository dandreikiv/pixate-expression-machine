//
//  PXExpressionInstructionType.h
//  pixate-expression-machine
//
//  Created by Kevin Lindsey on 3/8/14.
//  Copyright (c) 2014 Pixate, Inc. All rights reserved.
//

#ifndef Protostyle_PXExpressionInstructionType_h
#define Protostyle_PXExpressionInstructionType_h

#ifndef NS_ENUM
#define NS_ENUM(type, name) type name; enum
#endif

typedef NS_ENUM(NSInteger, PXExpressionInstructionType)
{
    EM_INSTRUCTION_BREAK = 0,

    // arrays
    EM_INSTRUCTION_ARRAY_CREATE,
    EM_INSTRUCTION_ARRAY_CREATE_WITH_COUNT,
    EM_INSTRUCTION_ARRAY_GET_ELEMENT,
    EM_INSTRUCTION_ARRAY_GET_ELEMENT_AT_INDEX,

    // objects
    EM_INSTRUCTION_OBJECT_CREATE,
    EM_INSTRUCTION_OBJECT_CREATE_WITH_COUNT,
    EM_INSTRUCTION_OBJECT_GET_PROPERTY,
    EM_INSTRUCTION_OBJECT_GET_PROPERTY_NAME,

    // functions
    EM_INSTRUCTION_FUNCTION_APPLY,
    EM_INSTRUCTION_FUNCTION_APPLY_NAME,
    EM_INSTRUCTION_FUNCTION_INVOKE,
    EM_INSTRUCTION_FUNCTION_INVOKE_WITH_COUNT,
    EM_INSTRUCTION_FUNCTION_INVOKE_NAME,
    EM_INSTRUCTION_FUNCTION_INVOKE_NAME_WITH_COUNT,

    // blocks
    EM_INSTRUCTION_BLOCK_EXECUTE,

    // stack
    EM_INSTRUCTION_STACK_POP,
    EM_INSTRUCTION_STACK_PUSH,
    EM_INSTRUCTION_STACK_PUSH_GLOBAL,
    EM_INSTRUCTION_STACK_SWAP,
    EM_INSTRUCTION_STACK_DUPLICATE,

    // scope
    EM_INSTRUCTION_SCOPE_GET_SYMBOL,
    EM_INSTRUCTION_SCOPE_GET_SYMBOL_NAME,
    EM_INSTRUCTION_SCOPE_SET_SYMBOL,
    EM_INSTRUCTION_SCOPE_SET_SYMBOL_NAME,

    // math
    EM_INSTRUCTION_MATH_ADDITION,
    EM_INSTRUCTION_MATH_SUBTRACTION,
    EM_INSTRUCTION_MATH_MULTIPLICATION,
    EM_INSTRUCTION_MATH_DIVISION,
    EM_INSTRUCTION_MATH_MODULUS,
    EM_INSTRUCTION_MATH_NEGATE,

    // boolean
    EM_INSTRUCTION_BOOLEAN_AND,
    EM_INSTRUCTION_BOOLEAN_OR,
    EM_INSTRUCTION_BOOLEAN_NOT,

    // comparisons
    EM_INSTRUCTION_COMPARISON_LESS_THAN,
    EM_INSTRUCTION_COMPARISON_LESS_THAN_EQUAL,
    EM_INSTRUCTION_COMPARISON_EQUAL,
    EM_INSTRUCTION_COMPARISON_NOT_EQUAL,
    EM_INSTRUCTION_COMPARISON_GREATER_THAN_EQUAL,
    EM_INSTRUCTION_COMPARISON_GREATER_THAN,

    // flow
    EM_INSTRUCTION_FLOW_IF,
    EM_INSTRUCTION_FLOW_IF_ELSE,
    EM_INSTRUCTION_BRANCH,
    EM_INSTRUCTION_BRANCH_IF_TRUE,
    EM_INSTRUCTION_BRANCH_IF_FALSE,

    // mix
    EM_INSTRUCTION_MIX_GET_SYMBOL_PROPERTY,
    EM_INSTRUCTION_MIX_INVOKE_SYMBOL_PROPERTY_WITH_COUNT,

    // end-of-enum
    EM_INSTRUCTION_LAST
};

#endif
