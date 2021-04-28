/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/Versions/A/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol _PASAssetProtocol <NSObject>
@property (nonatomic,readonly) unsigned long long assetVersion; 
@property (nonatomic,readonly) NSString * assetType; 
@property (nonatomic,readonly) unsigned long long compatibilityVersion; 
@property (nonatomic,readonly) unsigned long long bestAssetVersionObserved; 
@required
-(unsigned long long)assetVersion;
-(unsigned long long)compatibilityVersion;
-(NSString *)assetType;
-(unsigned long long)bestAssetVersionObserved;
-(id)registerUpdateHandler:(/*^block*/id)arg1;
-(char)deregisterUpdateHandlerAsyncWithToken:(id)arg1;
-(id)pathForResourceWithName:(id)arg1 extension:(id)arg2;

@end
