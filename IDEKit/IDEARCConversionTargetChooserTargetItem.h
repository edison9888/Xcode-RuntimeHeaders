/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEARCConversionTargetChooserItem.h>

@class IDEARCConversionTargetChooserAssistant;

@interface IDEARCConversionTargetChooserTargetItem : IDEARCConversionTargetChooserItem
{
    IDEARCConversionTargetChooserAssistant *_targetChooserAssistant;
}

+ (id)keyPathsForValuesAffectingArrangedChildItems;
+ (id)keyPathsForValuesAffectingWarningMessage;
+ (id)keyPathsForValuesAffectingIconImage;
+ (id)keyPathsForValuesAffectingState;
+ (id)keyPathsForValuesAffectingIsEnabled;
+ (id)keyPathsForValuesAffectingTitle;
@property(retain) IDEARCConversionTargetChooserAssistant *targetChooserAssistant; // @synthesize targetChooserAssistant=_targetChooserAssistant;
- (void).cxx_destruct;
- (double)rowHeight;
- (id)arrangedChildItems;
- (id)warningMessage;
- (id)iconImage;
- (long long)state;
- (void)setState:(long long)arg1;
- (void)_setState:(long long)arg1 setStateChildren:(BOOL)arg2;
- (BOOL)isEnabled;
- (id)subtitle;
- (id)title;

@end

