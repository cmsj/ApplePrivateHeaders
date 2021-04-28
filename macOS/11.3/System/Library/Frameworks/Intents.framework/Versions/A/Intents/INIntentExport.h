/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PBCodable, NSString;


@protocol INIntentExport <NSObject,JSExport>
@property (nonatomic,copy) PBCodable * backingStore; 
@property (nonatomic,readonly) NSString * utteranceString; 
@property (nonatomic,readonly) NSString * launchId; 
@property (copy) NSString * identifier; 
@property (nonatomic,readonly) NSString * intentId; 
@property (nonatomic,readonly) NSString * typeName; 
@required
+(NSString *)typeName;
+(id)intentDescription;
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(PBCodable *)backingStore;
-(void)setBackingStore:(id)arg1;
-(NSString *)typeName;
-(NSString *)launchId;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
-(NSString *)intentId;
-(void)trimDataAgainstTCCForAuditToken:(SCD_Struct_IN2)arg1 bundle:(id)arg2;
-(NSString *)utteranceString;

@end
