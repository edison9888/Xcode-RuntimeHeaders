/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol XCTestManager_IDEInterface
- (id)_XCT_testMethod:(id)arg1 ofClass:(id)arg2 didMeasureMetric:(id)arg3 file:(id)arg4 line:(id)arg5;
- (id)_XCT_testMethod:(id)arg1 ofClass:(id)arg2 didMeasureValues:(id)arg3 forPerformanceMetricID:(id)arg4 name:(id)arg5 withUnits:(id)arg6 baselineName:(id)arg7 baselineAverage:(id)arg8 maxPercentRegression:(id)arg9 maxPercentRelativeStandardDeviation:(id)arg10 file:(id)arg11 line:(id)arg12;
- (id)_XCT_testCase:(id)arg1 method:(id)arg2 didStallOnMainThreadInFile:(id)arg3 line:(id)arg4;
- (id)_XCT_testCaseDidFinishForTestClass:(id)arg1 method:(id)arg2 withStatus:(id)arg3 duration:(id)arg4;
- (id)_XCT_testCaseDidFailForTestClass:(id)arg1 method:(id)arg2 withMessage:(id)arg3 file:(id)arg4 line:(id)arg5;
- (id)_XCT_testCaseDidStartForTestClass:(id)arg1 method:(id)arg2;
- (id)_XCT_testSuite:(id)arg1 didFinishAt:(id)arg2 runCount:(id)arg3 withFailures:(id)arg4 unexpected:(id)arg5 testDuration:(id)arg6 totalDuration:(id)arg7;
- (id)_XCT_testSuite:(id)arg1 didStartAt:(id)arg2;
- (id)_XCT_didFinishExecutingTestPlan;
- (id)_XCT_didBeginExecutingTestPlan;
- (id)_XCT_testBundleReadyWithProtocolVersion:(id)arg1 minimumVersion:(id)arg2;
- (id)_XCT_testBundleReady;
@end

