/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IBObjectLibraryAssetProvider.h"

@class IBCocoaPopoverObjectLibraryAsset, IBCocoaSourceListObjectLibraryAsset, IBCocoaWindowAndDrawerObjectLibraryAsset, IBObjectLibraryAsset;

@interface IBCocoaObjectLibraryAssetProvider : IBObjectLibraryAssetProvider
{
    IBObjectLibraryAsset *texturedWindowAsset;
    IBObjectLibraryAsset *windowAsset;
    IBObjectLibraryAsset *windowControllerAsset;
    IBObjectLibraryAsset *viewControllerAsset;
    IBObjectLibraryAsset *panelAsset;
    IBObjectLibraryAsset *headsUpDisplayAsset;
    IBCocoaWindowAndDrawerObjectLibraryAsset *drawerAsset;
    IBObjectLibraryAsset *collectionViewAsset;
    IBObjectLibraryAsset *collectionViewItemAsset;
    IBObjectLibraryAsset *containerViewAsset;
    IBObjectLibraryAsset *openGLViewAsset;
    IBObjectLibraryAsset *standardConfigureToolbarItemAsset;
    IBObjectLibraryAsset *standardFontToolbarItemAsset;
    IBObjectLibraryAsset *standardColorToolbarItemAsset;
    IBObjectLibraryAsset *standardSeparatorToolbarItemAsset;
    IBObjectLibraryAsset *standardSpaceToolbarItemAsset;
    IBObjectLibraryAsset *standardPrintToolbarItemAsset;
    IBObjectLibraryAsset *standardFlexibleSpaceToolbarItemAsset;
    IBObjectLibraryAsset *multilineBorderedTextFieldAsset;
    IBObjectLibraryAsset *multilineLabelAsset;
    IBObjectLibraryAsset *labelAsset;
    IBObjectLibraryAsset *imageViewAsset;
    IBObjectLibraryAsset *imageWellAsset;
    IBObjectLibraryAsset *textFieldWithNumberFormatterAsset;
    IBObjectLibraryAsset *numberFormatterAsset;
    IBObjectLibraryAsset *dateFormatterAsset;
    IBObjectLibraryAsset *treeControllerAsset;
    IBObjectLibraryAsset *tableCellViewAsset;
    IBObjectLibraryAsset *textOnlyTableCellViewAsset;
    IBObjectLibraryAsset *enterFullScreenAsset;
    IBObjectLibraryAsset *pageControllerAsset;
    IBObjectLibraryAsset *tabViewController;
    IBObjectLibraryAsset *verticalSplitViewController;
    IBObjectLibraryAsset *horizontalSplitViewController;
    IBCocoaPopoverObjectLibraryAsset *popoverAsset;
    IBCocoaSourceListObjectLibraryAsset *sourceListAsset;
    IBObjectLibraryAsset *byteCountFormatter;
    IBObjectLibraryAsset *textMenuAsset;
    IBObjectLibraryAsset *fontMenuAsset;
    IBObjectLibraryAsset *formatMenuAsset;
    IBObjectLibraryAsset *applicationMenuAsset;
    IBObjectLibraryAsset *windowsMenuAsset;
    IBObjectLibraryAsset *fileMenuAsset;
    IBObjectLibraryAsset *helpMenuAsset;
    IBObjectLibraryAsset *editMenuAsset;
    IBObjectLibraryAsset *findMenuAsset;
}

- (void).cxx_destruct;
- (id)pasteboardObjectsForAsset:(id)arg1;
- (id)processPasteboardObjectsForAsset:(id)arg1;
- (id)windowAssetForWindowObjectAsset:(id)arg1;
- (void)document:(id)arg1 didAddDraggedObjects:(id)arg2 fromDraggedObjectLibraryAsset:(id)arg3;
- (void)didAddMenuItemAsset:(id)arg1 withProducts:(id)arg2 toDocument:(id)arg3;
- (void)didAddSourceListAssetProducts:(id)arg1 toDocument:(id)arg2;
- (void)didAddPopoverAssetProducts:(id)arg1 toDocument:(id)arg2;
- (void)didAddEnterFullScreenAssetProducts:(id)arg1 toDocument:(id)arg2;
- (void)didAddTextOnlyTableCellViewAssetProducts:(id)arg1 toDocument:(id)arg2;
- (void)didAddTableCellViewAssetProducts:(id)arg1 toDocument:(id)arg2;
- (void)didAddImageViewAssetProducts:(id)arg1 toDocument:(id)arg2;
- (void)didAddLabelAssetProducts:(id)arg1 toDocument:(id)arg2;
- (void)didAddMultilineTextFieldAssetProducts:(id)arg1 isLabel:(BOOL)arg2 toDocument:(id)arg3;
- (void)didAddDateFormatterAssetProducts:(id)arg1 toDocument:(id)arg2;
- (void)didAddNumberFormatterAssetProducts:(id)arg1 toDocument:(id)arg2;
- (void)didAddTextFieldWithNumberFormatterAssetProducts:(id)arg1 toDocument:(id)arg2;
- (void)didAddOpenGLViewAssetProducts:(id)arg1 toDocument:(id)arg2;
- (id)createViewControllerFromAsset:(id)arg1 inContainerOrDocument:(id)arg2;
- (void)didAddCollectionViewAssetProducts:(id)arg1 toDocument:(id)arg2;
- (void)didAddDrawerAssetProducts:(id)arg1 toDocument:(id)arg2;
- (BOOL)isMenuItemAsset:(id)arg1;
- (BOOL)shouldIncludeAsset:(id)arg1;

@end
