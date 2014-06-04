/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTPopoverContentViewController.h"

#import "NSWindowDelegate-Protocol.h"

@class DYRenderingAttributes, GPUTraceModelFactory, NSString, NSView;

@interface GPUTraceResourceInfoBubble : DVTPopoverContentViewController <NSWindowDelegate>
{
    NSView *_parentView;
    id <DYResource> _resource;
    id <GPUTraceBubbleOwner> _owner;
    GPUTraceModelFactory *_modelFactory;
    DYRenderingAttributes *_renderingAttributes;
    BOOL _isVisible;
    unsigned long long _bubbleEdge;
}

@property(readonly) NSView *parentView; // @synthesize parentView=_parentView;
@property(readonly) id <DYResource> resource; // @synthesize resource=_resource;
- (void).cxx_destruct;
- (void)close;
- (void)_cleanUpAfterClosingPopupWindow;
- (void)showAtPoint:(struct CGPoint)arg1;
- (void)viewDidInstall;
- (id)initWithResource:(id)arg1 parentView:(id)arg2 owner:(id)arg3 modelFactory:(id)arg4 renderingAttributes:(id)arg5;
- (id)initWithResource:(id)arg1 parentView:(id)arg2 nibName:(id)arg3 owner:(id)arg4 modelFactory:(id)arg5 renderingAttributes:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

