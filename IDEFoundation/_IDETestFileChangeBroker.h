/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"
#import "IDETestsInTestableObserver-Protocol.h"

@class DVTStackBacktrace, IDETestManager, NSMutableSet, NSString, NSURL;

@interface _IDETestFileChangeBroker : NSObject <IDETestsInTestableObserver, DVTInvalidation>
{
    IDETestManager *_testManager;
    NSURL *_url;
    NSMutableSet *_fileObservers;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_notifyWorkspaceReferencedTestableChanged;
- (void)_notifyObserversTestsInFileUpdated;
- (void)workspaceReferencedTestablesChanged;
- (void)testablesChanged:(id)arg1;
- (void)testsChanged:(id)arg1;
- (void)_updateObservation;
- (void)removeTestFileObserver:(id)arg1;
- (void)addTestFileObserver:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithURL:(id)arg1 testManager:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

