/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OCDSummary : NSObject {

	NSString* mTitle;
	NSString* mAuthor;
	NSString* mKeywords;
	NSString* mComments;
	NSString* mHyperlinkBase;
	NSString* _subject;
	NSString* _company;

}

@property (retain) NSString * subject;              //@synthesize subject=_subject - In the implementation block
@property (retain) NSString * company;              //@synthesize company=_company - In the implementation block
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)keywords;
-(void)setKeywords:(id)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(id)author;
-(id)comments;
-(void)setComments:(id)arg1 ;
-(void)setAuthor:(id)arg1 ;
-(NSString *)company;
-(void)setCompany:(NSString *)arg1 ;
-(id)hyperlinkBase;
-(void)setHyperlinkBase:(id)arg1 ;
@end
