/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEDistributionStepViewController.h>

@class NSString;

@interface IDEDistributionUploadStepViewController : IDEDistributionStepViewController
{
    double _progress;
    NSString *_message;
}

+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(int)arg2;
@property(copy) NSString *message; // @synthesize message=_message;
@property double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)viewDidInstall;
- (id)providedOutputContextPropetyNames;
- (id)requiredInputContextPropertyNames;
- (BOOL)canGoPrevious;
- (BOOL)canGoNext;
- (id)title;
- (id)nibName;

@end

