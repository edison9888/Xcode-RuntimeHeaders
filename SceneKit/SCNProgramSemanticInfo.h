/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

// Not exported
@interface SCNProgramSemanticInfo : NSObject <NSSecureCoding>
{
    NSString *_semantic;
    NSDictionary *_options;
}

+ (BOOL)supportsSecureCoding;
+ (id)infoWithSemantic:(id)arg1 options:(id)arg2;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *semantic; // @synthesize semantic=_semantic;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

