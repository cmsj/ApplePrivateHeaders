/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/_IDSPasswordManager.h>

@protocol _IDSPasswordManager <NSObject>
@required
-(void)setPassword:(id)arg1 forUsername:(id)arg2 onService:(id)arg3 completionBlock:(/*^block*/id)arg4;

@end


@class NSString;

@interface _IDSPasswordManager : NSObject <_IDSPasswordManager>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPassword:(id)arg1 forUsername:(id)arg2 onService:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
@end

