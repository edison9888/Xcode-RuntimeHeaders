/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IBFoundation/IBICMultipartImageRep.h>

@class IBICImageResizingBehavior, NSString;

@interface IBICImageSetRep : IBICMultipartImageRep
{
    IBICImageResizingBehavior *_resizingBehavior;
    CDStruct_c519178c _alignmentInsets;
}

+ (Class)multiplartImageClass;
+ (Class)repIdentifierClass;
+ (id)outputImageExtension;
+ (id)imageRepWithSlot:(id)arg1 fileName:(id)arg2 andUnassigned:(BOOL)arg3;
+ (id)imageRepWithRepIdentifier:(id)arg1;
@property(nonatomic) CDStruct_c519178c alignmentInsets; // @synthesize alignmentInsets=_alignmentInsets;
@property(copy, nonatomic) IBICImageResizingBehavior *resizingBehavior; // @synthesize resizingBehavior=_resizingBehavior;
- (void).cxx_destruct;
- (id)shortDisplayName;
- (BOOL)shouldAppendSizeClassToDisplayName;
- (void)enumerateDescriptionAttributeComponents:(id)arg1;
@property(readonly) NSString *fullyQualifiedFileName;
@property(readonly) NSString *preferredOutputExtension;
- (id)descriptionShortClassName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSlot:(id)arg1;
- (void)setSlot:(id)arg1;
- (id)slot;
- (id)structuredIdentifier;
- (id)parent;

@end

