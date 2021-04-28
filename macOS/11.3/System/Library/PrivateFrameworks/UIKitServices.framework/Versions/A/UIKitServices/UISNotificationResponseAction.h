/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/Versions/A/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class UNNotificationResponse;

@interface UISNotificationResponseAction : BSAction {

	UNNotificationResponse* _response;

}

@property (nonatomic,retain,readonly) UNNotificationResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) char isLocal; 
@property (nonatomic,readonly) char isRemote; 
@property (nonatomic,readonly) char isDefaultAction; 
-(char)isKindOfClass:(Class)arg1 ;
-(UNNotificationResponse *)response;
-(char)isRemote;
-(id)_trigger;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(char)isLocal;
-(id)initWithResponse:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(long long)UIActionType;
-(char)isDefaultAction;
@end
