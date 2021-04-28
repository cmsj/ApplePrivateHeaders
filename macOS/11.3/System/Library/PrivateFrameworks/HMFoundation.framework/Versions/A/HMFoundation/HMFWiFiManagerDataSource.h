/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/Versions/A/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFWiFiManagerDataSource.h>
@class NSString;


@protocol HMFWiFiManagerDataSource <NSObject>
@property (assign,nonatomic,__weak) id<HMFWiFiManagerDataSourceDelegate> delegate; 
@property (getter=isAssertionActive,readonly) char assertionActive; 
@property (readonly) unsigned long long assertionOptions; 
@property (assign,setter=setWoWAsserted:,getter=isWoWAsserted,nonatomic) char wowAsserted; 
@property (nonatomic,copy,readonly) NSString * currentNetworkSSID; 
@required
+(id)MACAddressString;
-(id<HMFWiFiManagerDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)deactivate;
-(void)activateWithOptions:(unsigned long long)arg1;
-(char)isAssertionActive;
-(unsigned long long)assertionOptions;
-(void)setWoWAsserted:(char)arg1;
-(void)performBlockAfterWoWReassertionDelay:(/*^block*/id)arg1;
-(NSString *)currentNetworkSSID;
-(char)isWoWAsserted;

@end


@class NSString;

@interface HMFWiFiManagerDataSource : HMFObject <HMFWiFiManagerDataSource>

@property (assign,nonatomic,__weak) id<HMFWiFiManagerDataSourceDelegate> delegate; 
@property (getter=isAssertionActive,readonly) char assertionActive; 
@property (readonly) unsigned long long assertionOptions; 
@property (assign,setter=setWoWAsserted:,getter=isWoWAsserted,nonatomic) char wowAsserted; 
@property (nonatomic,copy,readonly) NSString * currentNetworkSSID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)MACAddressString;
-(id<HMFWiFiManagerDataSourceDelegate>)delegate;
-(void)setDelegate:(id<HMFWiFiManagerDataSourceDelegate>)arg1 ;
-(void)deactivate;
-(void)activateWithOptions:(unsigned long long)arg1 ;
-(id)initWithWorkQueue:(id)arg1 ;
-(char)isAssertionActive;
-(void)setWoWAsserted:(char)arg1 ;
-(void)performBlockAfterWoWReassertionDelay:(/*^block*/id)arg1 ;
-(NSString *)currentNetworkSSID;
-(char)isWoWAsserted;
@end
