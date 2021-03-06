/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Versions/A/Frameworks/RemoteManagementProtocol.framework/Versions/A/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolOrganizationDetails_Proof;

@interface RMProtocolOrganizationDetails : RMModelPayloadBase {

	NSString* _detailsName;
	NSString* _detailsEmail;
	NSString* _detailsURL;
	RMProtocolOrganizationDetails_Proof* _detailsProof;

}

@property (nonatomic,copy) NSString * detailsName;                                          //@synthesize detailsName=_detailsName - In the implementation block
@property (nonatomic,copy) NSString * detailsEmail;                                         //@synthesize detailsEmail=_detailsEmail - In the implementation block
@property (nonatomic,copy) NSString * detailsURL;                                           //@synthesize detailsURL=_detailsURL - In the implementation block
@property (nonatomic,copy) RMProtocolOrganizationDetails_Proof * detailsProof;              //@synthesize detailsProof=_detailsProof - In the implementation block
+(id)requestWithName:(id)arg1 email:(id)arg2 URL:(id)arg3 proof:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(char)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setDetailsName:(NSString *)arg1 ;
-(void)setDetailsEmail:(NSString *)arg1 ;
-(void)setDetailsURL:(NSString *)arg1 ;
-(void)setDetailsProof:(RMProtocolOrganizationDetails_Proof *)arg1 ;
-(NSString *)detailsName;
-(NSString *)detailsEmail;
-(NSString *)detailsURL;
-(RMProtocolOrganizationDetails_Proof *)detailsProof;
@end

