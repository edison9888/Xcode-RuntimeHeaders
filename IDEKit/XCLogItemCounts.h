/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface XCLogItemCounts : NSObject
{
    unsigned long long _testFailures;
    unsigned long long _errors;
    unsigned long long _warnings;
    unsigned long long _analyzerResults;
    unsigned long long _analyzerWarnings;
}

@property(nonatomic) unsigned long long analyzerWarnings; // @synthesize analyzerWarnings=_analyzerWarnings;
@property(nonatomic) unsigned long long analyzerResults; // @synthesize analyzerResults=_analyzerResults;
@property(nonatomic) unsigned long long warnings; // @synthesize warnings=_warnings;
@property(nonatomic) unsigned long long errors; // @synthesize errors=_errors;
@property(nonatomic) unsigned long long testFailures; // @synthesize testFailures=_testFailures;

@end

