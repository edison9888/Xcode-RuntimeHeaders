/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface XDLineDashPattern : NSObject <NSCoding, NSCopying>
{
    NSString *_name;
    double *_pattern;
    long long _count;
    double _phase;
    double _lastCachedLineWidth;
    double *_lastCachedPattern;
}

+ (id)lineDashPatternWithLineDash:(const double *)arg1 count:(long long)arg2 phase:(double)arg3;
+ (id)registeredLineDashPatterns;
+ (id)registeredLineDashPatternForIdentifier:(id)arg1;
+ (void)unregisterLineDashPatternForIdentifier:(id)arg1;
+ (void)registerLineDashPattern:(id)arg1 forIdentifier:(id)arg2;
+ (void)initialize;
- (void).cxx_destruct;
- (const double *)lineDashPatternForLineWidth:(double)arg1;
- (double)lineDashPhase;
- (long long)lineDashPatternCount;
- (const double *)lineDashPattern;
- (void)setLineDash:(const double *)arg1 count:(long long)arg2 phase:(double)arg3;
- (id)lineDashPatternName;
- (void)setLineDashPatternName:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLineDashPattern:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithLineDash:(const double *)arg1 count:(long long)arg2 phase:(double)arg3;

@end

