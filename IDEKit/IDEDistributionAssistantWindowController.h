/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTPagingSheetWindowController.h"

@class DVTBorderedView, IDEDistributionContext, IDEDistributionStepViewController, NSString;

@interface IDEDistributionAssistantWindowController : DVTPagingSheetWindowController
{
    BOOL _stepTransitionReentrancyGuard;
    Class _firstStepClass;
    IDEDistributionContext *_context;
    IDEDistributionStepViewController *_distributionStep;
    DVTBorderedView *_stepContainerView;
}

+ (id)keyPathsForValuesAffectingCanGoPrevious;
+ (id)keyPathsForValuesAffectingNextButtonTitle;
+ (void)beginAssistantWithArchive:(id)arg1 task:(int)arg2 window:(id)arg3;
@property(retain) DVTBorderedView *stepContainerView; // @synthesize stepContainerView=_stepContainerView;
@property(retain, nonatomic) IDEDistributionStepViewController *distributionStep; // @synthesize distributionStep=_distributionStep;
@property(retain) IDEDistributionContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)exportPackage;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)previous:(id)arg1;
- (void)next:(id)arg1;
- (Class)_previousNonSkippedStepClassBeforeCurrentStep;
- (Class)_previousStepClassBeforeStepClass:(Class)arg1;
- (Class)_nextNonSkippedStepClassAfterCurrentStep;
- (Class)_nextStepClassAfterStepClass:(Class)arg1;
- (id)stepClasses;
@property(readonly) BOOL canGoPrevious;
@property(readonly) NSString *nextButtonTitle;
- (BOOL)_isOnLastDistributionStep;
- (id)_onlyAvailableMethod;
- (void)windowDidLoad;
- (id)initWithArchive:(id)arg1 task:(int)arg2;

@end

