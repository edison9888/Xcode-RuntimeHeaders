/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/_XCOQMatcher.h>

#import "_XCOQOperationDelegate-Protocol.h"

@class NSArray, NSOperationQueue;

@interface _XCOQSystemHeadersMatcher : _XCOQMatcher <_XCOQOperationDelegate>
{
    NSOperationQueue *_operationQueue;
    NSArray *_allHeaderPaths;
    NSArray *_frameworkHeaderPaths;
}

- (void)THREAD_operationWillFinish:(id)arg1;
- (void)_operationDidFinish:(id)arg1;
- (void)_dataSourceDidChange:(id)arg1;
- (void)updateMatches;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)_addHeadersPaths:(id)arg1 frameworkHeadersPaths:(id)arg2;

@end

