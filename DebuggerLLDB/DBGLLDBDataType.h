/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DBGDataType.h"

@class NSString;

// Not exported
@interface DBGLLDBDataType : DBGDataType
{
    struct SBType _lldbType;
    NSString *_pointeeTypeName;
    BOOL _isPointer;
}

@property(retain) NSString *pointeeTypeName; // @synthesize pointeeTypeName=_pointeeTypeName;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isUnknownType;
- (BOOL)isPointer;
- (id)initWithTypename:(id)arg1 withType:(struct SBType)arg2;

@end

