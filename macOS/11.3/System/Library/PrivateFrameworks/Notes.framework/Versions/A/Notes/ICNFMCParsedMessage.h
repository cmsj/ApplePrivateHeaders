/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSString, NSURL, NSDictionary, NSArray, NSAttributedString;

@interface ICNFMCParsedMessage : NSObject <NSXMLParserDelegate> {

	char _isPlainText;
	NSString* _html;
	NSString* _mimeType;
	NSURL* _baseURL;
	NSDictionary* _attachmentsByURL;
	NSArray* _stationeryBackgroundImageURLs;

}

@property (nonatomic,copy) NSString * html;                                             //@synthesize html=_html - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * attributedString; 
@property (nonatomic,copy) NSString * mimeType;                                         //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                           //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSDictionary * attachmentsByURL;                             //@synthesize attachmentsByURL=_attachmentsByURL - In the implementation block
@property (nonatomic,copy) NSArray * stationeryBackgroundImageURLs;                     //@synthesize stationeryBackgroundImageURLs=_stationeryBackgroundImageURLs - In the implementation block
@property (assign,nonatomic) char isPlainText;                                          //@synthesize isPlainText=_isPlainText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedMessageWithWebArchive:(id)arg1 archiveIsMailInternal:(char)arg2 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)init;
-(NSURL *)baseURL;
-(NSAttributedString *)attributedString;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSString *)html;
-(void)setHtml:(NSString *)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(NSDictionary *)attachmentsByURL;
-(char)isPlainText;
-(id)initWithWebArchive:(id)arg1 archiveIsMailInternal:(char)arg2 ;
-(void)_addWebArchiveDataToArray:(id)arg1 ;
-(id)initWithWebArchive:(id)arg1 ;
-(void)setAttachmentsByURL:(NSDictionary *)arg1 ;
-(void)addAttachment:(id)arg1 forURL:(id)arg2 ;
-(void)setBaseURLFromHtml;
-(void)setIsPlainText:(char)arg1 ;
-(NSArray *)stationeryBackgroundImageURLs;
-(void)setStationeryBackgroundImageURLs:(NSArray *)arg1 ;
@end

