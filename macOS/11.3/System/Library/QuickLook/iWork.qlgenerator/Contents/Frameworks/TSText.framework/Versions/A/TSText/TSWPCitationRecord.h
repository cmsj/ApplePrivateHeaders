/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSPersistence/TSPObject.h>

@class NSString;

@interface TSWPCitationRecord : TSPObject {

	NSString* _endNoteXML;
	char _hideAuthorNames;
	char _hideYear;
	NSString* _pageRange;
	NSString* _prefix;
	NSString* _suffix;
	NSString* _authorsString;
	NSString* _title;
	NSString* _year;
	NSString* _type;
	char _shouldRemove;
	char _recordXMLApplied;

}

@property (assign,nonatomic) char recordXMLApplied;               //@synthesize recordXMLApplied=_recordXMLApplied - In the implementation block
@property (nonatomic,copy) NSString * endNoteXML; 
@property (assign,nonatomic) char hideAuthorNames; 
@property (assign,nonatomic) char hideYear; 
@property (nonatomic,copy) NSString * pageRange; 
@property (nonatomic,copy) NSString * prefix; 
@property (nonatomic,copy) NSString * suffix; 
@property (nonatomic,copy) NSString * authorsString; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * year; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) char shouldRemove;                   //@synthesize shouldRemove=_shouldRemove - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setYear:(NSString *)arg1 ;
-(NSString *)year;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)prefix;
-(NSString *)title;
-(NSString *)pageRange;
-(void)setPrefix:(NSString *)arg1 ;
-(NSString *)cacheKey;
-(NSString *)suffix;
-(void)setSuffix:(NSString *)arg1 ;
-(void)setPageRange:(NSString *)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)p_copyPropertiesToObject:(id)arg1 ;
-(NSString *)endNoteXML;
-(char)hideAuthorNames;
-(char)hideYear;
-(NSString *)authorsString;
-(id)p_endNoteXMLForComparison;
-(id)authorYearString;
-(void)setEndNoteXML:(NSString *)arg1 ;
-(void)setHideAuthorNames:(char)arg1 ;
-(void)setHideYear:(char)arg1 ;
-(void)setAuthorsString:(NSString *)arg1 ;
-(char)shouldRemove;
-(void)setShouldRemove:(char)arg1 ;
-(char)recordXMLApplied;
-(void)setRecordXMLApplied:(char)arg1 ;
-(char)isRecordEqual:(id)arg1 ;
@end
