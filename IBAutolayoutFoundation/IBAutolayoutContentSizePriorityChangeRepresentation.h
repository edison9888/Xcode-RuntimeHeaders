/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IBBinaryArchiving-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSString;

@interface IBAutolayoutContentSizePriorityChangeRepresentation : NSObject <IBBinaryArchiving, NSCoding>
{
    id <IBBinaryArchiving><NSCoding> _viewRepresentation;
    unsigned long long _type;
    double _priority;
}

@property(nonatomic) double priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id <IBBinaryArchiving><NSCoding> viewRepresentation; // @synthesize viewRepresentation=_viewRepresentation;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewRepresentation:(id)arg1 type:(unsigned long long)arg2 priority:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

