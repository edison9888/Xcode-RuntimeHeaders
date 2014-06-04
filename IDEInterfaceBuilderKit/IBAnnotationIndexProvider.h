/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IBIndexClassDescriber, NSSet;

@interface IBAnnotationIndexProvider : NSObject
{
    IBIndexClassDescriber *_indexClassDescriber;
    NSSet *_classNames;
}

+ (id)annotationsForClassesNamed:(id)arg1 usingIndexClassDescriber:(id)arg2;
- (void).cxx_destruct;
- (id)annotationsFromIndex;
- (id)annotationsFromConnectionSymbols:(id)arg1 withConnectionNameToOccurrencesDictionary:(id)arg2 inClassNamed:(id)arg3;
- (id)generateAnnotationUsingConnectionSymbol:(id)arg1 withOccurrences:(id)arg2 type:(long long)arg3 kind:(unsigned long long)arg4 inClassNamed:(id)arg5;
- (unsigned long long)annotationKindForConnectionSymbol:(id)arg1;
- (long long)relationshipTypeForConnectionSymbol:(id)arg1;
- (id)ibConnectionLocationsFromOccurrences:(id)arg1;
- (id)initWithClassesNamed:(id)arg1 usingIndexClassDescriber:(id)arg2;

@end

