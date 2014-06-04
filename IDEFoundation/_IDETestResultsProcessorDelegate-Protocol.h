/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol _IDETestResultsProcessorDelegate
- (void)handleTestOperationsCompletionIfAppropriate;
- (void)willFinishWithError:(id)arg1 didCancel:(BOOL)arg2 sessionState:(id)arg3;
- (void)testSuiteDidFinish:(long long)arg1 withFailures:(long long)arg2 unexpected:(long long)arg3 testDuration:(double)arg4 totalDuration:(double)arg5 rawOutput:(id)arg6 sessionState:(id)arg7;
- (void)testSuite:(id)arg1 willFinishAt:(id)arg2 rawOutput:(id)arg3 sessionState:(id)arg4;
- (void)testCaseDidFinishForTestClass:(id)arg1 method:(id)arg2 withStatus:(id)arg3 duration:(double)arg4 rawOutput:(id)arg5 sessionState:(id)arg6;
- (void)testCaseDidProducePerformanceOutput:(id)arg1 rawOutput:(id)arg2 sessionState:(id)arg3;
- (void)testCaseDidMeasurePerformanceMetricForTestClass:(id)arg1 method:(id)arg2 performanceMetric:(id)arg3 rawOutput:(id)arg4 sessionState:(id)arg5;
- (void)testCaseDidFailForTestClass:(id)arg1 method:(id)arg2 withMessage:(id)arg3 file:(id)arg4 line:(long long)arg5 rawOutput:(id)arg6 sessionState:(id)arg7;
- (void)testCaseDidStartForTestClass:(id)arg1 method:(id)arg2 rawOutput:(id)arg3 sessionState:(id)arg4;
- (void)testSuite:(id)arg1 didStartAt:(id)arg2 rawOutput:(id)arg3 sessionState:(id)arg4;
- (void)testDidOutput:(id)arg1 sessionState:(id)arg2;
- (void)launchSessionStarted:(id)arg1;
@end

