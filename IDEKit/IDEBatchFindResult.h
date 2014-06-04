/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h"

@class DVTDocumentLocation, DVTFileDataType, DVTFindResult, IDEBatchFindCandidateFile, IDEFileReference, IDEIndexSymbol, NSDate, NSImage, NSString;

@interface IDEBatchFindResult : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    DVTFindResult *_findResult;
    struct _NSRange _wholeWordRange;
    BOOL _wholeWordCalculated;
    IDEIndexSymbol *_symbol;
    IDEBatchFindCandidateFile *_foundInFile;
    BOOL _backingFileChangedOnDisk;
    NSDate *_resultTime;
    BOOL _needToTruncateHead;
    int _computedDetailLevel;
    int _columnWidth;
    struct CGSize _computedSize;
}

+ (id)findResultsSortedByFileByDocumentLocation:(id)arg1;
+ (id)keyPathsForValuesAffectingDisplayImage;
@property BOOL needToTruncateHead; // @synthesize needToTruncateHead=_needToTruncateHead;
@property int columnWidth; // @synthesize columnWidth=_columnWidth;
@property int computedDetailLevel; // @synthesize computedDetailLevel=_computedDetailLevel;
@property struct CGSize computedSize; // @synthesize computedSize=_computedSize;
@property BOOL backingFileChangedOnDisk; // @synthesize backingFileChangedOnDisk=_backingFileChangedOnDisk;
@property(retain) IDEIndexSymbol *symbol; // @synthesize symbol=_symbol;
@property(readonly) IDEBatchFindCandidateFile *foundInFile; // @synthesize foundInFile=_foundInFile;
@property(readonly) DVTFindResult *findResult; // @synthesize findResult=_findResult;
- (void).cxx_destruct;
@property(readonly) NSString *formattedStringRepresentation;
@property(readonly) NSImage *statusImage;
@property(readonly) NSImage *displayImage;
@property(readonly) struct _NSRange displayFocusRange;
@property(readonly) NSString *displayTitle;
@property(readonly) struct _NSRange matchRange;
@property(readonly) struct _NSRange symbolRange;
@property(readonly) NSString *wholeWordMatch;
@property(readonly) struct _NSRange wholeWordRange;
- (BOOL)resultValid;
- (void)fileWasSavedDuringReplace;
@property(readonly, getter=isReplaceable) BOOL replacable;
- (BOOL)hasSymbol;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithResult:(id)arg1 foundInFile:(id)arg2;
- (id)ideModelObjectTypeIdentifier;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end
