/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDESceneKitEditor/SKEDocumentEdition.h>

@class SCNNode;

@interface SKEDocumentReplaceNodeWithNodeEdition : SKEDocumentEdition
{
    SCNNode *_parentNode;
    SCNNode *_insertedNode;
    SCNNode *_replacedNode;
}

- (void).cxx_destruct;
- (BOOL)revert;
- (BOOL)apply;
- (void)_replaceNode:(id)arg1 withNode:(id)arg2;
- (id)initWithDocument:(id)arg1 parentNode:(id)arg2 insertedNode:(id)arg3 replacedNode:(id)arg4;

@end

