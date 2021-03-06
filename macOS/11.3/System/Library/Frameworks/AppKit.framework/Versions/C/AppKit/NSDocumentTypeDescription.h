/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface NSDocumentTypeDescription : NSObject {

	NSString* _className;
	int _role;
	NSString* _oldStyleName;
	NSString* _oldStyleAlias;
	id _identifierOrIdentifiers;
	NSArray* _exportableTypeIdentifiersOrOldStyleNames;
	NSArray* _fileNameExtensionsAndHFSFileTypes;
	NSString* _persistentStoreType;
	NSString* _userActivityType;

}
+(id)aliasesByName;
+(char)parsesLSItemContentTypes;
+(id)descriptionsWithDeclarations:(id)arg1 ;
+(id)namesByAlias;
+(char)_validateDeclarationString:(id)arg1 forKey:(id)arg2 ;
+(char)_validateDeclarationStrings:(id)arg1 forKey:(id)arg2 ;
+(void)_addUniqueNameOrNames:(id)arg1 toNames:(id)arg2 ;
+(id)_noneOrQuotingOfText:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)className;
-(char)isEditableByThisApp;
-(char)isViewableByThisApp;
-(id)firstName;
-(id)appSpecificPresentableNameForName:(id)arg1 ;
-(void)getReadableNotWritable:(char)arg1 names:(id)arg2 ;
-(char)isNativeName:(id)arg1 ;
-(char)isIdentifiedByUTIs;
-(char)isIdentifiedByName:(id)arg1 ;
-(id)fileNameExtensionsAndHFSFileTypes;
-(char)exactlyMatchesFileNameExtensionOrHFSFileType:(id)arg1 ;
-(char)matchesAnyFile;
-(id)persistentStoreType;
-(id)_initWithDeclaration:(id)arg1 cachedNamesByAlias:(id)arg2 ;
-(id)userActivityType;
@end

