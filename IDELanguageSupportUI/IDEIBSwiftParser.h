/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IBSourceCodeParser.h"

@class NSString;

@interface IDEIBSwiftParser : IBSourceCodeParser
{
    NSString *_parserIdentifier;
}

+ (void)populateContext:(id)arg1 forWorkItems:(id)arg2 inWorkspace:(id)arg3;
+ (id)contextForFilePath:(id)arg1 inWorkspace:(id)arg2;
+ (BOOL)requiresContext;
+ (id)secondaryParsableFileTypeIdentifiers;
+ (id)primaryParsableFileTypeIdentifiers;
+ (id)supportedFileExtensions;
@property(retain) NSString *parserIdentifier; // @synthesize parserIdentifier=_parserIdentifier;
- (void).cxx_destruct;
- (id)parseData:(id)arg1 fromFile:(id)arg2 withContext:(id)arg3 errors:(id *)arg4;
- (id)partialDescriptionsForDocumentAtPath:(id)arg1 withContents:(id)arg2 context:(id)arg3;
- (void)enumerateMembersOfClass:(CDStruct_3b0d17db)arg1 inDocumentWithContents:(id)arg2 usingBlock:(id)arg3;
- (void)enumerateMembersOfClassInDocumentWithIdentifier:(id)arg1 inModule:(id)arg2 withContents:(id)arg3 usingBlock:(id)arg4;
- (void)enumerateClassesInDocumentAtPath:(id)arg1 withContents:(id)arg2 context:(id)arg3 usingBlock:(id)arg4;
- (id)init;

@end
