/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

@class NSPopover;

@interface IDEPlaygroundQuickLookPopover : NSViewController
{
    NSPopover *_popover;
}

@property(retain) NSPopover *popover; // @synthesize popover=_popover;
- (void).cxx_destruct;
- (struct CGRect)_maxContentSizeForQuickLookOnScreen:(id)arg1;
- (void)showQuickLookContentView:(id)arg1 relativeToRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)showQuickLookContentView:(id)arg1 relativeToView:(id)arg2;
- (id)init;

@end

