/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTTextCompletionStrategy.h"

@class DVTTextDocumentLocation, NSDictionary;

@interface DBGIndexCompletionStrategy : DVTTextCompletionStrategy
{
    NSDictionary *_indexCompletionsRequestDictionary;
    DVTTextDocumentLocation *_locationInAdjustedText;
}

- (void).cxx_destruct;
- (id)completionItemsForDocumentLocation:(id)arg1 context:(id)arg2 highlyLikelyCompletionItems:(id *)arg3 areDefinitive:(char *)arg4;
- (void)prepareForDocumentLocation:(id)arg1 context:(id)arg2;

@end

