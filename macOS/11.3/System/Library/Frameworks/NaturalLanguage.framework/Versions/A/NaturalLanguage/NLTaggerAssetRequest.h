/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/Versions/A/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NLTaggerAssetRequest : NSObject {

	NSString* _language;
	NSString* _tagScheme;
	/*^block*/id _completionHandler;

}
+(void)checkAssetRequests;
-(void)waitForFulfillment;
-(void)completeWithResult:(long long)arg1 error:(id)arg2 ;
-(id)initWithLanguage:(id)arg1 tagScheme:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)isFulfilled;
@end

