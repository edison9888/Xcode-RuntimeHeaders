/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDate, NSString;

@interface CSDateTime : NSObject <NSObject, NSCopying>
{
    NSDate *date;
}

+ (id)dateTimeWithTimeIntervalSince1970:(double)arg1;
+ (id)dateTimeWithTimeIntervalSinceNow:(double)arg1;
+ (id)now;
+ (void)initialize;
@property(retain) NSDate *date; // @synthesize date;
- (void).cxx_destruct;
- (void)decodeFromDictionary:(id)arg1;
- (id)encodeToDictionary;
@property(readonly, copy) NSString *description;
- (id)isoValue;
- (BOOL)isEqualTo:(id)arg1;
- (double)epochValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithDate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

