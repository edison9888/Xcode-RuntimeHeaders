/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTextFieldCell.h"

@class DVTStepperTextFieldFormatter, NSButtonCell, NSCell, NSString;

@interface DVTStepperTextFieldCell : NSTextFieldCell
{
    DVTStepperTextFieldFormatter *_stepperFieldFormatter;
    NSButtonCell *_minusButtonCell;
    NSButtonCell *_plusButtonCell;
}

+ (id)_textFieldPathForFrame:(struct CGRect)arg1;
@property(readonly) NSCell *plusButtonCell; // @synthesize plusButtonCell=_plusButtonCell;
@property(readonly) NSCell *minusButtonCell; // @synthesize minusButtonCell=_minusButtonCell;
- (void).cxx_destruct;
- (struct CGRect)_accessibilityTextFieldCellBounds;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilityPositionOfChild:(id)arg1;
- (id)_plusButtonCellAttribute;
- (id)_minusButtonCellAttribute;
- (id)accessibilityChildrenAttribute;
- (void)_trackButton:(id)arg1 forEvent:(id)arg2 inRect:(struct CGRect)arg3 ofView:(id)arg4;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)drawFocusRingMaskWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawBackgroundForFlatStyleWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)plusButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minusButtonRectForBounds:(struct CGRect)arg1;
@property(retain) NSString *suffix;
@property(retain) NSString *prefix;
- (void)setFormatter:(id)arg1;
@property(readonly) DVTStepperTextFieldFormatter *stepperFieldFormatter;
- (id)_createButtonCell;
- (void)_dvtStepperFieldCell_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

