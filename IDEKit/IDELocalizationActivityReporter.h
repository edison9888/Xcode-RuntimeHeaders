/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEActivityReporter.h>

@class IDEActivityReport, NSObject<IDELocalizationProgress>;

@interface IDELocalizationActivityReporter : IDEActivityReporter
{
    NSObject<IDELocalizationProgress> *_worker;
    id _localizationStartObserver;
    id _localizationPhaseObserver;
    id _localizationProgressObserver;
    id _localizationCompleteObserver;
    IDEActivityReport *_activeReport;
}

+ (id)_titleSegmentsForWorker:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

@end

