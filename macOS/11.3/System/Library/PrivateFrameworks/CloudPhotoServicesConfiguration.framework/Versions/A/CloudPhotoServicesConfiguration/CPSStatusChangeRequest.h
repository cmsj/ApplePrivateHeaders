/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoServicesConfiguration.framework/Versions/A/CloudPhotoServicesConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSMutableDictionary, NSError;

@interface CPSStatusChangeRequest : NSObject {

	NSDictionary* _requestOptions;
	NSString* _identifier;
	NSMutableDictionary* _stateChangeMap;
	long long _stateChangeRequestStatus;
	NSError* _stateChangeError;
	NSMutableDictionary* _preferenceChangeMap;
	long long _preferenceChangeRequestStatus;
	NSError* _preferenceChangeError;

}

@property (retain) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSMutableDictionary * stateChangeMap;                   //@synthesize stateChangeMap=_stateChangeMap - In the implementation block
@property (assign) long long stateChangeRequestStatus;                     //@synthesize stateChangeRequestStatus=_stateChangeRequestStatus - In the implementation block
@property (retain) NSError * stateChangeError;                             //@synthesize stateChangeError=_stateChangeError - In the implementation block
@property (retain) NSMutableDictionary * preferenceChangeMap;              //@synthesize preferenceChangeMap=_preferenceChangeMap - In the implementation block
@property (assign) long long preferenceChangeRequestStatus;                //@synthesize preferenceChangeRequestStatus=_preferenceChangeRequestStatus - In the implementation block
@property (retain) NSError * preferenceChangeError;                        //@synthesize preferenceChangeError=_preferenceChangeError - In the implementation block
@property (retain) NSDictionary * requestOptions;                          //@synthesize requestOptions=_requestOptions - In the implementation block
-(id)description;
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)allErrors;
-(void)setRequestOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)requestOptions;
-(void)setPreferencesValue:(id)arg1 forKey:(id)arg2 serviceIdentifier:(id)arg3 ;
-(long long)targetStateForServiceIdentifier:(id)arg1 ;
-(NSMutableDictionary *)stateChangeMap;
-(long long)stateChangeRequestStatus;
-(NSError *)stateChangeError;
-(NSMutableDictionary *)preferenceChangeMap;
-(long long)preferenceChangeRequestStatus;
-(NSError *)preferenceChangeError;
-(void)setTargetState:(long long)arg1 forServiceIdentifier:(id)arg2 ;
-(char)hasServiceStateChanges;
-(char)hasServicePreferenceChanges;
-(void)setStateChangeMap:(NSMutableDictionary *)arg1 ;
-(void)setStateChangeRequestStatus:(long long)arg1 ;
-(void)setStateChangeError:(NSError *)arg1 ;
-(void)setPreferenceChangeMap:(NSMutableDictionary *)arg1 ;
-(void)setPreferenceChangeRequestStatus:(long long)arg1 ;
-(void)setPreferenceChangeError:(NSError *)arg1 ;
@end
