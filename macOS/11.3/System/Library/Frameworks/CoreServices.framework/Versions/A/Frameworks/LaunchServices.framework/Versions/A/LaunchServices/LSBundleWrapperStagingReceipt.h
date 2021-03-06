/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSDictionary;

@interface LSBundleWrapperStagingReceipt : NSObject {

	NSURL* _wrappedBundleURL;
	NSDictionary* _wrappedBundleInfo;

}

@property (readonly) NSURL * wrappedBundleURL;                      //@synthesize wrappedBundleURL=_wrappedBundleURL - In the implementation block
@property (readonly) NSDictionary * wrappedBundleInfo;              //@synthesize wrappedBundleInfo=_wrappedBundleInfo - In the implementation block
-(id)initWithWrappedBundleURL:(id)arg1 wrappedBundleInfo:(id)arg2 ;
-(NSURL *)wrappedBundleURL;
-(NSDictionary *)wrappedBundleInfo;
@end

