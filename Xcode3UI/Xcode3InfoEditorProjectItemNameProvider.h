/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"
#import "Xcode3InfoEditorListContentProvider-Protocol.h"

@class DVTStackBacktrace, IDEContainerQuery, NSArray, NSString;

@interface Xcode3InfoEditorProjectItemNameProvider : NSObject <Xcode3InfoEditorListContentProvider, DVTInvalidation>
{
    id <IDEBlueprint> _blueprint;
    IDEContainerQuery *_query;
    NSArray *_utis;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingListContents;
@property(readonly) IDEContainerQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)blueprint;
@property(readonly) NSArray *listContents;
- (void)primitiveInvalidate;
- (id)initWithBlueprint:(id)arg1 typeIdentifiers:(id)arg2;
- (id)initWithBlueprint:(id)arg1 typeIdentifier:(id)arg2;
- (id)initWithBlueprint:(id)arg1 workspace:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

