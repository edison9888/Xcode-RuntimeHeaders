/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

#import "DVTControllerContentViewViewControllerAdditions-Protocol.h"
#import "DVTEditor-Protocol.h"
#import "DVTInvalidation-Protocol.h"

@class DVTControllerContentView, DVTExtension, DVTStackBacktrace, NSString;

@interface DVTViewController : NSViewController <DVTControllerContentViewViewControllerAdditions, DVTEditor, DVTInvalidation>
{
    BOOL _didCallViewWillUninstall;
    void *_keepSelfAliveUntilCancellationRef;
    BOOL _isViewLoaded;
    DVTExtension *_representedExtension;
}

+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
+ (void)initialize;
@property(retain, nonatomic) DVTExtension *representedExtension; // @synthesize representedExtension=_representedExtension;
@property BOOL isViewLoaded; // @synthesize isViewLoaded=_isViewLoaded;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)invalidate;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (void)_willUninstallContentView:(id)arg1;
- (void)_didInstallContentView:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
@property(retain) DVTControllerContentView *view;
- (void)separateKeyViewLoops;
- (BOOL)delegateFirstResponder;
- (id)supplementalMainViewController;
@property(readonly, copy) NSString *description;
- (BOOL)becomeFirstResponder;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initUsingDefaultNib;
- (void)dvtViewController_commonInit;
@property(readonly) BOOL canBecomeMainViewController;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

