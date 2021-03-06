/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/Versions/A/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface FTServerBag : NSObject {

	long long _type;

}

@property (readonly) NSURL * bagURL; 
@property (readonly) NSString * apsEnvironmentName; 
@property (readonly) char allowSelfSignedCertificates; 
@property (readonly) char allowUnsignedBags; 
@property (readonly) char isLoaded; 
@property (readonly) char isLoading; 
@property (readonly) char isInDebilitatedMode; 
@property (readonly) char isServerAvailable; 
+(id)sharedInstance;
+(id)sharedInstanceForBagType:(long long)arg1 ;
+(id)_sharedInstance;
+(id)_sharedInstanceForType:(long long)arg1 ;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(char)isLoaded;
-(void)startBagLoad;
-(NSString *)apsEnvironmentName;
-(id)_bag;
-(id)_cachedBag;
-(char)isInDebilitatedMode;
-(char)isServerAvailable;
-(char)isLoading;
-(void)forceBagLoad;
-(id)urlWithKey:(id)arg1 ;
-(NSURL *)bagURL;
-(char)allowSelfSignedCertificates;
-(char)allowUnsignedBags;
-(id)initWithBagType:(long long)arg1 ;
@end

