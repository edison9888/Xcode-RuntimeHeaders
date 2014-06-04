/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSSegmentedCell.h"

@interface DVTFlatSegmentedControlCell : NSSegmentedCell
{
    BOOL _drawsBackground;
    double _topLeftCornerRadius;
    double _bottomLeftCornerRadius;
    double _topRightCornerRadius;
    double _bottomRightCornerRadius;
}

@property double bottomRightCornerRadius; // @synthesize bottomRightCornerRadius=_bottomRightCornerRadius;
@property double topRightCornerRadius; // @synthesize topRightCornerRadius=_topRightCornerRadius;
@property double bottomLeftCornerRadius; // @synthesize bottomLeftCornerRadius=_bottomLeftCornerRadius;
@property double topLeftCornerRadius; // @synthesize topLeftCornerRadius=_topLeftCornerRadius;
@property BOOL drawsBackground; // @synthesize drawsBackground=_drawsBackground;
- (id)_segmentedControlPathForFrame:(struct CGRect)arg1;
- (id)_segmentPathForSegmentAtIndex:(long long)arg1 forSegmentFrame:(struct CGRect)arg2;
- (void)_drawSegment:(long long)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)_drawBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawFocusRingMaskWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (long long)backgroundStyle;
- (void)_dvtFindBarSegmentedControlCellCommonInit;
- (void)awakeFromNib;
- (id)init;

@end

