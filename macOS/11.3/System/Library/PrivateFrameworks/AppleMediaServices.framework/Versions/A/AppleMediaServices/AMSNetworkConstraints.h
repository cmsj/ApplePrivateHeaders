/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSBagConsumer_Project.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSMutableDictionary, NSString;

@interface AMSNetworkConstraints : NSObject <AMSBagConsumer_Project, AMSBagConsumer> {

	NSMutableDictionary* _sizeLimits;

}

@property (retain) NSMutableDictionary * sizeLimits;                                         //@synthesize sizeLimits=_sizeLimits - In the implementation block
@property (getter=isAnyNetworkTypeEnabled,readonly) char anyNetworkTypeEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
+(id)_networkConstraintsForMediaType:(id)arg1 withArray:(id)arg2 ;
+(id)networkConstraintsForMediaType:(id)arg1 withBag:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)_setSizeLimit:(long long)arg1 forNetworkType:(id)arg2 ;
-(NSMutableDictionary *)sizeLimits;
-(long long)_sizeLimitForNetworkType:(id)arg1 ;
-(char)isEqualToConstraints:(id)arg1 ;
-(void)_disableAllNetworkTypes;
-(id)_initWithStoreConstraintDictionary:(id)arg1 ;
-(char)isAnyNetworkTypeEnabled;
-(char)hasSizeLimitForNetworkType:(id)arg1 ;
-(long long)sizeLimitForNetworkType:(id)arg1 ;
-(void)setSizeLimits:(NSMutableDictionary *)arg1 ;
@end
