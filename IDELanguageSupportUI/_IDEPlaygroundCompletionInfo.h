/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTSystemActivityToken, IDEPlaygroundDocument, IDEPlaygroundExecutionParameters;

@interface _IDEPlaygroundCompletionInfo : NSObject
{
    id _completionBlock;
    IDEPlaygroundExecutionParameters *_executionParameters;
    IDEPlaygroundDocument *_playground;
    id <IDEClientTrackingToken> _clientTrackingToken;
    DVTSystemActivityToken *_systemActivityToken;
}

@property(retain) DVTSystemActivityToken *systemActivityToken; // @synthesize systemActivityToken=_systemActivityToken;
@property(retain) id <IDEClientTrackingToken> clientTrackingToken; // @synthesize clientTrackingToken=_clientTrackingToken;
@property(retain) IDEPlaygroundDocument *playground; // @synthesize playground=_playground;
@property(retain) IDEPlaygroundExecutionParameters *executionParameters; // @synthesize executionParameters=_executionParameters;
@property(copy) id completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;

@end

