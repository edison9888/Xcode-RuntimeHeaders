/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSArray;

@interface DVTStackView_AppKitAutolayout : NSView
{
    NSArray *_privateConstraints;
    unsigned long long _paddingMask;
    double _topPadding;
    double _rightPadding;
    double _bottomPadding;
    double _leftPadding;
    double _paddingBetweenViews;
    double _padding;
    BOOL _stacksHorizontally;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(nonatomic) BOOL stacksHorizontally; // @synthesize stacksHorizontally=_stacksHorizontally;
@property double padding; // @synthesize padding=_padding;
@property double paddingBetweenViews; // @synthesize paddingBetweenViews=_paddingBetweenViews;
@property double leftPadding; // @synthesize leftPadding=_leftPadding;
@property double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property double rightPadding; // @synthesize rightPadding=_rightPadding;
@property double topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) unsigned long long paddingMask; // @synthesize paddingMask=_paddingMask;
- (void).cxx_destruct;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (id)_generateConstraints;
@property(retain) NSArray *privateConstraints;
- (void)updateConstraints;
- (void)addView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addViewToEnd:(id)arg1;
- (BOOL)isFlipped;
- (void)_autolayoutStackViewCommonInit;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

