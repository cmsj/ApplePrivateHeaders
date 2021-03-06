/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_LTLoggingRequest.h>

@class NSString, NSURL, _LTLocalePair;

@interface _LTTranslationFeedback : NSObject <_LTLoggingRequest> {

	NSString* _sourceContentAsJSON;
	NSString* _targetContentAsJSON;
	NSString* _errorsAsJSON;
	NSString* _safariVersion;
	NSURL* _webpageURL;
	_LTLocalePair* _localePair;
	NSString* _sessionID;
	NSString* _clientBundleID;

}

@property (nonatomic,copy) NSString * sessionID;                        //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy) NSString * clientBundleID;                   //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (nonatomic,copy) NSString * sourceContentAsJSON;              //@synthesize sourceContentAsJSON=_sourceContentAsJSON - In the implementation block
@property (nonatomic,copy) NSString * targetContentAsJSON;              //@synthesize targetContentAsJSON=_targetContentAsJSON - In the implementation block
@property (nonatomic,copy) NSString * errorsAsJSON;                     //@synthesize errorsAsJSON=_errorsAsJSON - In the implementation block
@property (nonatomic,copy) NSString * safariVersion;                    //@synthesize safariVersion=_safariVersion - In the implementation block
@property (nonatomic,copy) NSURL * webpageURL;                          //@synthesize webpageURL=_webpageURL - In the implementation block
@property (nonatomic,copy) _LTLocalePair * localePair;                  //@synthesize localePair=_localePair - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(NSURL *)webpageURL;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)clientBundleID;
-(void)setClientBundleID:(NSString *)arg1 ;
-(_LTLocalePair *)localePair;
-(void)setLocalePair:(_LTLocalePair *)arg1 ;
-(NSString *)sourceContentAsJSON;
-(void)setSourceContentAsJSON:(NSString *)arg1 ;
-(NSString *)targetContentAsJSON;
-(void)setTargetContentAsJSON:(NSString *)arg1 ;
-(NSString *)errorsAsJSON;
-(void)setErrorsAsJSON:(NSString *)arg1 ;
-(NSString *)safariVersion;
-(void)setSafariVersion:(NSString *)arg1 ;
@end

