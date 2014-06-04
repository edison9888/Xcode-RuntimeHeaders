/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h"

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSArray, NSImage, NSString;

@interface IBClassesDebuggerItem : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    BOOL _topLevel;
    NSArray *_childItems;
    NSString *_title;
    NSString *_subtitle;
    NSImage *_image;
}

+ (id)itemForClassNamed:(id)arg1;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(copy) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(retain) NSArray *childItems; // @synthesize childItems=_childItems;
@property(getter=isTopLevel) BOOL topLevel; // @synthesize topLevel=_topLevel;
- (void).cxx_destruct;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

