/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IBBinaryArchiving-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSString;

@interface IBSparseInsetWrapper : NSObject <NSCoding, IBBinaryArchiving>
{
    CDStruct_c519178c _inset;
}

@property(readonly) CDStruct_c519178c inset; // @synthesize inset=_inset;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInset:(CDStruct_c519178c)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

