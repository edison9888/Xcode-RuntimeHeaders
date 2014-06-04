/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTAccessoryViewAnnotation.h"

@class IDESourceCodePlaygroundSectionAnnotationViewController, NSArray, NSMutableArray;

@interface IDESourceCodePlaygroundSectionAccessoryViewAnnotation : DVTAccessoryViewAnnotation
{
    NSMutableArray *_loggerResults;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)currentStateInTextView:(id)arg1;
- (void)drawLineHighlightInRect:(struct CGRect)arg1 textView:(id)arg2;
- (id)initWithViewControllerClass:(Class)arg1;

// Remaining properties
@property(copy) NSArray *loggerResults; // @dynamic loggerResults;
@property(readonly, copy) NSMutableArray *mutableLoggerResults; // @dynamic mutableLoggerResults;
@property(readonly) IDESourceCodePlaygroundSectionAnnotationViewController *viewController; // @dynamic viewController;

@end

