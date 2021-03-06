/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/Versions/A/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AMSUIWebAction.h>
#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class NSURL, NSString;

@interface AMSUIWebOpenURLAction : AMSUIWebAction <AMSUIWebActionRunnable> {

	NSURL* _URL;
	long long _type;

}

@property (assign) long long type;                                  //@synthesize type=_type - In the implementation block
@property (retain) NSURL * URL;                                     //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_openUniversalLink:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
@end

