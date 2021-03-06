/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Versions/A/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TRINamespaceUpdateProtocol.h>

@protocol TRINotificationToken;
@class NSString;

@interface TRINamespaceUpdateNotification : NSObject <TRINamespaceUpdateProtocol> {

	NSString* _namespaceName;
	id<TRINotificationToken> _token;

}

@property (nonatomic,readonly) unsigned namespaceId; 
@property (nonatomic,readonly) NSString * namespaceName;                    //@synthesize namespaceName=_namespaceName - In the implementation block
@property (nonatomic,readonly) id<TRINotificationToken> token;              //@synthesize token=_token - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)deregisterUpdateWithToken:(id)arg1 ;
+(id)notificationNameForNamespaceName:(id)arg1 ;
+(id)registerUpdateForNamespaceName:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(char)notifyUpdateForNamespaceName:(id)arg1 ;
-(id<TRINotificationToken>)token;
-(NSString *)namespaceName;
-(unsigned)namespaceId;
-(id)initWithNamespaceName:(id)arg1 token:(id)arg2 ;
@end

