/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HelpData.framework/Versions/A/HelpData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSArray, NSString, NSDictionary;

@interface HPDHelpBook : NSObject <NSCoding, NSSecureCoding> {

	NSURL* _iconURL;
	NSURL* _remoteURL;
	NSArray* _indexPaths;
	NSString* _kbProductString;
	NSString* _kbURLString;
	NSString* _bookID;
	NSString* _path;
	NSString* _title;
	NSString* _accessPagePath;
	NSString* _exactMatchPath;
	NSString* _suggestionsPath;
	NSString* _topiclistTemplatePath;
	NSString* _topiclistCSSPath;
	NSString* _pathToLoadFrom;
	NSString* _csIndexPath;
	NSString* _localization;
	NSString* _bookVersion;
	NSString* _appBundleID;
	NSString* _appBundleVersion;
	NSString* _productName;
	NSString* _lastSuccessfullySetPath;
	NSString* _lastSuccessfullySetLocale;
	char _usesExternalViewer;
	NSDictionary* _remoteBookInfo;
	unsigned long long _stringEncoding;
	unsigned _type;
	unsigned short _alreadyCheckedMask;

}

@property (retain) NSArray * indexPaths;                              //@synthesize indexPaths=_indexPaths - In the implementation block
@property (retain) NSURL * remoteURL;                                 //@synthesize remoteURL=_remoteURL - In the implementation block
@property (retain) NSString * kbURLString;                            //@synthesize kbURLString=_kbURLString - In the implementation block
@property (retain) NSString * kbProductString;                        //@synthesize kbProductString=_kbProductString - In the implementation block
@property (retain) NSString * accessPagePath;                         //@synthesize accessPagePath=_accessPagePath - In the implementation block
@property (retain) NSString * topiclistTemplatePath;                  //@synthesize topiclistTemplatePath=_topiclistTemplatePath - In the implementation block
@property (retain) NSString * topiclistCSSPath;                       //@synthesize topiclistCSSPath=_topiclistCSSPath - In the implementation block
@property (retain) NSString * csIndexPath;                            //@synthesize csIndexPath=_csIndexPath - In the implementation block
@property (readonly) unsigned type;                                   //@synthesize type=_type - In the implementation block
@property (readonly) NSURL * iconURL; 
@property (readonly) NSString * path;                                 //@synthesize path=_path - In the implementation block
@property (readonly) NSString * localization;                         //@synthesize localization=_localization - In the implementation block
@property (readonly) NSString * bookVersion;                          //@synthesize bookVersion=_bookVersion - In the implementation block
@property (readonly) NSString * appBundleVersion;                     //@synthesize appBundleVersion=_appBundleVersion - In the implementation block
@property (readonly) NSString * appBundleID;                          //@synthesize appBundleID=_appBundleID - In the implementation block
@property (readonly) NSString * appPath; 
@property (readonly) NSString * productName;                          //@synthesize productName=_productName - In the implementation block
@property (readonly) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (readonly) NSString * unversionedBookID; 
@property (readonly) NSString * suggestionsPath; 
@property (readonly) NSString * pathToLoadFrom; 
@property (readonly) NSString * resourcesRootPath; 
@property (readonly) NSString * description; 
@property (readonly) NSDictionary * bookshelfDictionary; 
@property (retain) NSDictionary * remoteBookInfo;                     //@synthesize remoteBookInfo=_remoteBookInfo - In the implementation block
@property (retain) NSString * exactMatchPath; 
@property (retain) NSString * bookID;                                 //@synthesize bookID=_bookID - In the implementation block
@property (readonly) char usesExternalViewer;                         //@synthesize usesExternalViewer=_usesExternalViewer - In the implementation block
@property (assign) unsigned long long stringEncoding;                 //@synthesize stringEncoding=_stringEncoding - In the implementation block
+(char)supportsSecureCoding;
+(char)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)unversionedbookIDFromBookID:(id)arg1 ;
+(id)_fullURLFromBasePath:(id)arg1 toPartialPath:(id)arg2 ;
+(id)_URLFromBundleAtPath:(id)arg1 toPartialPath:(id)arg2 forLocalization:(id)arg3 ;
+(id)_findAccessPageInDirectoryAtPath:(id)arg1 ;
+(unsigned)_determineTypeFromBundle:(id)arg1 ;
+(id)_findIndicesInDirectoryWithURL:(id)arg1 ;
+(id)_xmlDocumentForFileAtPath:(id)arg1 ;
+(id)_parseMetasForXMLDocument:(id)arg1 ;
+(id)_determinePotentialAccessPages:(id)arg1 forDirectory:(id)arg2 ;
+(char)_appleTitleExistsInDoc:(id)arg1 ;
+(id)type4BookWithID:(id)arg1 ;
+(id)type4BookWithID:(id)arg1 params:(id)arg2 ;
+(unsigned long long)_encodingOfXMLDocument:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)type;
-(NSString *)path;
-(NSURL *)iconURL;
-(NSString *)productName;
-(NSString *)appBundleID;
-(id)initWithPath:(id)arg1 ;
-(NSString *)title;
-(NSArray *)indexPaths;
-(void)setIconURL:(NSURL *)arg1 ;
-(unsigned long long)stringEncoding;
-(NSString *)localization;
-(NSURL *)remoteURL;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(NSString *)appPath;
-(void)setIndexPaths:(NSArray *)arg1 ;
-(void)setStringEncoding:(unsigned long long)arg1 ;
-(NSString *)bookID;
-(NSString *)unversionedBookID;
-(NSString *)appBundleVersion;
-(long long)titleCompare:(id)arg1 ;
-(id)_dictionaryForPath:(id)arg1 withLocalization:(id)arg2 ;
-(id)initWithID:(id)arg1 andCacheDictionary:(id)arg2 ;
-(char)_configureType4BookFromDDMConfigDictionary:(id)arg1 ;
-(void)_populateFromKnownGoodDictionary:(id)arg1 ;
-(void)setKbProductString:(NSString *)arg1 ;
-(void)setKbURLString:(NSString *)arg1 ;
-(void)setAccessPagePath:(NSString *)arg1 ;
-(void)setExactMatchPath:(NSString *)arg1 ;
-(void)setSuggestionsPath:(NSString *)arg1 ;
-(void)setTopiclistCSSPath:(NSString *)arg1 ;
-(void)setTopiclistTemplatePath:(NSString *)arg1 ;
-(void)setCsIndexPath:(NSString *)arg1 ;
-(void)setRemoteBookInfo:(NSDictionary *)arg1 ;
-(void)_validateRemoteBookInfo;
-(NSDictionary *)remoteBookInfo;
-(id)_determineExactMatchPlistPath;
-(id)_determineSuggestionsPlistPath;
-(id)_determineDefaultIconURL;
-(id)absolutePathForApplicationWithBundleIdentifier:(id)arg1 ;
-(void)_populateAppIDAndVersionFromAppBundle:(id)arg1 ;
-(NSString *)resourcesRootPath;
-(id)_pathToParentBundle;
-(NSString *)pathToLoadFrom;
-(void)setPathToLoadFrom:(NSString *)arg1 ;
-(id)_determineAccessPagePathForBookType:(unsigned)arg1 ;
-(id)_dictionaryFromAccessPage:(id)arg1 forBookType:(unsigned)arg2 ;
-(id)_dictionaryFromBundle:(id)arg1 withLocalization:(id)arg2 ;
-(char)_setPath:(id)arg1 withLocalization:(id)arg2 ;
-(void)_verifyBundleDictionary:(id)arg1 containsAbsolutePathForKey:(id)arg2 ;
-(char)_verifyString:(id)arg1 existsInDictionary:(id)arg2 ;
-(NSString *)kbURLString;
-(NSString *)kbProductString;
-(NSString *)accessPagePath;
-(NSString *)bookVersion;
-(NSString *)csIndexPath;
-(char)usesExternalViewer;
-(NSString *)exactMatchPath;
-(NSString *)suggestionsPath;
-(NSString *)topiclistCSSPath;
-(NSString *)topiclistTemplatePath;
-(id)bookIDFromAppHelp:(id)arg1 ;
-(char)validateAppPathAndVersion;
-(id)pathToResourceAtRelativePath:(id)arg1 ;
-(char)setPreferredLocalization:(id)arg1 ;
-(char)isEqualToHelpBook:(id)arg1 ;
-(NSDictionary *)bookshelfDictionary;
-(void)setBookID:(NSString *)arg1 ;
@end

