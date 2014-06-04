/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDELaunchActionOptionViewController.h"

@class IDEiPhoneDirectionsMenuController, NSPopUpButton;

@interface IDEiPhoneDirectionsOptionController : IDELaunchActionOptionViewController
{
    NSPopUpButton *_directionsPopUpButton;
    IDEiPhoneDirectionsMenuController *_directionsMenuController;
}

+ (BOOL)availableForScheme:(id)arg1;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_updateMenuSelection:(id)arg1;
- (void)viewDidInstall;
- (void)loadView;
- (id)_computeAbsolutePathForWorkspaceRelativePath:(id)arg1;
- (id)_computeIdentifierForFileReference:(id)arg1;

@end

