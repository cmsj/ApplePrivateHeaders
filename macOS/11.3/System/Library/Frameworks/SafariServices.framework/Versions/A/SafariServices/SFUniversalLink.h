/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SafariServices.framework/Versions/A/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LSAppLink, NSURL;

@interface SFUniversalLink : NSObject {

	LSAppLink* _appLink;
	NSURL* _webpageURL;

}

@property (readonly) NSURL * webpageURL;                  //@synthesize webpageURL=_webpageURL - In the implementation block
@property (readonly) NSURL * applicationURL; 
@property (getter=isEnabled) char enabled; 
+(id)new;
-(id)init;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(NSURL *)webpageURL;
-(NSURL *)applicationURL;
-(id)initWithWebpageURL:(id)arg1 ;
@end

