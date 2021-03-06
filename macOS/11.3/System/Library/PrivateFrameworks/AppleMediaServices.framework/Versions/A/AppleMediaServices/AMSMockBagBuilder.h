/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString, AMSMutableBagKeySet, NSMutableDictionary;

@interface AMSMockBagBuilder : NSObject {

	NSDate* _expirationDate;
	NSString* _profile;
	NSString* _profileVersion;
	AMSMutableBagKeySet* _bagKeySet;
	NSMutableDictionary* _data;

}

@property (retain) AMSMutableBagKeySet * bagKeySet;              //@synthesize bagKeySet=_bagKeySet - In the implementation block
@property (retain) NSMutableDictionary * data;                   //@synthesize data=_data - In the implementation block
@property (retain) NSDate * expirationDate;                      //@synthesize expirationDate=_expirationDate - In the implementation block
@property (retain) NSString * profile;                           //@synthesize profile=_profile - In the implementation block
@property (retain) NSString * profileVersion;                    //@synthesize profileVersion=_profileVersion - In the implementation block
-(id)init;
-(NSMutableDictionary *)data;
-(id)initWithData:(id)arg1 ;
-(void)setData:(NSMutableDictionary *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setProfile:(NSString *)arg1 ;
-(NSString *)profile;
-(NSString *)profileVersion;
-(AMSMutableBagKeySet *)bagKeySet;
-(void)setProfileVersion:(NSString *)arg1 ;
-(void)setBagKeySet:(AMSMutableBagKeySet *)arg1 ;
-(void)unionBagKeySet:(id)arg1 ;
-(void)addBagKey:(id)arg1 value:(id)arg2 valueType:(unsigned long long)arg3 ;
-(id)createMockBag;
@end

