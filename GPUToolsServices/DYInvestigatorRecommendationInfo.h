/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSAttributedString;

@interface DYInvestigatorRecommendationInfo : NSObject <NSCopying, NSCoding>
{
    NSAttributedString *_text;
}

@property(readonly, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)debugPrintFormatted;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithAttributedString:(id)arg1;
- (id)init;
- (id)description;

@end

