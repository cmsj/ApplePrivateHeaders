/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SSCredentials : NSObject {

	NSString* _authenticationType;

}

@property (assign) NSString * authenticationType;              //@synthesize authenticationType=_authenticationType - In the implementation block
+(id)noAuthenticationNeededCredentials;
-(id)description;
-(void)setAuthenticationType:(NSString *)arg1 ;
-(NSString *)authenticationType;
-(id)initWithAuthenticationType:(id)arg1 ;
@end
