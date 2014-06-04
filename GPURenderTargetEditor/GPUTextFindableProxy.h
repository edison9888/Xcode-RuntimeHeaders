/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTTextFindable-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString;

// Not exported
@interface GPUTextFindableProxy : NSObject <NSObject, DVTTextFindable>
{
    id <NSObject><DVTTextFindable> _findable;
}

- (void).cxx_destruct;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
- (id)initWithFindable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property unsigned long long supportedMatchingOptions;

@end

