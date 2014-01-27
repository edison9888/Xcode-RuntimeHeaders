/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

#import "DVTInvalidation-Protocol.h"
#import "GPUTraceBubbleOwner-Protocol.h"

@class DVTStackBacktrace, DYRenderingAttributes, DYResourceObject, GPURenderBufferButton, GPURenderBufferView, GPURenderJob, GPUTraceEditor, GPUTraceResourceInfoBubble, GPUTraceResourceSettingsBubble, NSLayoutConstraint, NSMenu, NSString, NSTextField;

// Not exported
@interface GPURenderBuffer : NSViewController <GPUTraceBubbleOwner, DVTInvalidation>
{
    id <GPUTraceResourceInfoDelegateProtocol> _infoDelegate;
    GPURenderBufferButton *_infoButton;
    GPURenderBufferButton *_settingsButton;
    NSLayoutConstraint *_labelConstraint;
    NSString *_nameInitedWith;
    NSMenu *_contextMenuInitedWith;
    GPUTraceResourceInfoBubble *_infoBubble;
    GPUTraceResourceSettingsBubble *_settingsBubble;
    GPUTraceEditor *_gpuTraceEditor;
    BOOL _showDepth;
    unsigned int _attachmentEnum;
    GPURenderJob *_renderJob;
    DYResourceObject *_resource;
    DYRenderingAttributes *_displayAttributes;
    NSTextField *_bufferLabelProxyTextField;
}

+ (void)initialize;
+ (id)assetBundle;
@property __weak NSTextField *bufferLabelProxyTextField; // @synthesize bufferLabelProxyTextField=_bufferLabelProxyTextField;
@property(readonly, nonatomic) DYRenderingAttributes *displayAttributes; // @synthesize displayAttributes=_displayAttributes;
@property(retain, nonatomic) DYResourceObject *resource; // @synthesize resource=_resource;
@property(retain, nonatomic) GPURenderJob *renderJob; // @synthesize renderJob=_renderJob;
- (void).cxx_destruct;
- (id)accessibleChildren;
- (void)settingsUpdate;
- (void)settingsToggleAlphaEnable;
- (void)settingsToggleBlueEnable;
- (void)settingsToggleGreenEnable;
- (void)settingsToggleRedEnable;
- (void)unloadView;
- (void)updateView;
- (void)settingsBubbleClosed;
- (void)showSettings:(id)arg1;
- (void)infoBubbleClosed;
- (void)showInfo:(id)arg1;
- (struct CGPoint)_popoverPointForParentButton:(id)arg1;
- (void)hideButtons:(BOOL)arg1;
@property(readonly, nonatomic) GPURenderBufferView *renderBufferView; // @dynamic renderBufferView;
@property(copy, nonatomic) NSString *name;
@property(readonly) struct CGSize resourceImageSize;
- (void)_updateConstraints;
- (void)loadView;
- (id)description;
- (void)primitiveInvalidate;
- (id)initWithName:(id)arg1 contextMenu:(id)arg2 traceEditor:(id)arg3 infoDelegate:(id)arg4 displayAttributes:(id)arg5 showDepth:(BOOL)arg6;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
