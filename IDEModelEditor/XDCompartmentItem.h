/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class DVTStackBacktrace, NSCell, NSString, XDCompartment;

@interface XDCompartmentItem : NSObject <NSCoding, NSCopying, DVTInvalidation>
{
    XDCompartment *_compartment;
    id _representedObject;
    NSCell *_dataCell;
}

+ (Class)defaultDataCellClass;
+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)mouseDown:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)objectValue;
- (void)setObjectValue:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (unsigned long long)alignment;
- (void)setAlignment:(unsigned long long)arg1;
- (id)dataCell;
- (void)setDataCell:(id)arg1;
- (id)representedObject;
- (void)setRepresentedObject:(id)arg1;
- (id)compartment;
- (void)setCompartment:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

