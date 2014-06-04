/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDETemplateFactory.h>

@class DVTObservingToken, IDEVersionedFileManager, NSFileManager, NSOperationQueue;

@interface IDETemplateTextSubstitutionFactory : IDETemplateFactory
{
    NSFileManager *_fileManager;
    IDEVersionedFileManager *_versionedFileManager;
    DVTObservingToken *_operationObservingToken;
    NSOperationQueue *_queue;
}

@property(readonly) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)instantiateTemplateForContext:(id)arg1 options:(id)arg2 whenDone:(id)arg3;
- (id)operationForContext:(id)arg1 options:(id)arg2;
- (id)proposedFilePathsForContext:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_operationToInstantiateTemplateForContext:(id)arg1 options:(id)arg2 processor:(id)arg3 finalProcessor:(void)arg4;
- (id)mainFileNameForContext:(id)arg1;
- (id)macroEngineForContext:(id)arg1;
- (id)standardMacrosForContext:(id)arg1;
- (BOOL)shouldAddCreatedDocumentsToVersionControl:(id)arg1;
- (id)additionalMacrosForContext:(id)arg1;
- (void)dealloc;
- (id)init;

@end

