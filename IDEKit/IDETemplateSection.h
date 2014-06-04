/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h"

@class DVTDocumentLocation, DVTFileDataType, DVTPlatform, IDEFileReference, NSArray, NSImage, NSMutableDictionary, NSString;

@interface IDETemplateSection : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSMutableDictionary *_templateCategoriesByName;
    NSArray *_categories;
    DVTPlatform *_platform;
}

+ (id)keyPathsForValuesAffectingWillChangeDeviceSoftwareVersion;
@property(retain) DVTPlatform *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
@property(readonly) NSArray *templates;
@property(readonly) NSArray *categories; // @synthesize categories=_categories;
- (void)sortAllCategories;
- (void)addTemplate:(id)arg1;
- (id)categoryWithName:(id)arg1;
@property(readonly) NSString *sectionIdentifier;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

