/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSiriExternalRequest.h>

@class AFSiriIncomingCall;

@interface AFSiriAnnounceIncomingCallRequest : NSObject <AFSiriExternalRequest> {

	AFSiriIncomingCall* _call;

}
-(void)performRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithIncomingCall:(id)arg1 ;
@end
