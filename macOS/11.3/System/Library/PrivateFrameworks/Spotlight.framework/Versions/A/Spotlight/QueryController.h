/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Versions/A/Spotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PRSSessionController.h>
#import <libobjc.A.dylib/PARResultFactory.h>

@class NSString, NSArray, NSDictionary;

@interface QueryController : NSObject <PRSSessionController, PARResultFactory> {

	NSString* _userId;
	double _gSessionStartTime;
	NSDictionary* _cep_server_values;

}

@property (assign) double gSessionStartTime;                                        //@synthesize gSessionStartTime=_gSessionStartTime - In the implementation block
@property (retain) NSDictionary * cep_server_values;                                //@synthesize cep_server_values=_cep_server_values - In the implementation block
@property (nonatomic,readonly) double sessionStartTime; 
@property (getter=isEnabled,nonatomic,readonly) char enabled; 
@property (nonatomic,readonly) NSString * applicationNameForUserAgent; 
@property (nonatomic,readonly) NSArray * excludedDomainIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(char)isEnabled;
-(id)userId;
-(void)setUserId:(id)arg1 ;
-(void)sessionReceivedBagWithEnabledDomains:(id)arg1 ;
-(void)updateCorrectionDict:(id)arg1 ;
-(double)sessionStartTime;
-(NSString *)applicationNameForUserAgent;
-(NSArray *)excludedDomainIdentifiers;
-(id)createResultObject;
-(void)setCepServerValues:(id)arg1 ;
-(id)supportedDomainIdentifiers;
-(double)gSessionStartTime;
-(void)setGSessionStartTime:(double)arg1 ;
-(NSDictionary *)cep_server_values;
-(void)setCep_server_values:(NSDictionary *)arg1 ;
@end
