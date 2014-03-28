//
//  PXPushValueInstruction.h
//  Protostyle
//
//  Created by Kevin Lindsey on 2/25/14.
//  Copyright (c) 2014 Pixate, Inc. All rights reserved.
//

#import "PXExpressionInstruction.h"
#import "PXExpressionValue.h"
#import "PXBlockValue.h"

@interface PXPushValueInstruction : PXExpressionInstruction

+ (PXPushValueInstruction *)expressionValue:(id<PXExpressionValue>)value;
+ (PXPushValueInstruction *)booleanValue:(BOOL)booleanValue;
+ (PXPushValueInstruction *)stringValue:(NSString *)stringValue;
+ (PXPushValueInstruction *)doubleValue:(double)doubleValue;
+ (PXPushValueInstruction *)blockValue:(PXExpressionByteCode *)byteCodeValue;

@property (nonatomic, strong, readonly) id<PXExpressionValue> value;

- (id)initWithExpressionValue:(id<PXExpressionValue>)value;
- (id)initWithBoolean:(BOOL)booleanValue;
- (id)initWithString:(NSString *)stringValue;
- (id)initWithDouble:(double)doubleValue;
- (id)initWithByteCode:(PXExpressionByteCode *)byteCode;

@end
