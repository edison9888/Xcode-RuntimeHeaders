/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEFoundation/IDEStandardTestRunner.h>

@class DVTObservingToken, IDEUIATestScriptAgentCommunicator, NSDictionary, NSOperationQueue;

@interface IDEUIATestRunner : IDEStandardTestRunner
{
    NSOperationQueue *_commandLineArgsQueue;
    DVTObservingToken *_debugSessionHasStartedObserverToken;
    NSDictionary *_buildConfigurationDictionary;
    IDEUIATestScriptAgentCommunicator *_agentCommunicator;
}

+ (void)initialize;
@property(retain) IDEUIATestScriptAgentCommunicator *agentCommunicator; // @synthesize agentCommunicator=_agentCommunicator;
@property(retain) NSDictionary *buildConfigurationDictionary; // @synthesize buildConfigurationDictionary=_buildConfigurationDictionary;
- (void).cxx_destruct;
- (id)_scheduledTestArgumentsOperationForBuildParameters:(id)arg1 runDestination:(id)arg2 workspace:(id)arg3 testRunIdentifier:(id)arg4 testRunIdentifiers:(id)arg5 error:(id *)arg6 completionBlock:(id)arg7;
- (id)_writeTestInvocationScope:(id)arg1 forTestBundlePath:(id)arg2 inWorkspace:(id)arg3 invertScope:(BOOL)arg4;
- (id)testListWithWorkspace:(id)arg1 supportMultiple:(BOOL)arg2 supportInverse:(BOOL)arg3 invert:(char *)arg4;
- (void)_configureCommunicatorWithBuildConfigurationDictionary;
- (id)environmentVariablesForBuildParameters:(id)arg1 runDestination:(id)arg2 testRunIdentifier:(id)arg3 testRunIdentifiers:(id)arg4 error:(id *)arg5;
- (id)testOperationsForExecutionEnvironment:(id)arg1 buildParameters:(id)arg2 runDestination:(id)arg3 workspace:(id)arg4 error:(id *)arg5 launchParametersBlock:(id)arg6;
- (id)defaultTestArgumentsOperationForBuildParameters:(id)arg1 runDestination:(id)arg2 workspace:(id)arg3 error:(id *)arg4 completionBlock:(id)arg5;
- (id)initWithBuildableProduct:(id)arg1;

// Remaining properties
@property(retain) id <IDEBuildableProduct> buildableProduct;

@end

