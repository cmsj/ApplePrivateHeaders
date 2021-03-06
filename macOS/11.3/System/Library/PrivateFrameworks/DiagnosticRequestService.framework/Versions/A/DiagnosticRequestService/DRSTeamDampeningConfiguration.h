/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/Versions/A/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DRSDampeningConfiguration, NSDictionary;

@interface DRSTeamDampeningConfiguration : NSObject {

	DRSDampeningConfiguration* _defaultConfiguration;
	NSDictionary* _issueCategoryToConfigurationDict;

}

@property (nonatomic,retain) DRSDampeningConfiguration * defaultConfiguration;              //@synthesize defaultConfiguration=_defaultConfiguration - In the implementation block
@property (nonatomic,retain) NSDictionary * issueCategoryToConfigurationDict;               //@synthesize issueCategoryToConfigurationDict=_issueCategoryToConfigurationDict - In the implementation block
-(char)isEqual:(id)arg1 ;
-(id)debugDescription;
-(DRSDampeningConfiguration *)defaultConfiguration;
-(void)setDefaultConfiguration:(DRSDampeningConfiguration *)arg1 ;
-(id)jsonCompatibleDictRepresentation;
-(NSDictionary *)issueCategoryToConfigurationDict;
-(id)initWithDefaultConfiguration:(id)arg1 issueCategoryToConfigurationDict:(id)arg2 ;
-(id)configurationForIssueCategory:(id)arg1 ;
-(id)_initWithTeamDampeningConfigMO_ON_MOC_QUEUE:(id)arg1 ;
-(id)_ON_MOC_QUEUE_moRepresentationInContext:(id)arg1 teamID:(id)arg2 ;
-(void)setIssueCategoryToConfigurationDict:(NSDictionary *)arg1 ;
@end

