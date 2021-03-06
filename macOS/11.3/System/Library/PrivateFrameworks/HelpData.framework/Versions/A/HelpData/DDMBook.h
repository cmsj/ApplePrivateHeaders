/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HelpData.framework/Versions/A/HelpData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HelpData/DDMObject.h>

@class NSString, DDMInfo, DDMMeta, DDMMisc, NSArray, HPDHelpBook;

@interface DDMBook : DDMObject {

	NSString* _bookID;
	NSString* _tocID;
	NSString* _product;
	NSString* _version;
	NSString* _locale;
	NSString* _title;
	NSString* _copyright;
	DDMInfo* _info;
	DDMMeta* _meta;
	DDMMisc* _miscAttributes;
	NSArray* _tocItems;
	HPDHelpBook* _cachedHelpBook;

}

@property (retain) HPDHelpBook * cachedHelpBook;               //@synthesize cachedHelpBook=_cachedHelpBook - In the implementation block
@property (readonly) NSString * bookID;                        //@synthesize bookID=_bookID - In the implementation block
@property (readonly) NSString * tocID;                         //@synthesize tocID=_tocID - In the implementation block
@property (readonly) NSString * product;                       //@synthesize product=_product - In the implementation block
@property (readonly) NSString * version;                       //@synthesize version=_version - In the implementation block
@property (readonly) NSString * locale;                        //@synthesize locale=_locale - In the implementation block
@property (readonly) NSString * language; 
@property (readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (readonly) NSString * copyright;                     //@synthesize copyright=_copyright - In the implementation block
@property (readonly) DDMInfo * info;                           //@synthesize info=_info - In the implementation block
@property (readonly) DDMMeta * meta;                           //@synthesize meta=_meta - In the implementation block
@property (readonly) DDMMisc * miscAttributes;                 //@synthesize miscAttributes=_miscAttributes - In the implementation block
@property (readonly) char isSingleTopicBook; 
@property (readonly) NSString * appBundleVersion; 
@property (readonly) NSString * helpbookID; 
@property (readonly) NSArray * tocItems;                       //@synthesize tocItems=_tocItems - In the implementation block
+(id)ddmObjectIdentifierWithBookID:(id)arg1 ;
-(id)description;
-(NSString *)locale;
-(NSString *)version;
-(DDMInfo *)info;
-(NSString *)language;
-(NSString *)title;
-(id)helpBook;
-(NSString *)copyright;
-(NSString *)product;
-(DDMMeta *)meta;
-(id)ddmObjectIdentifier;
-(NSString *)bookID;
-(NSString *)appBundleVersion;
-(NSArray *)tocItems;
-(NSString *)tocID;
-(DDMMisc *)miscAttributes;
-(HPDHelpBook *)cachedHelpBook;
-(void)setCachedHelpBook:(HPDHelpBook *)arg1 ;
-(NSString *)helpbookID;
-(id)tocItemWithID:(id)arg1 ;
-(id)defaultTOCItem;
-(char)isSingleTopicBook;
@end

