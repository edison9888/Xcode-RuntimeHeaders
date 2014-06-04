/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DYShaderProfiler.h"

@interface DYMTLShaderProfiler : DYShaderProfiler
{
}

+ (BOOL)isDisassemblerAvailable;
+ (id)newShaderProfilerWithDelegate:(id)arg1;
- (void)_preProcessUSCSampleData:(id)arg1 result:(id)arg2;
- (id)_gatherStaticInformation;
- (id)profileShader:(id)arg1;
- (void)initializeShaderAnalyzer;

// Remaining properties
@property(readonly, nonatomic) __weak id <DYShaderProfilerDelegate> delegate;

@end

