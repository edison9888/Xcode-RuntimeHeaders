/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <IDEFoundation/IDEContainerItemCore-Protocol.h>

@class NSString;

@interface IDEContainerItemCore : NSObject <IDEContainerItemCore>
{
    id <IDEGroupCore> _parentGroup;
    NSString *_path;
}

@property(copy) NSString *path; // @synthesize path=_path;
@property(retain) id <IDEGroupCore> parentGroup; // @synthesize parentGroup=_parentGroup;
- (void).cxx_destruct;
@property(readonly) id <IDEContainerCore> parentContainer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

