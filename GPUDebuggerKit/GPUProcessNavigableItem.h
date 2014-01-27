/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GPUDebuggerKit/GPUTraceGroupNavigableItem.h>

@class NSArray;

@interface GPUProcessNavigableItem : GPUTraceGroupNavigableItem
{
    NSArray *_cachedChildRepresentedObjects;
    int _callOrProgramMode;
    int _programSortMode;
}

+ (id)keyPathsForValuesAffectinImage;
+ (id)keyPathsForValuesAffectingName;
@property(nonatomic) int programSortMode; // @synthesize programSortMode=_programSortMode;
@property(nonatomic) int callOrProgramMode; // @synthesize callOrProgramMode=_callOrProgramMode;
- (void).cxx_destruct;
- (void)invalidateChildItems;
- (id)childRepresentedObjects;
- (BOOL)isLeaf;
- (id)image;
- (id)subtitle;
- (id)name;
- (id)initWithRepresentedObject:(id)arg1;

@end
