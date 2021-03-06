/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WebResourceLoadDelegate.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSMutableDictionary, NSString, NSURL, NSArray, NSError, NSAttributedString, NSDictionary;

@interface MCMessageBody : NSObject <WebResourceLoadDelegate, EFLoggable, NSXMLParserDelegate> {

	NSMutableDictionary* _attachmentsByURL;
	char _isPlainText;
	char _isEncrypted;
	char _hasEncryptedDescendantPart;
	NSString* _html;
	unsigned long long _originalEncoding;
	NSString* _mimeType;
	NSURL* _baseURL;
	NSArray* _signers;
	NSError* _smimeError;

}

@property (nonatomic,copy) NSString * html;                                             //@synthesize html=_html - In the implementation block
@property (assign,nonatomic) unsigned long long originalEncoding;                       //@synthesize originalEncoding=_originalEncoding - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * attributedString; 
@property (nonatomic,copy) NSString * mimeType;                                         //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                           //@synthesize baseURL=_baseURL - In the implementation block
@property (copy) NSDictionary * attachmentsByURL; 
@property (assign,nonatomic) char isPlainText;                                          //@synthesize isPlainText=_isPlainText - In the implementation block
@property (nonatomic,copy) NSArray * signers;                                           //@synthesize signers=_signers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * signerLabels; 
@property (assign,nonatomic) char isEncrypted;                                          //@synthesize isEncrypted=_isEncrypted - In the implementation block
@property (assign,nonatomic) char hasEncryptedDescendantPart;                           //@synthesize hasEncryptedDescendantPart=_hasEncryptedDescendantPart - In the implementation block
@property (nonatomic,retain) NSError * smimeError;                                      //@synthesize smimeError=_smimeError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(void)setPlainTextWebPreferences:(id)arg1 ;
+(void)setRichTextWebPreferences:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)init;
-(NSURL *)baseURL;
-(NSAttributedString *)attributedString;
-(id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSString *)html;
-(void)setHtml:(NSString *)arg1 ;
-(char)isEncrypted;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(void)setIsEncrypted:(char)arg1 ;
-(NSArray *)signers;
-(char)hasEncryptedDescendantPart;
-(NSError *)smimeError;
-(NSDictionary *)attachmentsByURL;
-(unsigned long long)originalEncoding;
-(char)isPlainText;
-(id)initWithWebArchive:(id)arg1 archiveIsMailInternal:(char)arg2 ;
-(void)setSigners:(NSArray *)arg1 ;
-(void)setHasEncryptedDescendantPart:(char)arg1 ;
-(void)setSmimeError:(NSError *)arg1 ;
-(void)setOriginalEncoding:(unsigned long long)arg1 ;
-(void)_mcMessageBodyCommonInit;
-(id)attributedStringBlockingRemoteContent:(char)arg1 attachmentAccessLevel:(long long)arg2 ;
-(void)_addWebArchiveDataToArray:(id)arg1 ;
-(id)initWithWebArchive:(id)arg1 ;
-(void)setAttachmentsByURL:(NSDictionary *)arg1 ;
-(void)addAttachment:(id)arg1 forURL:(id)arg2 ;
-(void)setBaseURLFromHtml;
-(NSArray *)signerLabels;
-(void)setIsPlainText:(char)arg1 ;
@end

