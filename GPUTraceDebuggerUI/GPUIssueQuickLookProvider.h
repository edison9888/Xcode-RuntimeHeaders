/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

#import "IDEVariablesViewQuickLookProvider-Protocol.h"

@class GPUStateValue, NSLayoutConstraint, NSString, NSTextView, NSURL, NSView;

// Not exported
@interface GPUIssueQuickLookProvider : NSViewController <IDEVariablesViewQuickLookProvider>
{
    int _loadedState;
    GPUStateValue *_dataValue;
    NSTextView *_textView;
    NSLayoutConstraint *_heightConstraint;
}

@property(retain) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain) NSTextView *textView; // @synthesize textView=_textView;
@property int loadedState; // @synthesize loadedState=_loadedState;
- (void).cxx_destruct;
- (void)cancelLoading;
@property(readonly) NSView *quickLookView;
- (void)_updateTextViewFromData;
- (void)loadView;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSURL *existingURLToOpen;
@property(readonly) NSString *extensionForTemporaryFile;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

