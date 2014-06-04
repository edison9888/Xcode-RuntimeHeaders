/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderKit/IBArgumentsContainer.h>

@class DVTMutableOrderedDictionary, NSArray, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface IBToolArgumentsContainer : IBArgumentsContainer
{
    NSMutableArray *_importSourcePaths;
    NSMutableArray *_pluginPaths;
    NSMutableArray *_pluginSearchPaths;
    DVTMutableOrderedDictionary *_classNameRemap;
    NSMutableArray *_bundlePaths;
    NSMutableArray *_bundlePaths3;
    BOOL _upgrade;
    BOOL _removePluginDependency;
    BOOL _extractLocalizableStrings;
    BOOL _extractLocalizableAll;
    BOOL _showDebugOutput;
    BOOL _printObjects;
    BOOL _printConnections;
    BOOL _printClasses;
    BOOL _incrementallyLocalize;
    BOOL _referenceExternalStringsFile;
    BOOL _printHierarchy;
    BOOL _printNibVersion;
    BOOL _printErrorMessages;
    BOOL _printWarningMessages;
    BOOL _printNoticeMessages;
    BOOL _printMessageCategoryInfo;
    BOOL _printTargetRuntime;
    BOOL _printIndexingInformation;
    BOOL _printSearchDescription;
    BOOL _printStrippedTextContent;
    BOOL _makeEditableWhenCompiling;
    BOOL _shouldPrintVersion;
    BOOL _extractLocalizableGeometry;
    BOOL _extractLocalizableOther;
    BOOL _extractLocalizableToManyRelationships;
    BOOL _extractLocalizableArrays;
    BOOL _enableAutoLayout;
    BOOL _printAutoLayoutEnabled;
    BOOL _shouldUpdateAutoLayoutFrames;
    BOOL _shouldUpdateAutoLayoutConstraints;
    NSString *_targetRuntimeIdentifier;
    NSDictionary *_refactorInfo;
    NSDictionary *_exportPropertiesDescription;
    NSDictionary *_exportPropertiesDescription3;
    NSDictionary *_importProperties;
    NSDictionary *_importProperties3;
    NSString *_outputDocumentPath;
    NSString *_inputStringsFilePath;
    NSString *_priorLocalizedDocumentPath;
    NSString *_priorMasterDocumentPath;
    NSString *_outputStringsFilePath;
    NSString *_compilationOutputPath;
    NSString *_strippingOutputPath;
    NSString *_documentOutputFormat;
    NSString *_minimumDeploymentTarget;
    NSString *_XLIFFExportPath;
    NSString *_XLIFFImportPath;
    NSString *_XLIFFSourceLanguage;
    NSString *_XLIFFTargetLanguage;
    NSArray *_targetDevices;
    NSNumber *_launchScreen;
    NSString *_module;
    NSString *_baseSDK;
}

@property(copy) NSString *baseSDK; // @synthesize baseSDK=_baseSDK;
@property(copy) NSString *module; // @synthesize module=_module;
@property(nonatomic) NSNumber *launchScreen; // @synthesize launchScreen=_launchScreen;
@property BOOL shouldUpdateAutoLayoutConstraints; // @synthesize shouldUpdateAutoLayoutConstraints=_shouldUpdateAutoLayoutConstraints;
@property BOOL shouldUpdateAutoLayoutFrames; // @synthesize shouldUpdateAutoLayoutFrames=_shouldUpdateAutoLayoutFrames;
@property BOOL printAutoLayoutEnabled; // @synthesize printAutoLayoutEnabled=_printAutoLayoutEnabled;
@property BOOL enableAutoLayout; // @synthesize enableAutoLayout=_enableAutoLayout;
@property(copy) NSArray *targetDevices; // @synthesize targetDevices=_targetDevices;
@property(copy) NSString *XLIFFTargetLanguage; // @synthesize XLIFFTargetLanguage=_XLIFFTargetLanguage;
@property(copy) NSString *XLIFFSourceLanguage; // @synthesize XLIFFSourceLanguage=_XLIFFSourceLanguage;
@property(copy) NSString *XLIFFImportPath; // @synthesize XLIFFImportPath=_XLIFFImportPath;
@property(copy) NSString *XLIFFExportPath; // @synthesize XLIFFExportPath=_XLIFFExportPath;
@property(copy) NSString *minimumDeploymentTarget; // @synthesize minimumDeploymentTarget=_minimumDeploymentTarget;
@property(copy) NSString *documentOutputFormat; // @synthesize documentOutputFormat=_documentOutputFormat;
@property(copy) NSString *strippingOutputPath; // @synthesize strippingOutputPath=_strippingOutputPath;
@property(copy) NSString *compilationOutputPath; // @synthesize compilationOutputPath=_compilationOutputPath;
@property BOOL extractLocalizableArrays; // @synthesize extractLocalizableArrays=_extractLocalizableArrays;
@property BOOL extractLocalizableToManyRelationships; // @synthesize extractLocalizableToManyRelationships=_extractLocalizableToManyRelationships;
@property BOOL extractLocalizableOther; // @synthesize extractLocalizableOther=_extractLocalizableOther;
@property BOOL extractLocalizableGeometry; // @synthesize extractLocalizableGeometry=_extractLocalizableGeometry;
@property BOOL shouldPrintVersion; // @synthesize shouldPrintVersion=_shouldPrintVersion;
@property(copy) NSString *outputStringsFilePath; // @synthesize outputStringsFilePath=_outputStringsFilePath;
@property(copy) DVTMutableOrderedDictionary *classNameRemap; // @synthesize classNameRemap=_classNameRemap;
@property(copy) NSArray *bundlePaths3; // @synthesize bundlePaths3=_bundlePaths3;
@property(copy) NSArray *bundlePaths; // @synthesize bundlePaths=_bundlePaths;
@property(copy) NSString *priorMasterDocumentPath; // @synthesize priorMasterDocumentPath=_priorMasterDocumentPath;
@property(copy) NSString *priorLocalizedDocumentPath; // @synthesize priorLocalizedDocumentPath=_priorLocalizedDocumentPath;
@property(copy) NSString *inputStringsFilePath; // @synthesize inputStringsFilePath=_inputStringsFilePath;
@property BOOL makeEditableWhenCompiling; // @synthesize makeEditableWhenCompiling=_makeEditableWhenCompiling;
@property(copy) NSString *outputDocumentPath; // @synthesize outputDocumentPath=_outputDocumentPath;
@property(copy) NSArray *pluginSearchPaths; // @synthesize pluginSearchPaths=_pluginSearchPaths;
@property(copy) NSArray *pluginPaths; // @synthesize pluginPaths=_pluginPaths;
@property(copy) NSDictionary *importProperties3; // @synthesize importProperties3=_importProperties3;
@property(copy) NSDictionary *importProperties; // @synthesize importProperties=_importProperties;
@property(copy) NSDictionary *exportPropertiesDescription3; // @synthesize exportPropertiesDescription3=_exportPropertiesDescription3;
@property(copy) NSDictionary *exportPropertiesDescription; // @synthesize exportPropertiesDescription=_exportPropertiesDescription;
@property(copy) NSDictionary *refactorInfo; // @synthesize refactorInfo=_refactorInfo;
@property(copy) NSString *targetRuntimeIdentifier; // @synthesize targetRuntimeIdentifier=_targetRuntimeIdentifier;
@property BOOL printStrippedTextContent; // @synthesize printStrippedTextContent=_printStrippedTextContent;
@property BOOL printSearchDescription; // @synthesize printSearchDescription=_printSearchDescription;
@property BOOL printIndexingInformation; // @synthesize printIndexingInformation=_printIndexingInformation;
@property BOOL printTargetRuntime; // @synthesize printTargetRuntime=_printTargetRuntime;
@property BOOL printMessageCategoryInfo; // @synthesize printMessageCategoryInfo=_printMessageCategoryInfo;
@property BOOL printNoticeMessages; // @synthesize printNoticeMessages=_printNoticeMessages;
@property BOOL printWarningMessages; // @synthesize printWarningMessages=_printWarningMessages;
@property BOOL printErrorMessages; // @synthesize printErrorMessages=_printErrorMessages;
@property BOOL printNibVersion; // @synthesize printNibVersion=_printNibVersion;
@property BOOL printHierarchy; // @synthesize printHierarchy=_printHierarchy;
@property BOOL referenceExternalStringsFile; // @synthesize referenceExternalStringsFile=_referenceExternalStringsFile;
@property BOOL incrementallyLocalize; // @synthesize incrementallyLocalize=_incrementallyLocalize;
@property BOOL printClasses; // @synthesize printClasses=_printClasses;
@property BOOL printConnections; // @synthesize printConnections=_printConnections;
@property BOOL printObjects; // @synthesize printObjects=_printObjects;
@property BOOL showDebugOutput; // @synthesize showDebugOutput=_showDebugOutput;
@property BOOL extractLocalizableAll; // @synthesize extractLocalizableAll=_extractLocalizableAll;
@property BOOL extractLocalizableStrings; // @synthesize extractLocalizableStrings=_extractLocalizableStrings;
@property BOOL removePluginDependency; // @synthesize removePluginDependency=_removePluginDependency;
@property BOOL upgrade; // @synthesize upgrade=_upgrade;
@property(copy) NSArray *importSourcePaths; // @synthesize importSourcePaths=_importSourcePaths;
- (void).cxx_destruct;
- (void)validateAfterInterpretingOptionsCollectingErrors:(id)arg1;
- (void)interpretOption:(CDStruct_96d6799e)arg1 optionalParameter:(id)arg2 collectingErrors:(id)arg3;
- (id)optionIndex;
- (id)generateEquivalentArgumentArrayForIBToolVersion:(long long)arg1;
- (long long)outputFormatArgumentCode;
- (BOOL)isMissingRequiredArgumentsForIncrementalLocalization;
- (id)collectionOptionsThatRequireInputDocuments;
- (id)objectOptionsThatRequireInputDocuments;
- (id)booleanOptionsThatRequireInputDocuments;
- (void)addPluginSearchPath:(id)arg1;
- (void)addPluginPath:(id)arg1;
- (void)addBundlePath3:(id)arg1;
- (void)addBundlePath:(id)arg1;
- (void)addImportSourcePath:(id)arg1;
- (id)description;
- (id)init;

@end

