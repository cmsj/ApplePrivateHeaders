/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/Versions/A/AppSSOCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSSOCore/AppSSOCore-Structs.h>
#import <AppSSOCore/SOProfile.h>

@class NSString, NSDictionary;

@interface SOFullProfile : SOProfile {

	NSString* _extensionTeamIdentifier;
	NSDictionary* _extensionData;

}

@property (nonatomic,retain) NSString * extensionTeamIdentifier;              //@synthesize extensionTeamIdentifier=_extensionTeamIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * extensionData;                    //@synthesize extensionData=_extensionData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setExtensionData:(NSDictionary *)arg1 ;
-(void)setExtensionTeamIdentifier:(NSString *)arg1 ;
-(NSDictionary *)extensionData;
-(NSString *)extensionTeamIdentifier;
-(id)initWithProfileData:(id)arg1 ;
-(void)removeURLPrefix:(id)arg1 ;
-(id)copyProfile;
-(id)copyProfileForClient;
@end

