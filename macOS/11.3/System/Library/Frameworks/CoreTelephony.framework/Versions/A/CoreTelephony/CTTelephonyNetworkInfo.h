/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Versions/A/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CTTelephonyNetworkInfoDelegate;
@class NSString, NSDictionary, CTCarrier;

@interface CTTelephonyNetworkInfo : NSObject {

	id<CTTelephonyNetworkInfoDelegate> _delegate;
	/*^block*/id _serviceSubscriberCellularProvidersDidUpdateNotifier;
	/*^block*/id _subscriberCellularProviderDidUpdateNotifier;
	NSString* _currentRadioAccessTechnology;

}

@property (copy,readonly) NSString * dataServiceIdentifier; 
@property (__weak) id<CTTelephonyNetworkInfoDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (retain,readonly) NSDictionary * serviceSubscriberCellularProviders; 
@property (retain,readonly) CTCarrier * subscriberCellularProvider; 
@property (nonatomic,copy) id serviceSubscriberCellularProvidersDidUpdateNotifier;                     //@synthesize serviceSubscriberCellularProvidersDidUpdateNotifier=_serviceSubscriberCellularProvidersDidUpdateNotifier - In the implementation block
@property (nonatomic,copy) id subscriberCellularProviderDidUpdateNotifier;                             //@synthesize subscriberCellularProviderDidUpdateNotifier=_subscriberCellularProviderDidUpdateNotifier - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * serviceCurrentRadioAccessTechnology; 
@property (nonatomic,retain,readonly) NSString * currentRadioAccessTechnology;                         //@synthesize currentRadioAccessTechnology=_currentRadioAccessTechnology - In the implementation block
-(id)init;
-(id<CTTelephonyNetworkInfoDelegate>)delegate;
-(void)setDelegate:(id<CTTelephonyNetworkInfoDelegate>)arg1 ;
-(id)radioAccessTechnology;
-(NSString *)currentRadioAccessTechnology;
-(NSString *)dataServiceIdentifier;
-(NSDictionary *)serviceSubscriberCellularProviders;
-(CTCarrier *)subscriberCellularProvider;
-(NSDictionary *)serviceCurrentRadioAccessTechnology;
-(id)serviceSignalStrength;
-(id)serviceCellId;
-(id)serviceSubscriberCellularProvidersDidUpdateNotifier;
-(void)setServiceSubscriberCellularProvidersDidUpdateNotifier:(id)arg1 ;
-(id)subscriberCellularProviderDidUpdateNotifier;
-(void)setSubscriberCellularProviderDidUpdateNotifier:(id)arg1 ;
@end

